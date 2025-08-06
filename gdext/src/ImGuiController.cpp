#include "ImGuiController.h"
#include "Context.h"
#include "ImGuiControllerHelper.h"
#include "ImGuiLayer.h"
#include "Input.h"
#include "InputLocal.h"
#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/classes/gd_script.hpp>
#include <godot_cpp/classes/packed_scene.hpp>
#include <godot_cpp/classes/resource_loader.hpp>
#include <godot_cpp/classes/file_access.hpp>
#include <godot_cpp/classes/json.hpp>

namespace ImGui::Godot {

namespace {
ImGuiController* instance = nullptr;
}

struct ImGuiController::Impl
{
    Window* window = nullptr;
    ImGuiControllerHelper* helper = nullptr;

    void CheckContentScale() const;
};

void ImGuiController::Impl::CheckContentScale() const
{
    if (window->get_content_scale_mode() == Window::CONTENT_SCALE_MODE_VIEWPORT)
    {
        UtilityFunctions::printerr("imgui-godot: scale mode `viewport` is unsupported");
    }
}

ImGuiController* ImGuiController::Instance()
{
    return instance;
}

void ImGuiController::_bind_methods()
{
    ADD_SIGNAL(MethodInfo("imgui_layout"));
    ClassDB::bind_method(D_METHOD("on_frame_pre_draw"), &ImGuiController::on_frame_pre_draw);
    ClassDB::bind_method(D_METHOD("OnLayerExiting"), &ImGuiController::OnLayerExiting);
    ClassDB::bind_method(D_METHOD("window_input_callback"), &ImGuiController::window_input_callback);
}

ImGuiController::ImGuiController() : impl(std::make_unique<Impl>())
{
}

ImGuiController::~ImGuiController()
{
}

String ImGuiController::LoadConfigFromJson(const String& key, const String& defaultValue)
{
    const String configPath = "res://config/imgui.json";
    Ref<FileAccess> file = FileAccess::open(configPath, FileAccess::READ);

    if (!file.is_valid()) {
        UtilityFunctions::push_warning(String("Failed to open imgui config file: ") + configPath + String(", using default: ") + defaultValue);
        return defaultValue;
    }

    String jsonString = file->get_as_text();
    file->close();

    Ref<JSON> json;
    json.instantiate();
    Error parseResult = json->parse(jsonString);

    if (parseResult != OK) {
        UtilityFunctions::push_warning(String("Failed to parse imgui config JSON: ") + json->get_error_message() + String(", using default: ") + defaultValue);
        return defaultValue;
    }

    Dictionary data = json->get_data();
    if (data.has(key)) {
        return data[key];
    } else {
        UtilityFunctions::push_warning(key + String(" not found in imgui config, using default: ") + defaultValue);
        return defaultValue;
    }
}

void ImGuiController::_enter_tree()
{
    instance = this;

    set_name("ImGuiController");
    Engine::get_singleton()->register_singleton("ImGuiController", this);
    impl->window = get_window();

    impl->CheckContentScale();

    ResourceLoader* RL = ResourceLoader::get_singleton();

    String configSettingsPath = LoadConfigFromJson("imgui_config_setting_path", "addons/imgui/config");
    String cfgPath = ProjectSettings::get_singleton()->get_setting(configSettingsPath, String());

    Ref<Resource> cfg;
    if (RL->exists(cfgPath))
    {
        cfg = RL->load(cfgPath);
        float scale = cfg->get("Scale");
        bool cfgok = scale > 0.0f;

        if (!cfgok)
        {
            UtilityFunctions::push_error("imgui-godot: config not a valid ImGuiConfig resource: " + cfgPath);
            cfg = Variant();
        }
    }
    else if (cfgPath.length() > 0)
    {
        UtilityFunctions::push_error("imgui-godot: config does not exist: " + cfgPath);
    }

    if (cfg.is_null())
    {
        String defaultConfigScriptPath = LoadConfigFromJson("default_script_path", "res://addons/imgui-godot/scripts/ImGuiConfig.gd");
        Ref<GDScript> script = RL->load(defaultConfigScriptPath);
        if (script.is_valid()) {
            cfg = script->new_();
        } else {
            UtilityFunctions::push_error("imgui-godot: failed to load default config script: " + defaultConfigScriptPath);
            script = RL->load("res://addons/imgui-godot/scripts/ImGuiConfig.gd");
            if (script.is_valid()) {
                cfg = script->new_();
            }
        }
    }

    ImGui::Godot::Init(cfg);

    impl->helper = memnew(ImGuiControllerHelper);
    add_child(impl->helper);

    SetMainViewport(impl->window);
}

void ImGuiController::_ready()
{
    set_process_priority(std::numeric_limits<int>::max());
    set_process_mode(Node::PROCESS_MODE_ALWAYS);
}

void ImGuiController::_exit_tree()
{
    ImGui::Godot::Shutdown();
}

void ImGuiController::_process(double delta)
{
#ifdef DEBUG_ENABLED
    if (Engine::get_singleton()->is_editor_hint())
    {
        // verify signal connections
        auto conns = get_signal_connection_list("imgui_layout");
        for (int i = 0; i < conns.size(); ++i)
        {
            const Dictionary& conn = conns[i];
            const Callable& cb = conn["callable"];
            if (!cb.is_valid())
                disconnect("imgui_layout", cb);
        }
    }
#endif

    static const StringName signalName("imgui_layout");
    emit_signal(signalName);

    Context* ctx = GetContext();
    ctx->Render();
    ctx->inProcessFrame = false;
}

void ImGuiController::_notification(int p_what)
{
    Context* ctx = GetContext();
    if (ctx)
        ctx->input->ProcessNotification(p_what);
}

void ImGuiController::OnLayerExiting()
{
    // an ImGuiLayer is being destroyed without calling SetMainViewport
    if (GetContext()->layer->get_viewport() != impl->window)
    {
        // revert to main window
        SetMainViewport(impl->window);
    }
}

void ImGuiController::SetMainViewport(Viewport* vp)
{
    Context* ctx = GetContext();
    ImGuiLayer* oldLayer = ctx->layer;
    if (oldLayer)
    {
        oldLayer->disconnect("tree_exiting", Callable(this, "OnLayerExiting"));
        oldLayer->queue_free();
    }

    ImGuiLayer* newLayer = memnew(ImGuiLayer);
    newLayer->connect("tree_exiting", Callable(this, "OnLayerExiting"));

    if (vp->get_class() == "Window")
    {
        ctx->input = std::make_unique<Input>();
        if (vp == impl->window)
            add_child(newLayer);
        else
            vp->add_child(newLayer);
        ImGui::GetIO().BackendFlags |=
            ImGuiBackendFlags_PlatformHasViewports | ImGuiBackendFlags_HasMouseHoveredViewport;
    }
    else
    {
        ctx->input = std::make_unique<InputLocal>();
        vp->add_child(newLayer);
        ImGui::GetIO().BackendFlags &= ~ImGuiBackendFlags_PlatformHasViewports;
        ImGui::GetIO().BackendFlags &= ~ImGuiBackendFlags_HasMouseHoveredViewport;
    }
    ctx->layer = newLayer;
}

void ImGuiController::on_frame_pre_draw()
{
    GetContext()->renderer->OnFramePreDraw();
}

void ImGuiController::window_input_callback(Ref<InputEvent> evt)
{
    GetContext()->input->ProcessInput(evt);
}

} // namespace ImGui::Godot
