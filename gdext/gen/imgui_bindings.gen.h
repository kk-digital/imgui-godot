namespace ImGui::Godot {
class ImGuiTableSortSpecsPtr;
class ImGuiTableColumnSortSpecsPtr;
class ImGuiStylePtr;
class ImGuiIOPtr;
class ImGuiWindowClassPtr;
class ImGuiListClipperPtr;
class ImGuiMultiSelectIOPtr;
class ImGuiSelectionRequestPtr;
class ImDrawListPtr;
class ImGui : public Object
{
    GDCLASS(ImGui, Object);

protected:
    static void _bind_methods();

public:
    enum WindowFlags
    {
        WindowFlags_None = ImGuiWindowFlags_None,
        WindowFlags_NoTitleBar = ImGuiWindowFlags_NoTitleBar,
        WindowFlags_NoResize = ImGuiWindowFlags_NoResize,
        WindowFlags_NoMove = ImGuiWindowFlags_NoMove,
        WindowFlags_NoScrollbar = ImGuiWindowFlags_NoScrollbar,
        WindowFlags_NoScrollWithMouse = ImGuiWindowFlags_NoScrollWithMouse,
        WindowFlags_NoCollapse = ImGuiWindowFlags_NoCollapse,
        WindowFlags_AlwaysAutoResize = ImGuiWindowFlags_AlwaysAutoResize,
        WindowFlags_NoBackground = ImGuiWindowFlags_NoBackground,
        WindowFlags_NoSavedSettings = ImGuiWindowFlags_NoSavedSettings,
        WindowFlags_NoMouseInputs = ImGuiWindowFlags_NoMouseInputs,
        WindowFlags_MenuBar = ImGuiWindowFlags_MenuBar,
        WindowFlags_HorizontalScrollbar = ImGuiWindowFlags_HorizontalScrollbar,
        WindowFlags_NoFocusOnAppearing = ImGuiWindowFlags_NoFocusOnAppearing,
        WindowFlags_NoBringToFrontOnFocus = ImGuiWindowFlags_NoBringToFrontOnFocus,
        WindowFlags_AlwaysVerticalScrollbar = ImGuiWindowFlags_AlwaysVerticalScrollbar,
        WindowFlags_AlwaysHorizontalScrollbar = ImGuiWindowFlags_AlwaysHorizontalScrollbar,
        WindowFlags_NoNavInputs = ImGuiWindowFlags_NoNavInputs,
        WindowFlags_NoNavFocus = ImGuiWindowFlags_NoNavFocus,
        WindowFlags_UnsavedDocument = ImGuiWindowFlags_UnsavedDocument,
        WindowFlags_NoDocking = ImGuiWindowFlags_NoDocking,
        WindowFlags_NoNav = ImGuiWindowFlags_NoNav,
        WindowFlags_NoDecoration = ImGuiWindowFlags_NoDecoration,
        WindowFlags_NoInputs = ImGuiWindowFlags_NoInputs,
        WindowFlags_ChildWindow = ImGuiWindowFlags_ChildWindow,
        WindowFlags_Tooltip = ImGuiWindowFlags_Tooltip,
        WindowFlags_Popup = ImGuiWindowFlags_Popup,
        WindowFlags_Modal = ImGuiWindowFlags_Modal,
        WindowFlags_ChildMenu = ImGuiWindowFlags_ChildMenu,
        WindowFlags_DockNodeHost = ImGuiWindowFlags_DockNodeHost,
    };
    enum ChildFlags
    {
        ChildFlags_None = ImGuiChildFlags_None,
        ChildFlags_Border = ImGuiChildFlags_Border,
        ChildFlags_AlwaysUseWindowPadding = ImGuiChildFlags_AlwaysUseWindowPadding,
        ChildFlags_ResizeX = ImGuiChildFlags_ResizeX,
        ChildFlags_ResizeY = ImGuiChildFlags_ResizeY,
        ChildFlags_AutoResizeX = ImGuiChildFlags_AutoResizeX,
        ChildFlags_AutoResizeY = ImGuiChildFlags_AutoResizeY,
        ChildFlags_AlwaysAutoResize = ImGuiChildFlags_AlwaysAutoResize,
        ChildFlags_FrameStyle = ImGuiChildFlags_FrameStyle,
        ChildFlags_NavFlattened = ImGuiChildFlags_NavFlattened,
    };
    enum ItemFlags
    {
        ItemFlags_None = ImGuiItemFlags_None,
        ItemFlags_NoTabStop = ImGuiItemFlags_NoTabStop,
        ItemFlags_NoNav = ImGuiItemFlags_NoNav,
        ItemFlags_NoNavDefaultFocus = ImGuiItemFlags_NoNavDefaultFocus,
        ItemFlags_ButtonRepeat = ImGuiItemFlags_ButtonRepeat,
        ItemFlags_AutoClosePopups = ImGuiItemFlags_AutoClosePopups,
    };
    enum InputTextFlags
    {
        InputTextFlags_None = ImGuiInputTextFlags_None,
        InputTextFlags_CharsDecimal = ImGuiInputTextFlags_CharsDecimal,
        InputTextFlags_CharsHexadecimal = ImGuiInputTextFlags_CharsHexadecimal,
        InputTextFlags_CharsScientific = ImGuiInputTextFlags_CharsScientific,
        InputTextFlags_CharsUppercase = ImGuiInputTextFlags_CharsUppercase,
        InputTextFlags_CharsNoBlank = ImGuiInputTextFlags_CharsNoBlank,
        InputTextFlags_AllowTabInput = ImGuiInputTextFlags_AllowTabInput,
        InputTextFlags_EnterReturnsTrue = ImGuiInputTextFlags_EnterReturnsTrue,
        InputTextFlags_EscapeClearsAll = ImGuiInputTextFlags_EscapeClearsAll,
        InputTextFlags_CtrlEnterForNewLine = ImGuiInputTextFlags_CtrlEnterForNewLine,
        InputTextFlags_ReadOnly = ImGuiInputTextFlags_ReadOnly,
        InputTextFlags_Password = ImGuiInputTextFlags_Password,
        InputTextFlags_AlwaysOverwrite = ImGuiInputTextFlags_AlwaysOverwrite,
        InputTextFlags_AutoSelectAll = ImGuiInputTextFlags_AutoSelectAll,
        InputTextFlags_ParseEmptyRefVal = ImGuiInputTextFlags_ParseEmptyRefVal,
        InputTextFlags_DisplayEmptyRefVal = ImGuiInputTextFlags_DisplayEmptyRefVal,
        InputTextFlags_NoHorizontalScroll = ImGuiInputTextFlags_NoHorizontalScroll,
        InputTextFlags_NoUndoRedo = ImGuiInputTextFlags_NoUndoRedo,
        InputTextFlags_CallbackCompletion = ImGuiInputTextFlags_CallbackCompletion,
        InputTextFlags_CallbackHistory = ImGuiInputTextFlags_CallbackHistory,
        InputTextFlags_CallbackAlways = ImGuiInputTextFlags_CallbackAlways,
        InputTextFlags_CallbackCharFilter = ImGuiInputTextFlags_CallbackCharFilter,
        InputTextFlags_CallbackResize = ImGuiInputTextFlags_CallbackResize,
        InputTextFlags_CallbackEdit = ImGuiInputTextFlags_CallbackEdit,
    };
    enum TreeNodeFlags
    {
        TreeNodeFlags_None = ImGuiTreeNodeFlags_None,
        TreeNodeFlags_Selected = ImGuiTreeNodeFlags_Selected,
        TreeNodeFlags_Framed = ImGuiTreeNodeFlags_Framed,
        TreeNodeFlags_AllowOverlap = ImGuiTreeNodeFlags_AllowOverlap,
        TreeNodeFlags_NoTreePushOnOpen = ImGuiTreeNodeFlags_NoTreePushOnOpen,
        TreeNodeFlags_NoAutoOpenOnLog = ImGuiTreeNodeFlags_NoAutoOpenOnLog,
        TreeNodeFlags_DefaultOpen = ImGuiTreeNodeFlags_DefaultOpen,
        TreeNodeFlags_OpenOnDoubleClick = ImGuiTreeNodeFlags_OpenOnDoubleClick,
        TreeNodeFlags_OpenOnArrow = ImGuiTreeNodeFlags_OpenOnArrow,
        TreeNodeFlags_Leaf = ImGuiTreeNodeFlags_Leaf,
        TreeNodeFlags_Bullet = ImGuiTreeNodeFlags_Bullet,
        TreeNodeFlags_FramePadding = ImGuiTreeNodeFlags_FramePadding,
        TreeNodeFlags_SpanAvailWidth = ImGuiTreeNodeFlags_SpanAvailWidth,
        TreeNodeFlags_SpanFullWidth = ImGuiTreeNodeFlags_SpanFullWidth,
        TreeNodeFlags_SpanTextWidth = ImGuiTreeNodeFlags_SpanTextWidth,
        TreeNodeFlags_SpanAllColumns = ImGuiTreeNodeFlags_SpanAllColumns,
        TreeNodeFlags_NavLeftJumpsBackHere = ImGuiTreeNodeFlags_NavLeftJumpsBackHere,
        TreeNodeFlags_CollapsingHeader = ImGuiTreeNodeFlags_CollapsingHeader,
    };
    enum PopupFlags
    {
        PopupFlags_None = ImGuiPopupFlags_None,
        PopupFlags_MouseButtonLeft = ImGuiPopupFlags_MouseButtonLeft,
        PopupFlags_MouseButtonRight = ImGuiPopupFlags_MouseButtonRight,
        PopupFlags_MouseButtonMiddle = ImGuiPopupFlags_MouseButtonMiddle,
        PopupFlags_NoReopen = ImGuiPopupFlags_NoReopen,
        PopupFlags_NoOpenOverExistingPopup = ImGuiPopupFlags_NoOpenOverExistingPopup,
        PopupFlags_NoOpenOverItems = ImGuiPopupFlags_NoOpenOverItems,
        PopupFlags_AnyPopupId = ImGuiPopupFlags_AnyPopupId,
        PopupFlags_AnyPopupLevel = ImGuiPopupFlags_AnyPopupLevel,
        PopupFlags_AnyPopup = ImGuiPopupFlags_AnyPopup,
    };
    enum SelectableFlags
    {
        SelectableFlags_None = ImGuiSelectableFlags_None,
        SelectableFlags_NoAutoClosePopups = ImGuiSelectableFlags_NoAutoClosePopups,
        SelectableFlags_SpanAllColumns = ImGuiSelectableFlags_SpanAllColumns,
        SelectableFlags_AllowDoubleClick = ImGuiSelectableFlags_AllowDoubleClick,
        SelectableFlags_Disabled = ImGuiSelectableFlags_Disabled,
        SelectableFlags_AllowOverlap = ImGuiSelectableFlags_AllowOverlap,
        SelectableFlags_Highlight = ImGuiSelectableFlags_Highlight,
    };
    enum ComboFlags
    {
        ComboFlags_None = ImGuiComboFlags_None,
        ComboFlags_PopupAlignLeft = ImGuiComboFlags_PopupAlignLeft,
        ComboFlags_HeightSmall = ImGuiComboFlags_HeightSmall,
        ComboFlags_HeightRegular = ImGuiComboFlags_HeightRegular,
        ComboFlags_HeightLarge = ImGuiComboFlags_HeightLarge,
        ComboFlags_HeightLargest = ImGuiComboFlags_HeightLargest,
        ComboFlags_NoArrowButton = ImGuiComboFlags_NoArrowButton,
        ComboFlags_NoPreview = ImGuiComboFlags_NoPreview,
        ComboFlags_WidthFitPreview = ImGuiComboFlags_WidthFitPreview,
    };
    enum TabBarFlags
    {
        TabBarFlags_None = ImGuiTabBarFlags_None,
        TabBarFlags_Reorderable = ImGuiTabBarFlags_Reorderable,
        TabBarFlags_AutoSelectNewTabs = ImGuiTabBarFlags_AutoSelectNewTabs,
        TabBarFlags_TabListPopupButton = ImGuiTabBarFlags_TabListPopupButton,
        TabBarFlags_NoCloseWithMiddleMouseButton = ImGuiTabBarFlags_NoCloseWithMiddleMouseButton,
        TabBarFlags_NoTabListScrollingButtons = ImGuiTabBarFlags_NoTabListScrollingButtons,
        TabBarFlags_NoTooltip = ImGuiTabBarFlags_NoTooltip,
        TabBarFlags_DrawSelectedOverline = ImGuiTabBarFlags_DrawSelectedOverline,
        TabBarFlags_FittingPolicyResizeDown = ImGuiTabBarFlags_FittingPolicyResizeDown,
        TabBarFlags_FittingPolicyScroll = ImGuiTabBarFlags_FittingPolicyScroll,
    };
    enum TabItemFlags
    {
        TabItemFlags_None = ImGuiTabItemFlags_None,
        TabItemFlags_UnsavedDocument = ImGuiTabItemFlags_UnsavedDocument,
        TabItemFlags_SetSelected = ImGuiTabItemFlags_SetSelected,
        TabItemFlags_NoCloseWithMiddleMouseButton = ImGuiTabItemFlags_NoCloseWithMiddleMouseButton,
        TabItemFlags_NoPushId = ImGuiTabItemFlags_NoPushId,
        TabItemFlags_NoTooltip = ImGuiTabItemFlags_NoTooltip,
        TabItemFlags_NoReorder = ImGuiTabItemFlags_NoReorder,
        TabItemFlags_Leading = ImGuiTabItemFlags_Leading,
        TabItemFlags_Trailing = ImGuiTabItemFlags_Trailing,
        TabItemFlags_NoAssumedClosure = ImGuiTabItemFlags_NoAssumedClosure,
    };
    enum FocusedFlags
    {
        FocusedFlags_None = ImGuiFocusedFlags_None,
        FocusedFlags_ChildWindows = ImGuiFocusedFlags_ChildWindows,
        FocusedFlags_RootWindow = ImGuiFocusedFlags_RootWindow,
        FocusedFlags_AnyWindow = ImGuiFocusedFlags_AnyWindow,
        FocusedFlags_NoPopupHierarchy = ImGuiFocusedFlags_NoPopupHierarchy,
        FocusedFlags_DockHierarchy = ImGuiFocusedFlags_DockHierarchy,
        FocusedFlags_RootAndChildWindows = ImGuiFocusedFlags_RootAndChildWindows,
    };
    enum HoveredFlags
    {
        HoveredFlags_None = ImGuiHoveredFlags_None,
        HoveredFlags_ChildWindows = ImGuiHoveredFlags_ChildWindows,
        HoveredFlags_RootWindow = ImGuiHoveredFlags_RootWindow,
        HoveredFlags_AnyWindow = ImGuiHoveredFlags_AnyWindow,
        HoveredFlags_NoPopupHierarchy = ImGuiHoveredFlags_NoPopupHierarchy,
        HoveredFlags_DockHierarchy = ImGuiHoveredFlags_DockHierarchy,
        HoveredFlags_AllowWhenBlockedByPopup = ImGuiHoveredFlags_AllowWhenBlockedByPopup,
        HoveredFlags_AllowWhenBlockedByActiveItem = ImGuiHoveredFlags_AllowWhenBlockedByActiveItem,
        HoveredFlags_AllowWhenOverlappedByItem = ImGuiHoveredFlags_AllowWhenOverlappedByItem,
        HoveredFlags_AllowWhenOverlappedByWindow = ImGuiHoveredFlags_AllowWhenOverlappedByWindow,
        HoveredFlags_AllowWhenDisabled = ImGuiHoveredFlags_AllowWhenDisabled,
        HoveredFlags_NoNavOverride = ImGuiHoveredFlags_NoNavOverride,
        HoveredFlags_AllowWhenOverlapped = ImGuiHoveredFlags_AllowWhenOverlapped,
        HoveredFlags_RectOnly = ImGuiHoveredFlags_RectOnly,
        HoveredFlags_RootAndChildWindows = ImGuiHoveredFlags_RootAndChildWindows,
        HoveredFlags_ForTooltip = ImGuiHoveredFlags_ForTooltip,
        HoveredFlags_Stationary = ImGuiHoveredFlags_Stationary,
        HoveredFlags_DelayNone = ImGuiHoveredFlags_DelayNone,
        HoveredFlags_DelayShort = ImGuiHoveredFlags_DelayShort,
        HoveredFlags_DelayNormal = ImGuiHoveredFlags_DelayNormal,
        HoveredFlags_NoSharedDelay = ImGuiHoveredFlags_NoSharedDelay,
    };
    enum DockNodeFlags
    {
        DockNodeFlags_None = ImGuiDockNodeFlags_None,
        DockNodeFlags_KeepAliveOnly = ImGuiDockNodeFlags_KeepAliveOnly,
        DockNodeFlags_NoDockingOverCentralNode = ImGuiDockNodeFlags_NoDockingOverCentralNode,
        DockNodeFlags_PassthruCentralNode = ImGuiDockNodeFlags_PassthruCentralNode,
        DockNodeFlags_NoDockingSplit = ImGuiDockNodeFlags_NoDockingSplit,
        DockNodeFlags_NoResize = ImGuiDockNodeFlags_NoResize,
        DockNodeFlags_AutoHideTabBar = ImGuiDockNodeFlags_AutoHideTabBar,
        DockNodeFlags_NoUndocking = ImGuiDockNodeFlags_NoUndocking,
    };
    enum DragDropFlags
    {
        DragDropFlags_None = ImGuiDragDropFlags_None,
        DragDropFlags_SourceNoPreviewTooltip = ImGuiDragDropFlags_SourceNoPreviewTooltip,
        DragDropFlags_SourceNoDisableHover = ImGuiDragDropFlags_SourceNoDisableHover,
        DragDropFlags_SourceNoHoldToOpenOthers = ImGuiDragDropFlags_SourceNoHoldToOpenOthers,
        DragDropFlags_SourceAllowNullID = ImGuiDragDropFlags_SourceAllowNullID,
        DragDropFlags_SourceExtern = ImGuiDragDropFlags_SourceExtern,
        DragDropFlags_PayloadAutoExpire = ImGuiDragDropFlags_PayloadAutoExpire,
        DragDropFlags_PayloadNoCrossContext = ImGuiDragDropFlags_PayloadNoCrossContext,
        DragDropFlags_PayloadNoCrossProcess = ImGuiDragDropFlags_PayloadNoCrossProcess,
        DragDropFlags_AcceptBeforeDelivery = ImGuiDragDropFlags_AcceptBeforeDelivery,
        DragDropFlags_AcceptNoDrawDefaultRect = ImGuiDragDropFlags_AcceptNoDrawDefaultRect,
        DragDropFlags_AcceptNoPreviewTooltip = ImGuiDragDropFlags_AcceptNoPreviewTooltip,
        DragDropFlags_AcceptPeekOnly = ImGuiDragDropFlags_AcceptPeekOnly,
    };
    enum DataType
    {
        DataType_S8 = ImGuiDataType_S8,
        DataType_U8 = ImGuiDataType_U8,
        DataType_S16 = ImGuiDataType_S16,
        DataType_U16 = ImGuiDataType_U16,
        DataType_S32 = ImGuiDataType_S32,
        DataType_U32 = ImGuiDataType_U32,
        DataType_S64 = ImGuiDataType_S64,
        DataType_U64 = ImGuiDataType_U64,
        DataType_Float = ImGuiDataType_Float,
        DataType_Double = ImGuiDataType_Double,
        DataType_Bool = ImGuiDataType_Bool,
    };
    enum Dir
    {
        Dir_None = ImGuiDir_None,
        Dir_Left = ImGuiDir_Left,
        Dir_Right = ImGuiDir_Right,
        Dir_Up = ImGuiDir_Up,
        Dir_Down = ImGuiDir_Down,
    };
    enum SortDirection
    {
        SortDirection_None = ImGuiSortDirection_None,
        SortDirection_Ascending = ImGuiSortDirection_Ascending,
        SortDirection_Descending = ImGuiSortDirection_Descending,
    };
    enum Key
    {
        Key_None = ImGuiKey_None,
        Key_Tab = ImGuiKey_Tab,
        Key_LeftArrow = ImGuiKey_LeftArrow,
        Key_RightArrow = ImGuiKey_RightArrow,
        Key_UpArrow = ImGuiKey_UpArrow,
        Key_DownArrow = ImGuiKey_DownArrow,
        Key_PageUp = ImGuiKey_PageUp,
        Key_PageDown = ImGuiKey_PageDown,
        Key_Home = ImGuiKey_Home,
        Key_End = ImGuiKey_End,
        Key_Insert = ImGuiKey_Insert,
        Key_Delete = ImGuiKey_Delete,
        Key_Backspace = ImGuiKey_Backspace,
        Key_Space = ImGuiKey_Space,
        Key_Enter = ImGuiKey_Enter,
        Key_Escape = ImGuiKey_Escape,
        Key_LeftCtrl = ImGuiKey_LeftCtrl,
        Key_LeftShift = ImGuiKey_LeftShift,
        Key_LeftAlt = ImGuiKey_LeftAlt,
        Key_LeftSuper = ImGuiKey_LeftSuper,
        Key_RightCtrl = ImGuiKey_RightCtrl,
        Key_RightShift = ImGuiKey_RightShift,
        Key_RightAlt = ImGuiKey_RightAlt,
        Key_RightSuper = ImGuiKey_RightSuper,
        Key_Menu = ImGuiKey_Menu,
        Key_0 = ImGuiKey_0,
        Key_1 = ImGuiKey_1,
        Key_2 = ImGuiKey_2,
        Key_3 = ImGuiKey_3,
        Key_4 = ImGuiKey_4,
        Key_5 = ImGuiKey_5,
        Key_6 = ImGuiKey_6,
        Key_7 = ImGuiKey_7,
        Key_8 = ImGuiKey_8,
        Key_9 = ImGuiKey_9,
        Key_A = ImGuiKey_A,
        Key_B = ImGuiKey_B,
        Key_C = ImGuiKey_C,
        Key_D = ImGuiKey_D,
        Key_E = ImGuiKey_E,
        Key_F = ImGuiKey_F,
        Key_G = ImGuiKey_G,
        Key_H = ImGuiKey_H,
        Key_I = ImGuiKey_I,
        Key_J = ImGuiKey_J,
        Key_K = ImGuiKey_K,
        Key_L = ImGuiKey_L,
        Key_M = ImGuiKey_M,
        Key_N = ImGuiKey_N,
        Key_O = ImGuiKey_O,
        Key_P = ImGuiKey_P,
        Key_Q = ImGuiKey_Q,
        Key_R = ImGuiKey_R,
        Key_S = ImGuiKey_S,
        Key_T = ImGuiKey_T,
        Key_U = ImGuiKey_U,
        Key_V = ImGuiKey_V,
        Key_W = ImGuiKey_W,
        Key_X = ImGuiKey_X,
        Key_Y = ImGuiKey_Y,
        Key_Z = ImGuiKey_Z,
        Key_F1 = ImGuiKey_F1,
        Key_F2 = ImGuiKey_F2,
        Key_F3 = ImGuiKey_F3,
        Key_F4 = ImGuiKey_F4,
        Key_F5 = ImGuiKey_F5,
        Key_F6 = ImGuiKey_F6,
        Key_F7 = ImGuiKey_F7,
        Key_F8 = ImGuiKey_F8,
        Key_F9 = ImGuiKey_F9,
        Key_F10 = ImGuiKey_F10,
        Key_F11 = ImGuiKey_F11,
        Key_F12 = ImGuiKey_F12,
        Key_F13 = ImGuiKey_F13,
        Key_F14 = ImGuiKey_F14,
        Key_F15 = ImGuiKey_F15,
        Key_F16 = ImGuiKey_F16,
        Key_F17 = ImGuiKey_F17,
        Key_F18 = ImGuiKey_F18,
        Key_F19 = ImGuiKey_F19,
        Key_F20 = ImGuiKey_F20,
        Key_F21 = ImGuiKey_F21,
        Key_F22 = ImGuiKey_F22,
        Key_F23 = ImGuiKey_F23,
        Key_F24 = ImGuiKey_F24,
        Key_Apostrophe = ImGuiKey_Apostrophe,
        Key_Comma = ImGuiKey_Comma,
        Key_Minus = ImGuiKey_Minus,
        Key_Period = ImGuiKey_Period,
        Key_Slash = ImGuiKey_Slash,
        Key_Semicolon = ImGuiKey_Semicolon,
        Key_Equal = ImGuiKey_Equal,
        Key_LeftBracket = ImGuiKey_LeftBracket,
        Key_Backslash = ImGuiKey_Backslash,
        Key_RightBracket = ImGuiKey_RightBracket,
        Key_GraveAccent = ImGuiKey_GraveAccent,
        Key_CapsLock = ImGuiKey_CapsLock,
        Key_ScrollLock = ImGuiKey_ScrollLock,
        Key_NumLock = ImGuiKey_NumLock,
        Key_PrintScreen = ImGuiKey_PrintScreen,
        Key_Pause = ImGuiKey_Pause,
        Key_Keypad0 = ImGuiKey_Keypad0,
        Key_Keypad1 = ImGuiKey_Keypad1,
        Key_Keypad2 = ImGuiKey_Keypad2,
        Key_Keypad3 = ImGuiKey_Keypad3,
        Key_Keypad4 = ImGuiKey_Keypad4,
        Key_Keypad5 = ImGuiKey_Keypad5,
        Key_Keypad6 = ImGuiKey_Keypad6,
        Key_Keypad7 = ImGuiKey_Keypad7,
        Key_Keypad8 = ImGuiKey_Keypad8,
        Key_Keypad9 = ImGuiKey_Keypad9,
        Key_KeypadDecimal = ImGuiKey_KeypadDecimal,
        Key_KeypadDivide = ImGuiKey_KeypadDivide,
        Key_KeypadMultiply = ImGuiKey_KeypadMultiply,
        Key_KeypadSubtract = ImGuiKey_KeypadSubtract,
        Key_KeypadAdd = ImGuiKey_KeypadAdd,
        Key_KeypadEnter = ImGuiKey_KeypadEnter,
        Key_KeypadEqual = ImGuiKey_KeypadEqual,
        Key_AppBack = ImGuiKey_AppBack,
        Key_AppForward = ImGuiKey_AppForward,
        Key_GamepadStart = ImGuiKey_GamepadStart,
        Key_GamepadBack = ImGuiKey_GamepadBack,
        Key_GamepadFaceLeft = ImGuiKey_GamepadFaceLeft,
        Key_GamepadFaceRight = ImGuiKey_GamepadFaceRight,
        Key_GamepadFaceUp = ImGuiKey_GamepadFaceUp,
        Key_GamepadFaceDown = ImGuiKey_GamepadFaceDown,
        Key_GamepadDpadLeft = ImGuiKey_GamepadDpadLeft,
        Key_GamepadDpadRight = ImGuiKey_GamepadDpadRight,
        Key_GamepadDpadUp = ImGuiKey_GamepadDpadUp,
        Key_GamepadDpadDown = ImGuiKey_GamepadDpadDown,
        Key_GamepadL1 = ImGuiKey_GamepadL1,
        Key_GamepadR1 = ImGuiKey_GamepadR1,
        Key_GamepadL2 = ImGuiKey_GamepadL2,
        Key_GamepadR2 = ImGuiKey_GamepadR2,
        Key_GamepadL3 = ImGuiKey_GamepadL3,
        Key_GamepadR3 = ImGuiKey_GamepadR3,
        Key_GamepadLStickLeft = ImGuiKey_GamepadLStickLeft,
        Key_GamepadLStickRight = ImGuiKey_GamepadLStickRight,
        Key_GamepadLStickUp = ImGuiKey_GamepadLStickUp,
        Key_GamepadLStickDown = ImGuiKey_GamepadLStickDown,
        Key_GamepadRStickLeft = ImGuiKey_GamepadRStickLeft,
        Key_GamepadRStickRight = ImGuiKey_GamepadRStickRight,
        Key_GamepadRStickUp = ImGuiKey_GamepadRStickUp,
        Key_GamepadRStickDown = ImGuiKey_GamepadRStickDown,
        Key_MouseLeft = ImGuiKey_MouseLeft,
        Key_MouseRight = ImGuiKey_MouseRight,
        Key_MouseMiddle = ImGuiKey_MouseMiddle,
        Key_MouseX1 = ImGuiKey_MouseX1,
        Key_MouseX2 = ImGuiKey_MouseX2,
        Key_MouseWheelX = ImGuiKey_MouseWheelX,
        Key_MouseWheelY = ImGuiKey_MouseWheelY,
        Key_ReservedForModCtrl = ImGuiKey_ReservedForModCtrl,
        Key_ReservedForModShift = ImGuiKey_ReservedForModShift,
        Key_ReservedForModAlt = ImGuiKey_ReservedForModAlt,
        Key_ReservedForModSuper = ImGuiKey_ReservedForModSuper,
        Mod_None = ImGuiMod_None,
        Mod_Ctrl = ImGuiMod_Ctrl,
        Mod_Shift = ImGuiMod_Shift,
        Mod_Alt = ImGuiMod_Alt,
        Mod_Super = ImGuiMod_Super,
    };
    enum InputFlags
    {
        InputFlags_None = ImGuiInputFlags_None,
        InputFlags_Repeat = ImGuiInputFlags_Repeat,
        InputFlags_RouteActive = ImGuiInputFlags_RouteActive,
        InputFlags_RouteFocused = ImGuiInputFlags_RouteFocused,
        InputFlags_RouteGlobal = ImGuiInputFlags_RouteGlobal,
        InputFlags_RouteAlways = ImGuiInputFlags_RouteAlways,
        InputFlags_RouteOverFocused = ImGuiInputFlags_RouteOverFocused,
        InputFlags_RouteOverActive = ImGuiInputFlags_RouteOverActive,
        InputFlags_RouteUnlessBgFocused = ImGuiInputFlags_RouteUnlessBgFocused,
        InputFlags_RouteFromRootWindow = ImGuiInputFlags_RouteFromRootWindow,
        InputFlags_Tooltip = ImGuiInputFlags_Tooltip,
    };
    enum NavInput
    {
    };
    enum ConfigFlags
    {
        ConfigFlags_None = ImGuiConfigFlags_None,
        ConfigFlags_NavEnableKeyboard = ImGuiConfigFlags_NavEnableKeyboard,
        ConfigFlags_NavEnableGamepad = ImGuiConfigFlags_NavEnableGamepad,
        ConfigFlags_NavEnableSetMousePos = ImGuiConfigFlags_NavEnableSetMousePos,
        ConfigFlags_NavNoCaptureKeyboard = ImGuiConfigFlags_NavNoCaptureKeyboard,
        ConfigFlags_NoMouse = ImGuiConfigFlags_NoMouse,
        ConfigFlags_NoMouseCursorChange = ImGuiConfigFlags_NoMouseCursorChange,
        ConfigFlags_NoKeyboard = ImGuiConfigFlags_NoKeyboard,
        ConfigFlags_DockingEnable = ImGuiConfigFlags_DockingEnable,
        ConfigFlags_ViewportsEnable = ImGuiConfigFlags_ViewportsEnable,
        ConfigFlags_DpiEnableScaleViewports = ImGuiConfigFlags_DpiEnableScaleViewports,
        ConfigFlags_DpiEnableScaleFonts = ImGuiConfigFlags_DpiEnableScaleFonts,
        ConfigFlags_IsSRGB = ImGuiConfigFlags_IsSRGB,
        ConfigFlags_IsTouchScreen = ImGuiConfigFlags_IsTouchScreen,
    };
    enum BackendFlags
    {
        BackendFlags_None = ImGuiBackendFlags_None,
        BackendFlags_HasGamepad = ImGuiBackendFlags_HasGamepad,
        BackendFlags_HasMouseCursors = ImGuiBackendFlags_HasMouseCursors,
        BackendFlags_HasSetMousePos = ImGuiBackendFlags_HasSetMousePos,
        BackendFlags_RendererHasVtxOffset = ImGuiBackendFlags_RendererHasVtxOffset,
        BackendFlags_PlatformHasViewports = ImGuiBackendFlags_PlatformHasViewports,
        BackendFlags_HasMouseHoveredViewport = ImGuiBackendFlags_HasMouseHoveredViewport,
        BackendFlags_RendererHasViewports = ImGuiBackendFlags_RendererHasViewports,
    };
    enum Col
    {
        Col_Text = ImGuiCol_Text,
        Col_TextDisabled = ImGuiCol_TextDisabled,
        Col_WindowBg = ImGuiCol_WindowBg,
        Col_ChildBg = ImGuiCol_ChildBg,
        Col_PopupBg = ImGuiCol_PopupBg,
        Col_Border = ImGuiCol_Border,
        Col_BorderShadow = ImGuiCol_BorderShadow,
        Col_FrameBg = ImGuiCol_FrameBg,
        Col_FrameBgHovered = ImGuiCol_FrameBgHovered,
        Col_FrameBgActive = ImGuiCol_FrameBgActive,
        Col_TitleBg = ImGuiCol_TitleBg,
        Col_TitleBgActive = ImGuiCol_TitleBgActive,
        Col_TitleBgCollapsed = ImGuiCol_TitleBgCollapsed,
        Col_MenuBarBg = ImGuiCol_MenuBarBg,
        Col_ScrollbarBg = ImGuiCol_ScrollbarBg,
        Col_ScrollbarGrab = ImGuiCol_ScrollbarGrab,
        Col_ScrollbarGrabHovered = ImGuiCol_ScrollbarGrabHovered,
        Col_ScrollbarGrabActive = ImGuiCol_ScrollbarGrabActive,
        Col_CheckMark = ImGuiCol_CheckMark,
        Col_SliderGrab = ImGuiCol_SliderGrab,
        Col_SliderGrabActive = ImGuiCol_SliderGrabActive,
        Col_Button = ImGuiCol_Button,
        Col_ButtonHovered = ImGuiCol_ButtonHovered,
        Col_ButtonActive = ImGuiCol_ButtonActive,
        Col_Header = ImGuiCol_Header,
        Col_HeaderHovered = ImGuiCol_HeaderHovered,
        Col_HeaderActive = ImGuiCol_HeaderActive,
        Col_Separator = ImGuiCol_Separator,
        Col_SeparatorHovered = ImGuiCol_SeparatorHovered,
        Col_SeparatorActive = ImGuiCol_SeparatorActive,
        Col_ResizeGrip = ImGuiCol_ResizeGrip,
        Col_ResizeGripHovered = ImGuiCol_ResizeGripHovered,
        Col_ResizeGripActive = ImGuiCol_ResizeGripActive,
        Col_TabHovered = ImGuiCol_TabHovered,
        Col_Tab = ImGuiCol_Tab,
        Col_TabSelected = ImGuiCol_TabSelected,
        Col_TabSelectedOverline = ImGuiCol_TabSelectedOverline,
        Col_TabDimmed = ImGuiCol_TabDimmed,
        Col_TabDimmedSelected = ImGuiCol_TabDimmedSelected,
        Col_TabDimmedSelectedOverline = ImGuiCol_TabDimmedSelectedOverline,
        Col_DockingPreview = ImGuiCol_DockingPreview,
        Col_DockingEmptyBg = ImGuiCol_DockingEmptyBg,
        Col_PlotLines = ImGuiCol_PlotLines,
        Col_PlotLinesHovered = ImGuiCol_PlotLinesHovered,
        Col_PlotHistogram = ImGuiCol_PlotHistogram,
        Col_PlotHistogramHovered = ImGuiCol_PlotHistogramHovered,
        Col_TableHeaderBg = ImGuiCol_TableHeaderBg,
        Col_TableBorderStrong = ImGuiCol_TableBorderStrong,
        Col_TableBorderLight = ImGuiCol_TableBorderLight,
        Col_TableRowBg = ImGuiCol_TableRowBg,
        Col_TableRowBgAlt = ImGuiCol_TableRowBgAlt,
        Col_TextLink = ImGuiCol_TextLink,
        Col_TextSelectedBg = ImGuiCol_TextSelectedBg,
        Col_DragDropTarget = ImGuiCol_DragDropTarget,
        Col_NavHighlight = ImGuiCol_NavHighlight,
        Col_NavWindowingHighlight = ImGuiCol_NavWindowingHighlight,
        Col_NavWindowingDimBg = ImGuiCol_NavWindowingDimBg,
        Col_ModalWindowDimBg = ImGuiCol_ModalWindowDimBg,
    };
    enum StyleVar
    {
        StyleVar_Alpha = ImGuiStyleVar_Alpha,
        StyleVar_DisabledAlpha = ImGuiStyleVar_DisabledAlpha,
        StyleVar_WindowPadding = ImGuiStyleVar_WindowPadding,
        StyleVar_WindowRounding = ImGuiStyleVar_WindowRounding,
        StyleVar_WindowBorderSize = ImGuiStyleVar_WindowBorderSize,
        StyleVar_WindowMinSize = ImGuiStyleVar_WindowMinSize,
        StyleVar_WindowTitleAlign = ImGuiStyleVar_WindowTitleAlign,
        StyleVar_ChildRounding = ImGuiStyleVar_ChildRounding,
        StyleVar_ChildBorderSize = ImGuiStyleVar_ChildBorderSize,
        StyleVar_PopupRounding = ImGuiStyleVar_PopupRounding,
        StyleVar_PopupBorderSize = ImGuiStyleVar_PopupBorderSize,
        StyleVar_FramePadding = ImGuiStyleVar_FramePadding,
        StyleVar_FrameRounding = ImGuiStyleVar_FrameRounding,
        StyleVar_FrameBorderSize = ImGuiStyleVar_FrameBorderSize,
        StyleVar_ItemSpacing = ImGuiStyleVar_ItemSpacing,
        StyleVar_ItemInnerSpacing = ImGuiStyleVar_ItemInnerSpacing,
        StyleVar_IndentSpacing = ImGuiStyleVar_IndentSpacing,
        StyleVar_CellPadding = ImGuiStyleVar_CellPadding,
        StyleVar_ScrollbarSize = ImGuiStyleVar_ScrollbarSize,
        StyleVar_ScrollbarRounding = ImGuiStyleVar_ScrollbarRounding,
        StyleVar_GrabMinSize = ImGuiStyleVar_GrabMinSize,
        StyleVar_GrabRounding = ImGuiStyleVar_GrabRounding,
        StyleVar_TabRounding = ImGuiStyleVar_TabRounding,
        StyleVar_TabBorderSize = ImGuiStyleVar_TabBorderSize,
        StyleVar_TabBarBorderSize = ImGuiStyleVar_TabBarBorderSize,
        StyleVar_TabBarOverlineSize = ImGuiStyleVar_TabBarOverlineSize,
        StyleVar_TableAngledHeadersAngle = ImGuiStyleVar_TableAngledHeadersAngle,
        StyleVar_TableAngledHeadersTextAlign = ImGuiStyleVar_TableAngledHeadersTextAlign,
        StyleVar_ButtonTextAlign = ImGuiStyleVar_ButtonTextAlign,
        StyleVar_SelectableTextAlign = ImGuiStyleVar_SelectableTextAlign,
        StyleVar_SeparatorTextBorderSize = ImGuiStyleVar_SeparatorTextBorderSize,
        StyleVar_SeparatorTextAlign = ImGuiStyleVar_SeparatorTextAlign,
        StyleVar_SeparatorTextPadding = ImGuiStyleVar_SeparatorTextPadding,
        StyleVar_DockingSeparatorSize = ImGuiStyleVar_DockingSeparatorSize,
    };
    enum ButtonFlags
    {
        ButtonFlags_None = ImGuiButtonFlags_None,
        ButtonFlags_MouseButtonLeft = ImGuiButtonFlags_MouseButtonLeft,
        ButtonFlags_MouseButtonRight = ImGuiButtonFlags_MouseButtonRight,
        ButtonFlags_MouseButtonMiddle = ImGuiButtonFlags_MouseButtonMiddle,
    };
    enum ColorEditFlags
    {
        ColorEditFlags_None = ImGuiColorEditFlags_None,
        ColorEditFlags_NoAlpha = ImGuiColorEditFlags_NoAlpha,
        ColorEditFlags_NoPicker = ImGuiColorEditFlags_NoPicker,
        ColorEditFlags_NoOptions = ImGuiColorEditFlags_NoOptions,
        ColorEditFlags_NoSmallPreview = ImGuiColorEditFlags_NoSmallPreview,
        ColorEditFlags_NoInputs = ImGuiColorEditFlags_NoInputs,
        ColorEditFlags_NoTooltip = ImGuiColorEditFlags_NoTooltip,
        ColorEditFlags_NoLabel = ImGuiColorEditFlags_NoLabel,
        ColorEditFlags_NoSidePreview = ImGuiColorEditFlags_NoSidePreview,
        ColorEditFlags_NoDragDrop = ImGuiColorEditFlags_NoDragDrop,
        ColorEditFlags_NoBorder = ImGuiColorEditFlags_NoBorder,
        ColorEditFlags_AlphaBar = ImGuiColorEditFlags_AlphaBar,
        ColorEditFlags_AlphaPreview = ImGuiColorEditFlags_AlphaPreview,
        ColorEditFlags_AlphaPreviewHalf = ImGuiColorEditFlags_AlphaPreviewHalf,
        ColorEditFlags_HDR = ImGuiColorEditFlags_HDR,
        ColorEditFlags_DisplayRGB = ImGuiColorEditFlags_DisplayRGB,
        ColorEditFlags_DisplayHSV = ImGuiColorEditFlags_DisplayHSV,
        ColorEditFlags_DisplayHex = ImGuiColorEditFlags_DisplayHex,
        ColorEditFlags_Uint8 = ImGuiColorEditFlags_Uint8,
        ColorEditFlags_Float = ImGuiColorEditFlags_Float,
        ColorEditFlags_PickerHueBar = ImGuiColorEditFlags_PickerHueBar,
        ColorEditFlags_PickerHueWheel = ImGuiColorEditFlags_PickerHueWheel,
        ColorEditFlags_InputRGB = ImGuiColorEditFlags_InputRGB,
        ColorEditFlags_InputHSV = ImGuiColorEditFlags_InputHSV,
    };
    enum SliderFlags
    {
        SliderFlags_None = ImGuiSliderFlags_None,
        SliderFlags_AlwaysClamp = ImGuiSliderFlags_AlwaysClamp,
        SliderFlags_Logarithmic = ImGuiSliderFlags_Logarithmic,
        SliderFlags_NoRoundToFormat = ImGuiSliderFlags_NoRoundToFormat,
        SliderFlags_NoInput = ImGuiSliderFlags_NoInput,
        SliderFlags_WrapAround = ImGuiSliderFlags_WrapAround,
    };
    enum MouseButton
    {
        MouseButton_Left = ImGuiMouseButton_Left,
        MouseButton_Right = ImGuiMouseButton_Right,
        MouseButton_Middle = ImGuiMouseButton_Middle,
    };
    enum MouseCursor
    {
        MouseCursor_None = ImGuiMouseCursor_None,
        MouseCursor_Arrow = ImGuiMouseCursor_Arrow,
        MouseCursor_TextInput = ImGuiMouseCursor_TextInput,
        MouseCursor_ResizeAll = ImGuiMouseCursor_ResizeAll,
        MouseCursor_ResizeNS = ImGuiMouseCursor_ResizeNS,
        MouseCursor_ResizeEW = ImGuiMouseCursor_ResizeEW,
        MouseCursor_ResizeNESW = ImGuiMouseCursor_ResizeNESW,
        MouseCursor_ResizeNWSE = ImGuiMouseCursor_ResizeNWSE,
        MouseCursor_Hand = ImGuiMouseCursor_Hand,
        MouseCursor_NotAllowed = ImGuiMouseCursor_NotAllowed,
    };
    enum MouseSource
    {
        MouseSource_Mouse = ImGuiMouseSource_Mouse,
        MouseSource_TouchScreen = ImGuiMouseSource_TouchScreen,
        MouseSource_Pen = ImGuiMouseSource_Pen,
    };
    enum Cond
    {
        Cond_None = ImGuiCond_None,
        Cond_Always = ImGuiCond_Always,
        Cond_Once = ImGuiCond_Once,
        Cond_FirstUseEver = ImGuiCond_FirstUseEver,
        Cond_Appearing = ImGuiCond_Appearing,
    };
    enum TableFlags
    {
        TableFlags_None = ImGuiTableFlags_None,
        TableFlags_Resizable = ImGuiTableFlags_Resizable,
        TableFlags_Reorderable = ImGuiTableFlags_Reorderable,
        TableFlags_Hideable = ImGuiTableFlags_Hideable,
        TableFlags_Sortable = ImGuiTableFlags_Sortable,
        TableFlags_NoSavedSettings = ImGuiTableFlags_NoSavedSettings,
        TableFlags_ContextMenuInBody = ImGuiTableFlags_ContextMenuInBody,
        TableFlags_RowBg = ImGuiTableFlags_RowBg,
        TableFlags_BordersInnerH = ImGuiTableFlags_BordersInnerH,
        TableFlags_BordersOuterH = ImGuiTableFlags_BordersOuterH,
        TableFlags_BordersInnerV = ImGuiTableFlags_BordersInnerV,
        TableFlags_BordersOuterV = ImGuiTableFlags_BordersOuterV,
        TableFlags_BordersH = ImGuiTableFlags_BordersH,
        TableFlags_BordersV = ImGuiTableFlags_BordersV,
        TableFlags_BordersInner = ImGuiTableFlags_BordersInner,
        TableFlags_BordersOuter = ImGuiTableFlags_BordersOuter,
        TableFlags_Borders = ImGuiTableFlags_Borders,
        TableFlags_NoBordersInBody = ImGuiTableFlags_NoBordersInBody,
        TableFlags_NoBordersInBodyUntilResize = ImGuiTableFlags_NoBordersInBodyUntilResize,
        TableFlags_SizingFixedFit = ImGuiTableFlags_SizingFixedFit,
        TableFlags_SizingFixedSame = ImGuiTableFlags_SizingFixedSame,
        TableFlags_SizingStretchProp = ImGuiTableFlags_SizingStretchProp,
        TableFlags_SizingStretchSame = ImGuiTableFlags_SizingStretchSame,
        TableFlags_NoHostExtendX = ImGuiTableFlags_NoHostExtendX,
        TableFlags_NoHostExtendY = ImGuiTableFlags_NoHostExtendY,
        TableFlags_NoKeepColumnsVisible = ImGuiTableFlags_NoKeepColumnsVisible,
        TableFlags_PreciseWidths = ImGuiTableFlags_PreciseWidths,
        TableFlags_NoClip = ImGuiTableFlags_NoClip,
        TableFlags_PadOuterX = ImGuiTableFlags_PadOuterX,
        TableFlags_NoPadOuterX = ImGuiTableFlags_NoPadOuterX,
        TableFlags_NoPadInnerX = ImGuiTableFlags_NoPadInnerX,
        TableFlags_ScrollX = ImGuiTableFlags_ScrollX,
        TableFlags_ScrollY = ImGuiTableFlags_ScrollY,
        TableFlags_SortMulti = ImGuiTableFlags_SortMulti,
        TableFlags_SortTristate = ImGuiTableFlags_SortTristate,
        TableFlags_HighlightHoveredColumn = ImGuiTableFlags_HighlightHoveredColumn,
    };
    enum TableColumnFlags
    {
        TableColumnFlags_None = ImGuiTableColumnFlags_None,
        TableColumnFlags_Disabled = ImGuiTableColumnFlags_Disabled,
        TableColumnFlags_DefaultHide = ImGuiTableColumnFlags_DefaultHide,
        TableColumnFlags_DefaultSort = ImGuiTableColumnFlags_DefaultSort,
        TableColumnFlags_WidthStretch = ImGuiTableColumnFlags_WidthStretch,
        TableColumnFlags_WidthFixed = ImGuiTableColumnFlags_WidthFixed,
        TableColumnFlags_NoResize = ImGuiTableColumnFlags_NoResize,
        TableColumnFlags_NoReorder = ImGuiTableColumnFlags_NoReorder,
        TableColumnFlags_NoHide = ImGuiTableColumnFlags_NoHide,
        TableColumnFlags_NoClip = ImGuiTableColumnFlags_NoClip,
        TableColumnFlags_NoSort = ImGuiTableColumnFlags_NoSort,
        TableColumnFlags_NoSortAscending = ImGuiTableColumnFlags_NoSortAscending,
        TableColumnFlags_NoSortDescending = ImGuiTableColumnFlags_NoSortDescending,
        TableColumnFlags_NoHeaderLabel = ImGuiTableColumnFlags_NoHeaderLabel,
        TableColumnFlags_NoHeaderWidth = ImGuiTableColumnFlags_NoHeaderWidth,
        TableColumnFlags_PreferSortAscending = ImGuiTableColumnFlags_PreferSortAscending,
        TableColumnFlags_PreferSortDescending = ImGuiTableColumnFlags_PreferSortDescending,
        TableColumnFlags_IndentEnable = ImGuiTableColumnFlags_IndentEnable,
        TableColumnFlags_IndentDisable = ImGuiTableColumnFlags_IndentDisable,
        TableColumnFlags_AngledHeader = ImGuiTableColumnFlags_AngledHeader,
        TableColumnFlags_IsEnabled = ImGuiTableColumnFlags_IsEnabled,
        TableColumnFlags_IsVisible = ImGuiTableColumnFlags_IsVisible,
        TableColumnFlags_IsSorted = ImGuiTableColumnFlags_IsSorted,
        TableColumnFlags_IsHovered = ImGuiTableColumnFlags_IsHovered,
    };
    enum TableRowFlags
    {
        TableRowFlags_None = ImGuiTableRowFlags_None,
        TableRowFlags_Headers = ImGuiTableRowFlags_Headers,
    };
    enum TableBgTarget
    {
        TableBgTarget_None = ImGuiTableBgTarget_None,
        TableBgTarget_RowBg0 = ImGuiTableBgTarget_RowBg0,
        TableBgTarget_RowBg1 = ImGuiTableBgTarget_RowBg1,
        TableBgTarget_CellBg = ImGuiTableBgTarget_CellBg,
    };
    enum MultiSelectFlags
    {
        MultiSelectFlags_None = ImGuiMultiSelectFlags_None,
        MultiSelectFlags_SingleSelect = ImGuiMultiSelectFlags_SingleSelect,
        MultiSelectFlags_NoSelectAll = ImGuiMultiSelectFlags_NoSelectAll,
        MultiSelectFlags_NoRangeSelect = ImGuiMultiSelectFlags_NoRangeSelect,
        MultiSelectFlags_NoAutoSelect = ImGuiMultiSelectFlags_NoAutoSelect,
        MultiSelectFlags_NoAutoClear = ImGuiMultiSelectFlags_NoAutoClear,
        MultiSelectFlags_NoAutoClearOnReselect = ImGuiMultiSelectFlags_NoAutoClearOnReselect,
        MultiSelectFlags_BoxSelect1d = ImGuiMultiSelectFlags_BoxSelect1d,
        MultiSelectFlags_BoxSelect2d = ImGuiMultiSelectFlags_BoxSelect2d,
        MultiSelectFlags_BoxSelectNoScroll = ImGuiMultiSelectFlags_BoxSelectNoScroll,
        MultiSelectFlags_ClearOnEscape = ImGuiMultiSelectFlags_ClearOnEscape,
        MultiSelectFlags_ClearOnClickVoid = ImGuiMultiSelectFlags_ClearOnClickVoid,
        MultiSelectFlags_ScopeWindow = ImGuiMultiSelectFlags_ScopeWindow,
        MultiSelectFlags_ScopeRect = ImGuiMultiSelectFlags_ScopeRect,
        MultiSelectFlags_SelectOnClick = ImGuiMultiSelectFlags_SelectOnClick,
        MultiSelectFlags_SelectOnClickRelease = ImGuiMultiSelectFlags_SelectOnClickRelease,
        MultiSelectFlags_NavWrapX = ImGuiMultiSelectFlags_NavWrapX,
    };
    enum SelectionRequestType
    {
        SelectionRequestType_None = ImGuiSelectionRequestType_None,
        SelectionRequestType_SetAll = ImGuiSelectionRequestType_SetAll,
        SelectionRequestType_SetRange = ImGuiSelectionRequestType_SetRange,
    };
    enum DrawFlags
    {
        DrawFlags_None = ImDrawFlags_None,
        DrawFlags_Closed = ImDrawFlags_Closed,
        DrawFlags_RoundCornersTopLeft = ImDrawFlags_RoundCornersTopLeft,
        DrawFlags_RoundCornersTopRight = ImDrawFlags_RoundCornersTopRight,
        DrawFlags_RoundCornersBottomLeft = ImDrawFlags_RoundCornersBottomLeft,
        DrawFlags_RoundCornersBottomRight = ImDrawFlags_RoundCornersBottomRight,
        DrawFlags_RoundCornersNone = ImDrawFlags_RoundCornersNone,
        DrawFlags_RoundCornersTop = ImDrawFlags_RoundCornersTop,
        DrawFlags_RoundCornersBottom = ImDrawFlags_RoundCornersBottom,
        DrawFlags_RoundCornersLeft = ImDrawFlags_RoundCornersLeft,
        DrawFlags_RoundCornersRight = ImDrawFlags_RoundCornersRight,
        DrawFlags_RoundCornersAll = ImDrawFlags_RoundCornersAll,
    };
    enum DrawListFlags
    {
        DrawListFlags_None = ImDrawListFlags_None,
        DrawListFlags_AntiAliasedLines = ImDrawListFlags_AntiAliasedLines,
        DrawListFlags_AntiAliasedLinesUseTex = ImDrawListFlags_AntiAliasedLinesUseTex,
        DrawListFlags_AntiAliasedFill = ImDrawListFlags_AntiAliasedFill,
        DrawListFlags_AllowVtxOffset = ImDrawListFlags_AllowVtxOffset,
    };
    enum FontAtlasFlags
    {
        FontAtlasFlags_None = ImFontAtlasFlags_None,
        FontAtlasFlags_NoPowerOfTwoHeight = ImFontAtlasFlags_NoPowerOfTwoHeight,
        FontAtlasFlags_NoMouseCursors = ImFontAtlasFlags_NoMouseCursors,
        FontAtlasFlags_NoBakedLines = ImFontAtlasFlags_NoBakedLines,
    };
    enum ViewportFlags
    {
        ViewportFlags_None = ImGuiViewportFlags_None,
        ViewportFlags_IsPlatformWindow = ImGuiViewportFlags_IsPlatformWindow,
        ViewportFlags_IsPlatformMonitor = ImGuiViewportFlags_IsPlatformMonitor,
        ViewportFlags_OwnedByApp = ImGuiViewportFlags_OwnedByApp,
        ViewportFlags_NoDecoration = ImGuiViewportFlags_NoDecoration,
        ViewportFlags_NoTaskBarIcon = ImGuiViewportFlags_NoTaskBarIcon,
        ViewportFlags_NoFocusOnAppearing = ImGuiViewportFlags_NoFocusOnAppearing,
        ViewportFlags_NoFocusOnClick = ImGuiViewportFlags_NoFocusOnClick,
        ViewportFlags_NoInputs = ImGuiViewportFlags_NoInputs,
        ViewportFlags_NoRendererClear = ImGuiViewportFlags_NoRendererClear,
        ViewportFlags_NoAutoMerge = ImGuiViewportFlags_NoAutoMerge,
        ViewportFlags_TopMost = ImGuiViewportFlags_TopMost,
        ViewportFlags_CanHostOtherWindows = ImGuiViewportFlags_CanHostOtherWindows,
        ViewportFlags_IsMinimized = ImGuiViewportFlags_IsMinimized,
        ViewportFlags_IsFocused = ImGuiViewportFlags_IsFocused,
    };
    static Ref<ImGuiIOPtr> GetIO();
    static Ref<ImGuiStylePtr> GetStyle();
    static void ShowDemoWindow(Array p_open);
    static void ShowMetricsWindow(Array p_open);
    static void ShowDebugLogWindow(Array p_open);
    static void ShowIDStackToolWindow();
    static void ShowIDStackToolWindowEx(Array p_open);
    static void ShowAboutWindow(Array p_open);
    static void ShowStyleEditor(Ref<ImGuiStylePtr> ref);
    static bool ShowStyleSelector(StringName label);
    static void ShowFontSelector(StringName label);
    static void ShowUserGuide();
    static String GetVersion();
    static void StyleColorsDark(Ref<ImGuiStylePtr> dst);
    static void StyleColorsLight(Ref<ImGuiStylePtr> dst);
    static void StyleColorsClassic(Ref<ImGuiStylePtr> dst);
    static bool Begin(StringName name, Array p_open, BitField<ImGui::WindowFlags> flags);
    static void End();
    static bool BeginChild(StringName str_id, Vector2 size, BitField<ImGui::ChildFlags> child_flags,
                           BitField<ImGui::WindowFlags> window_flags);
    static bool BeginChildID(uint32_t id, Vector2 size, BitField<ImGui::ChildFlags> child_flags,
                             BitField<ImGui::WindowFlags> window_flags);
    static void EndChild();
    static bool IsWindowAppearing();
    static bool IsWindowCollapsed();
    static bool IsWindowFocused(BitField<ImGui::FocusedFlags> flags);
    static bool IsWindowHovered(BitField<ImGui::HoveredFlags> flags);
    static Ref<ImDrawListPtr> GetWindowDrawList();
    static real_t GetWindowDpiScale();
    static Vector2 GetWindowPos();
    static Vector2 GetWindowSize();
    static real_t GetWindowWidth();
    static real_t GetWindowHeight();
    static void SetNextWindowPos(Vector2 pos, ImGui::Cond cond);
    static void SetNextWindowPosEx(Vector2 pos, ImGui::Cond cond, Vector2 pivot);
    static void SetNextWindowSize(Vector2 size, ImGui::Cond cond);
    static void SetNextWindowContentSize(Vector2 size);
    static void SetNextWindowCollapsed(bool collapsed, ImGui::Cond cond);
    static void SetNextWindowFocus();
    static void SetNextWindowScroll(Vector2 scroll);
    static void SetNextWindowBgAlpha(real_t alpha);
    static void SetNextWindowViewport(uint32_t viewport_id);
    static void SetWindowPos(Vector2 pos, ImGui::Cond cond);
    static void SetWindowSize(Vector2 size, ImGui::Cond cond);
    static void SetWindowCollapsed(bool collapsed, ImGui::Cond cond);
    static void SetWindowFocus();
    static void SetWindowFontScale(real_t scale);
    static void SetWindowPosStr(StringName name, Vector2 pos, ImGui::Cond cond);
    static void SetWindowSizeStr(StringName name, Vector2 size, ImGui::Cond cond);
    static void SetWindowCollapsedStr(StringName name, bool collapsed, ImGui::Cond cond);
    static void SetWindowFocusStr(StringName name);
    static real_t GetScrollX();
    static real_t GetScrollY();
    static void SetScrollX(real_t scroll_x);
    static void SetScrollY(real_t scroll_y);
    static real_t GetScrollMaxX();
    static real_t GetScrollMaxY();
    static void SetScrollHereX(real_t center_x_ratio);
    static void SetScrollHereY(real_t center_y_ratio);
    static void SetScrollFromPosX(real_t local_x, real_t center_x_ratio);
    static void SetScrollFromPosY(real_t local_y, real_t center_y_ratio);
    static void PushFont(int64_t font);
    static void PopFont();
    static void PushStyleColor(ImGui::Col idx, Color col);
    static void PushStyleColorImVec4(ImGui::Col idx, Color col);
    static void PopStyleColor();
    static void PopStyleColorEx(int count);
    static void PushStyleVar(ImGui::StyleVar idx, real_t val);
    static void PushStyleVarImVec2(ImGui::StyleVar idx, Vector2 val);
    static void PopStyleVar();
    static void PopStyleVarEx(int count);
    static void PushItemFlag(BitField<ImGui::ItemFlags> option, bool enabled);
    static void PopItemFlag();
    static void PushItemWidth(real_t item_width);
    static void PopItemWidth();
    static void SetNextItemWidth(real_t item_width);
    static real_t CalcItemWidth();
    static void PushTextWrapPos(real_t wrap_local_pos_x);
    static void PopTextWrapPos();
    static int64_t GetFont();
    static real_t GetFontSize();
    static Vector2 GetFontTexUvWhitePixel();
    static Vector2 GetCursorScreenPos();
    static void SetCursorScreenPos(Vector2 pos);
    static Vector2 GetContentRegionAvail();
    static Vector2 GetCursorPos();
    static real_t GetCursorPosX();
    static real_t GetCursorPosY();
    static void SetCursorPos(Vector2 local_pos);
    static void SetCursorPosX(real_t local_x);
    static void SetCursorPosY(real_t local_y);
    static Vector2 GetCursorStartPos();
    static void Separator();
    static void SameLine();
    static void SameLineEx(real_t offset_from_start_x, real_t spacing);
    static void NewLine();
    static void Spacing();
    static void Dummy(Vector2 size);
    static void Indent();
    static void IndentEx(real_t indent_w);
    static void Unindent();
    static void UnindentEx(real_t indent_w);
    static void BeginGroup();
    static void EndGroup();
    static void AlignTextToFramePadding();
    static real_t GetTextLineHeight();
    static real_t GetTextLineHeightWithSpacing();
    static real_t GetFrameHeight();
    static real_t GetFrameHeightWithSpacing();
    static void PushID(StringName str_id);
    static void PushIDStr(StringName str_id_begin, StringName str_id_end);
    static void PushIDInt(int int_id);
    static void PopID();
    static uint32_t GetID(StringName str_id);
    static uint32_t GetIDInt(int int_id);
    static void Text(String fmt);
    static void TextColored(Color col, String fmt);
    static void TextDisabled(String fmt);
    static void TextWrapped(String fmt);
    static void LabelText(StringName label, String fmt);
    static void BulletText(String fmt);
    static void SeparatorText(StringName label);
    static bool Button(StringName label);
    static bool ButtonEx(StringName label, Vector2 size);
    static bool SmallButton(StringName label);
    static bool InvisibleButton(StringName str_id, Vector2 size, BitField<ImGui::ButtonFlags> flags);
    static bool ArrowButton(StringName str_id, ImGui::Dir dir);
    static bool Checkbox(StringName label, Array v);
    static bool CheckboxFlagsIntPtr(StringName label, Array flags, int flags_value);
    static bool RadioButton(StringName label, bool active);
    static bool RadioButtonIntPtr(StringName label, Array v, int v_button);
    static void ProgressBar(real_t fraction, Vector2 size_arg, String overlay);
    static void Bullet();
    static bool TextLink(StringName label);
    static void TextLinkOpenURL(StringName label);
    static void TextLinkOpenURLEx(StringName label, String url);
    static void Image(Ref<Texture2D> user_texture_id, Vector2 image_size);
    static void ImageEx(Ref<Texture2D> user_texture_id, Vector2 image_size, Vector2 uv0, Vector2 uv1, Color tint_col,
                        Color border_col);
    static bool ImageButton(StringName str_id, Ref<Texture2D> user_texture_id, Vector2 image_size);
    static bool ImageButtonEx(StringName str_id, Ref<Texture2D> user_texture_id, Vector2 image_size, Vector2 uv0,
                              Vector2 uv1, Color bg_col, Color tint_col);
    static bool BeginCombo(StringName label, String preview_value, BitField<ImGui::ComboFlags> flags);
    static void EndCombo();
    static bool ComboChar(StringName label, Array current_item, Array items, int items_count);
    static bool ComboCharEx(StringName label, Array current_item, Array items, int items_count,
                            int popup_max_height_in_items);
    static bool Combo(StringName label, Array current_item, Array items_separated_by_zeros);
    static bool ComboEx(StringName label, Array current_item, Array items_separated_by_zeros,
                        int popup_max_height_in_items);
    static bool DragFloat(StringName label, Array v);
    static bool DragFloatEx(StringName label, Array v, real_t v_speed, real_t v_min, real_t v_max, String format,
                            BitField<ImGui::SliderFlags> flags);
    static bool DragFloat2(StringName label, Array v);
    static bool DragFloat2Ex(StringName label, Array v, real_t v_speed, real_t v_min, real_t v_max, String format,
                             BitField<ImGui::SliderFlags> flags);
    static bool DragFloat3(StringName label, Array v);
    static bool DragFloat3Ex(StringName label, Array v, real_t v_speed, real_t v_min, real_t v_max, String format,
                             BitField<ImGui::SliderFlags> flags);
    static bool DragFloat4(StringName label, Array v);
    static bool DragFloat4Ex(StringName label, Array v, real_t v_speed, real_t v_min, real_t v_max, String format,
                             BitField<ImGui::SliderFlags> flags);
    static bool DragFloatRange2(StringName label, Array v_current_min, Array v_current_max);
    static bool DragFloatRange2Ex(StringName label, Array v_current_min, Array v_current_max, real_t v_speed,
                                  real_t v_min, real_t v_max, String format, String format_max,
                                  BitField<ImGui::SliderFlags> flags);
    static bool DragInt(StringName label, Array v);
    static bool DragIntEx(StringName label, Array v, real_t v_speed, int v_min, int v_max, String format,
                          BitField<ImGui::SliderFlags> flags);
    static bool DragInt2(StringName label, Array v);
    static bool DragInt2Ex(StringName label, Array v, real_t v_speed, int v_min, int v_max, String format,
                           BitField<ImGui::SliderFlags> flags);
    static bool DragInt3(StringName label, Array v);
    static bool DragInt3Ex(StringName label, Array v, real_t v_speed, int v_min, int v_max, String format,
                           BitField<ImGui::SliderFlags> flags);
    static bool DragInt4(StringName label, Array v);
    static bool DragInt4Ex(StringName label, Array v, real_t v_speed, int v_min, int v_max, String format,
                           BitField<ImGui::SliderFlags> flags);
    static bool DragIntRange2(StringName label, Array v_current_min, Array v_current_max);
    static bool DragIntRange2Ex(StringName label, Array v_current_min, Array v_current_max, real_t v_speed, int v_min,
                                int v_max, String format, String format_max, BitField<ImGui::SliderFlags> flags);
    static bool SliderFloat(StringName label, Array v, real_t v_min, real_t v_max);
    static bool SliderFloatEx(StringName label, Array v, real_t v_min, real_t v_max, String format,
                              BitField<ImGui::SliderFlags> flags);
    static bool SliderFloat2(StringName label, Array v, real_t v_min, real_t v_max);
    static bool SliderFloat2Ex(StringName label, Array v, real_t v_min, real_t v_max, String format,
                               BitField<ImGui::SliderFlags> flags);
    static bool SliderFloat3(StringName label, Array v, real_t v_min, real_t v_max);
    static bool SliderFloat3Ex(StringName label, Array v, real_t v_min, real_t v_max, String format,
                               BitField<ImGui::SliderFlags> flags);
    static bool SliderFloat4(StringName label, Array v, real_t v_min, real_t v_max);
    static bool SliderFloat4Ex(StringName label, Array v, real_t v_min, real_t v_max, String format,
                               BitField<ImGui::SliderFlags> flags);
    static bool SliderAngle(StringName label, Array v_rad);
    static bool SliderAngleEx(StringName label, Array v_rad, real_t v_degrees_min, real_t v_degrees_max, String format,
                              BitField<ImGui::SliderFlags> flags);
    static bool SliderInt(StringName label, Array v, int v_min, int v_max);
    static bool SliderIntEx(StringName label, Array v, int v_min, int v_max, String format,
                            BitField<ImGui::SliderFlags> flags);
    static bool SliderInt2(StringName label, Array v, int v_min, int v_max);
    static bool SliderInt2Ex(StringName label, Array v, int v_min, int v_max, String format,
                             BitField<ImGui::SliderFlags> flags);
    static bool SliderInt3(StringName label, Array v, int v_min, int v_max);
    static bool SliderInt3Ex(StringName label, Array v, int v_min, int v_max, String format,
                             BitField<ImGui::SliderFlags> flags);
    static bool SliderInt4(StringName label, Array v, int v_min, int v_max);
    static bool SliderInt4Ex(StringName label, Array v, int v_min, int v_max, String format,
                             BitField<ImGui::SliderFlags> flags);
    static bool VSliderFloat(StringName label, Vector2 size, Array v, real_t v_min, real_t v_max);
    static bool VSliderFloatEx(StringName label, Vector2 size, Array v, real_t v_min, real_t v_max, String format,
                               BitField<ImGui::SliderFlags> flags);
    static bool VSliderInt(StringName label, Vector2 size, Array v, int v_min, int v_max);
    static bool VSliderIntEx(StringName label, Vector2 size, Array v, int v_min, int v_max, String format,
                             BitField<ImGui::SliderFlags> flags);
    static bool InputText(StringName label, Array buf, int64_t buf_size, BitField<ImGui::InputTextFlags> flags);
    static bool InputTextMultiline(StringName label, Array buf, int64_t buf_size);
    static bool InputTextWithHint(StringName label, String hint, Array buf, int64_t buf_size,
                                  BitField<ImGui::InputTextFlags> flags);
    static bool InputFloat(StringName label, Array v);
    static bool InputFloatEx(StringName label, Array v, real_t step, real_t step_fast, String format,
                             BitField<ImGui::InputTextFlags> flags);
    static bool InputFloat2(StringName label, Array v);
    static bool InputFloat2Ex(StringName label, Array v, String format, BitField<ImGui::InputTextFlags> flags);
    static bool InputFloat3(StringName label, Array v);
    static bool InputFloat3Ex(StringName label, Array v, String format, BitField<ImGui::InputTextFlags> flags);
    static bool InputFloat4(StringName label, Array v);
    static bool InputFloat4Ex(StringName label, Array v, String format, BitField<ImGui::InputTextFlags> flags);
    static bool InputInt(StringName label, Array v);
    static bool InputIntEx(StringName label, Array v, int step, int step_fast, BitField<ImGui::InputTextFlags> flags);
    static bool InputInt2(StringName label, Array v, BitField<ImGui::InputTextFlags> flags);
    static bool InputInt3(StringName label, Array v, BitField<ImGui::InputTextFlags> flags);
    static bool InputInt4(StringName label, Array v, BitField<ImGui::InputTextFlags> flags);
    static bool InputDouble(StringName label, Array v);
    static bool InputDoubleEx(StringName label, Array v, double step, double step_fast, String format,
                              BitField<ImGui::InputTextFlags> flags);
    static bool ColorEdit3(StringName label, Array col, BitField<ImGui::ColorEditFlags> flags);
    static bool ColorEdit4(StringName label, Array col, BitField<ImGui::ColorEditFlags> flags);
    static bool ColorPicker3(StringName label, Array col, BitField<ImGui::ColorEditFlags> flags);
    static bool ColorPicker4(StringName label, Array col, BitField<ImGui::ColorEditFlags> flags, Array ref_col);
    static bool ColorButton(StringName desc_id, Color col, BitField<ImGui::ColorEditFlags> flags);
    static bool ColorButtonEx(StringName desc_id, Color col, BitField<ImGui::ColorEditFlags> flags, Vector2 size);
    static void SetColorEditOptions(BitField<ImGui::ColorEditFlags> flags);
    static bool TreeNode(StringName label);
    static bool TreeNodeStr(StringName str_id, String fmt);
    static bool TreeNodeEx(StringName label, BitField<ImGui::TreeNodeFlags> flags);
    static bool TreeNodeExStr(StringName str_id, BitField<ImGui::TreeNodeFlags> flags, String fmt);
    static void TreePush(StringName str_id);
    static void TreePop();
    static real_t GetTreeNodeToLabelSpacing();
    static bool CollapsingHeader(StringName label, BitField<ImGui::TreeNodeFlags> flags);
    static bool CollapsingHeaderBoolPtr(StringName label, Array p_visible, BitField<ImGui::TreeNodeFlags> flags);
    static void SetNextItemOpen(bool is_open, ImGui::Cond cond);
    static void SetNextItemStorageID(uint32_t storage_id);
    static bool Selectable(StringName label);
    static bool SelectableEx(StringName label, bool selected, BitField<ImGui::SelectableFlags> flags, Vector2 size);
    static bool SelectableBoolPtr(StringName label, Array p_selected, BitField<ImGui::SelectableFlags> flags);
    static bool SelectableBoolPtrEx(StringName label, Array p_selected, BitField<ImGui::SelectableFlags> flags,
                                    Vector2 size);
    static Ref<ImGuiMultiSelectIOPtr> BeginMultiSelect(BitField<ImGui::MultiSelectFlags> flags);
    static Ref<ImGuiMultiSelectIOPtr> BeginMultiSelectEx(BitField<ImGui::MultiSelectFlags> flags, int selection_size,
                                                         int items_count);
    static Ref<ImGuiMultiSelectIOPtr> EndMultiSelect();
    static void SetNextItemSelectionUserData(int64_t selection_user_data);
    static bool IsItemToggledSelection();
    static bool BeginListBox(StringName label, Vector2 size);
    static void EndListBox();
    static bool ListBox(StringName label, Array current_item, Array items, int items_count, int height_in_items);
    static void PlotLines(StringName label, Array values, int values_count);
    static void PlotLinesEx(StringName label, Array values, int values_count, int values_offset, String overlay_text,
                            real_t scale_min, real_t scale_max, Vector2 graph_size, int stride);
    static void PlotHistogram(StringName label, Array values, int values_count);
    static void PlotHistogramEx(StringName label, Array values, int values_count, int values_offset,
                                String overlay_text, real_t scale_min, real_t scale_max, Vector2 graph_size,
                                int stride);
    static bool BeginMenuBar();
    static void EndMenuBar();
    static bool BeginMainMenuBar();
    static void EndMainMenuBar();
    static bool BeginMenu(StringName label);
    static bool BeginMenuEx(StringName label, bool enabled);
    static void EndMenu();
    static bool MenuItem(StringName label);
    static bool MenuItemEx(StringName label, String shortcut, bool selected, bool enabled);
    static bool MenuItemBoolPtr(StringName label, String shortcut, Array p_selected, bool enabled);
    static bool BeginTooltip();
    static void EndTooltip();
    static void SetTooltip(String fmt);
    static bool BeginItemTooltip();
    static void SetItemTooltip(String fmt);
    static bool BeginPopup(StringName str_id, BitField<ImGui::WindowFlags> flags);
    static bool BeginPopupModal(StringName name, Array p_open, BitField<ImGui::WindowFlags> flags);
    static void EndPopup();
    static void OpenPopup(StringName str_id, BitField<ImGui::PopupFlags> popup_flags);
    static void OpenPopupID(uint32_t id, BitField<ImGui::PopupFlags> popup_flags);
    static void OpenPopupOnItemClick(StringName str_id, BitField<ImGui::PopupFlags> popup_flags);
    static void CloseCurrentPopup();
    static bool BeginPopupContextItem();
    static bool BeginPopupContextItemEx(StringName str_id, BitField<ImGui::PopupFlags> popup_flags);
    static bool BeginPopupContextWindow();
    static bool BeginPopupContextWindowEx(StringName str_id, BitField<ImGui::PopupFlags> popup_flags);
    static bool BeginPopupContextVoid();
    static bool BeginPopupContextVoidEx(StringName str_id, BitField<ImGui::PopupFlags> popup_flags);
    static bool IsPopupOpen(StringName str_id, BitField<ImGui::PopupFlags> flags);
    static bool BeginTable(StringName str_id, int columns, BitField<ImGui::TableFlags> flags);
    static bool BeginTableEx(StringName str_id, int columns, BitField<ImGui::TableFlags> flags, Vector2 outer_size,
                             real_t inner_width);
    static void EndTable();
    static void TableNextRow();
    static void TableNextRowEx(BitField<ImGui::TableRowFlags> row_flags, real_t min_row_height);
    static bool TableNextColumn();
    static bool TableSetColumnIndex(int column_n);
    static void TableSetupColumn(StringName label, BitField<ImGui::TableColumnFlags> flags);
    static void TableSetupColumnEx(StringName label, BitField<ImGui::TableColumnFlags> flags,
                                   real_t init_width_or_weight, uint32_t user_id);
    static void TableSetupScrollFreeze(int cols, int rows);
    static void TableHeader(StringName label);
    static void TableHeadersRow();
    static void TableAngledHeadersRow();
    static Ref<ImGuiTableSortSpecsPtr> TableGetSortSpecs();
    static int TableGetColumnCount();
    static int TableGetColumnIndex();
    static int TableGetRowIndex();
    static String TableGetColumnName(int column_n);
    static BitField<ImGui::TableColumnFlags> TableGetColumnFlags(int column_n);
    static void TableSetColumnEnabled(int column_n, bool v);
    static int TableGetHoveredColumn();
    static void TableSetBgColor(ImGui::TableBgTarget target, Color color, int column_n);
    static void Columns();
    static void ColumnsEx(int count, StringName id, bool border);
    static void NextColumn();
    static int GetColumnIndex();
    static real_t GetColumnWidth(int column_index);
    static void SetColumnWidth(int column_index, real_t width);
    static real_t GetColumnOffset(int column_index);
    static void SetColumnOffset(int column_index, real_t offset_x);
    static int GetColumnsCount();
    static bool BeginTabBar(StringName str_id, BitField<ImGui::TabBarFlags> flags);
    static void EndTabBar();
    static bool BeginTabItem(StringName label, Array p_open, BitField<ImGui::TabItemFlags> flags);
    static void EndTabItem();
    static bool TabItemButton(StringName label, BitField<ImGui::TabItemFlags> flags);
    static void SetTabItemClosed(StringName tab_or_docked_window_label);
    static uint32_t DockSpace(uint32_t dockspace_id);
    static uint32_t DockSpaceEx(uint32_t dockspace_id, Vector2 size, BitField<ImGui::DockNodeFlags> flags,
                                Ref<ImGuiWindowClassPtr> window_class);
    static uint32_t DockSpaceOverViewport();
    static void SetNextWindowDockID(uint32_t dock_id, ImGui::Cond cond);
    static void SetNextWindowClass(Ref<ImGuiWindowClassPtr> window_class);
    static uint32_t GetWindowDockID();
    static bool IsWindowDocked();
    static void LogToTTY(int auto_open_depth);
    static void LogToFile(int auto_open_depth, String filename);
    static void LogToClipboard(int auto_open_depth);
    static void LogFinish();
    static void LogButtons();
    static void LogText(String fmt);
    static bool BeginDragDropSource(BitField<ImGui::DragDropFlags> flags);
    static void EndDragDropSource();
    static bool BeginDragDropTarget();
    static void EndDragDropTarget();
    static void BeginDisabled(bool disabled);
    static void EndDisabled();
    static void PushClipRect(Vector2 clip_rect_min, Vector2 clip_rect_max, bool intersect_with_current_clip_rect);
    static void PopClipRect();
    static void SetItemDefaultFocus();
    static void SetKeyboardFocusHere();
    static void SetKeyboardFocusHereEx(int offset);
    static void SetNextItemAllowOverlap();
    static bool IsItemHovered(BitField<ImGui::HoveredFlags> flags);
    static bool IsItemActive();
    static bool IsItemFocused();
    static bool IsItemClicked();
    static bool IsItemClickedEx(ImGui::MouseButton mouse_button);
    static bool IsItemVisible();
    static bool IsItemEdited();
    static bool IsItemActivated();
    static bool IsItemDeactivated();
    static bool IsItemDeactivatedAfterEdit();
    static bool IsItemToggledOpen();
    static bool IsAnyItemHovered();
    static bool IsAnyItemActive();
    static bool IsAnyItemFocused();
    static uint32_t GetItemID();
    static Vector2 GetItemRectMin();
    static Vector2 GetItemRectMax();
    static Vector2 GetItemRectSize();
    static Ref<ImDrawListPtr> GetBackgroundDrawList();
    static Ref<ImDrawListPtr> GetForegroundDrawList();
    static bool IsRectVisibleBySize(Vector2 size);
    static bool IsRectVisible(Vector2 rect_min, Vector2 rect_max);
    static double GetTime();
    static int GetFrameCount();
    static String GetStyleColorName(ImGui::Col idx);
    static Vector2 CalcTextSize(String text);
    static Vector2 CalcTextSizeEx(String text, String text_end, bool hide_text_after_double_hash, real_t wrap_width);
    static bool IsKeyDown(ImGui::Key key);
    static bool IsKeyPressed(ImGui::Key key);
    static bool IsKeyPressedEx(ImGui::Key key, bool repeat);
    static bool IsKeyReleased(ImGui::Key key);
    static int GetKeyPressedAmount(ImGui::Key key, real_t repeat_delay, real_t rate);
    static String GetKeyName(ImGui::Key key);
    static void SetNextFrameWantCaptureKeyboard(bool want_capture_keyboard);
    static void SetItemKeyOwner(ImGui::Key key);
    static bool IsMouseDown(ImGui::MouseButton button);
    static bool IsMouseClicked(ImGui::MouseButton button);
    static bool IsMouseClickedEx(ImGui::MouseButton button, bool repeat);
    static bool IsMouseReleased(ImGui::MouseButton button);
    static bool IsMouseDoubleClicked(ImGui::MouseButton button);
    static int GetMouseClickedCount(ImGui::MouseButton button);
    static bool IsMouseHoveringRect(Vector2 r_min, Vector2 r_max);
    static bool IsMouseHoveringRectEx(Vector2 r_min, Vector2 r_max, bool clip);
    static bool IsAnyMouseDown();
    static Vector2 GetMousePos();
    static Vector2 GetMousePosOnOpeningCurrentPopup();
    static bool IsMouseDragging(ImGui::MouseButton button, real_t lock_threshold);
    static Vector2 GetMouseDragDelta(ImGui::MouseButton button, real_t lock_threshold);
    static void ResetMouseDragDelta();
    static void ResetMouseDragDeltaEx(ImGui::MouseButton button);
    static ImGui::MouseCursor GetMouseCursor();
    static void SetMouseCursor(ImGui::MouseCursor cursor_type);
    static void SetNextFrameWantCaptureMouse(bool want_capture_mouse);
    static String GetClipboardText();
    static void SetClipboardText(String text);
    static void LoadIniSettingsFromDisk(String ini_filename);
    static void LoadIniSettingsFromMemory(String ini_data, int64_t ini_size);
    static void SaveIniSettingsToDisk(String ini_filename);
    static void DebugTextEncoding(String text);
    static void DebugFlashStyleColor(ImGui::Col idx);
    static void DebugStartItemPicker();
    static bool DebugCheckVersionAndDataLayout(String version_str, int64_t sz_io, int64_t sz_style, int64_t sz_vec2,
                                               int64_t sz_vec4, int64_t sz_drawvert, int64_t sz_drawidx);
    static void DebugLog(String fmt);
    static void ImGuiStyle_ScaleAllSizes(Ref<ImGuiStylePtr> self, real_t scale_factor);
    static void ImGuiListClipper_Begin(Ref<ImGuiListClipperPtr> self, int items_count, real_t items_height);
    static void ImGuiListClipper_End(Ref<ImGuiListClipperPtr> self);
    static bool ImGuiListClipper_Step(Ref<ImGuiListClipperPtr> self);
    static void ImGuiListClipper_IncludeItemByIndex(Ref<ImGuiListClipperPtr> self, int item_index);
    static void ImGuiListClipper_IncludeItemsByIndex(Ref<ImGuiListClipperPtr> self, int item_begin, int item_end);
    static void ImGuiListClipper_SeekCursorForItem(Ref<ImGuiListClipperPtr> self, int item_index);
    static void ImDrawList_PushClipRect(Ref<ImDrawListPtr> self, Vector2 clip_rect_min, Vector2 clip_rect_max,
                                        bool intersect_with_current_clip_rect);
    static void ImDrawList_PushClipRectFullScreen(Ref<ImDrawListPtr> self);
    static void ImDrawList_PopClipRect(Ref<ImDrawListPtr> self);
    static void ImDrawList_PushTextureID(Ref<ImDrawListPtr> self, Ref<Texture2D> texture_id);
    static void ImDrawList_PopTextureID(Ref<ImDrawListPtr> self);
    static void ImDrawList_AddLine(Ref<ImDrawListPtr> self, Vector2 p1, Vector2 p2, Color col);
    static void ImDrawList_AddLineEx(Ref<ImDrawListPtr> self, Vector2 p1, Vector2 p2, Color col, real_t thickness);
    static void ImDrawList_AddRect(Ref<ImDrawListPtr> self, Vector2 p_min, Vector2 p_max, Color col);
    static void ImDrawList_AddRectEx(Ref<ImDrawListPtr> self, Vector2 p_min, Vector2 p_max, Color col, real_t rounding,
                                     BitField<ImGui::DrawFlags> flags, real_t thickness);
    static void ImDrawList_AddRectFilled(Ref<ImDrawListPtr> self, Vector2 p_min, Vector2 p_max, Color col);
    static void ImDrawList_AddRectFilledEx(Ref<ImDrawListPtr> self, Vector2 p_min, Vector2 p_max, Color col,
                                           real_t rounding, BitField<ImGui::DrawFlags> flags);
    static void ImDrawList_AddRectFilledMultiColor(Ref<ImDrawListPtr> self, Vector2 p_min, Vector2 p_max,
                                                   Color col_upr_left, Color col_upr_right, Color col_bot_right,
                                                   Color col_bot_left);
    static void ImDrawList_AddQuad(Ref<ImDrawListPtr> self, Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, Color col);
    static void ImDrawList_AddQuadEx(Ref<ImDrawListPtr> self, Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, Color col,
                                     real_t thickness);
    static void ImDrawList_AddQuadFilled(Ref<ImDrawListPtr> self, Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4,
                                         Color col);
    static void ImDrawList_AddTriangle(Ref<ImDrawListPtr> self, Vector2 p1, Vector2 p2, Vector2 p3, Color col);
    static void ImDrawList_AddTriangleEx(Ref<ImDrawListPtr> self, Vector2 p1, Vector2 p2, Vector2 p3, Color col,
                                         real_t thickness);
    static void ImDrawList_AddTriangleFilled(Ref<ImDrawListPtr> self, Vector2 p1, Vector2 p2, Vector2 p3, Color col);
    static void ImDrawList_AddCircle(Ref<ImDrawListPtr> self, Vector2 center, real_t radius, Color col);
    static void ImDrawList_AddCircleEx(Ref<ImDrawListPtr> self, Vector2 center, real_t radius, Color col,
                                       int num_segments, real_t thickness);
    static void ImDrawList_AddCircleFilled(Ref<ImDrawListPtr> self, Vector2 center, real_t radius, Color col,
                                           int num_segments);
    static void ImDrawList_AddNgon(Ref<ImDrawListPtr> self, Vector2 center, real_t radius, Color col, int num_segments);
    static void ImDrawList_AddNgonEx(Ref<ImDrawListPtr> self, Vector2 center, real_t radius, Color col,
                                     int num_segments, real_t thickness);
    static void ImDrawList_AddNgonFilled(Ref<ImDrawListPtr> self, Vector2 center, real_t radius, Color col,
                                         int num_segments);
    static void ImDrawList_AddEllipse(Ref<ImDrawListPtr> self, Vector2 center, Vector2 radius, Color col);
    static void ImDrawList_AddEllipseEx(Ref<ImDrawListPtr> self, Vector2 center, Vector2 radius, Color col, real_t rot,
                                        int num_segments, real_t thickness);
    static void ImDrawList_AddEllipseFilled(Ref<ImDrawListPtr> self, Vector2 center, Vector2 radius, Color col);
    static void ImDrawList_AddEllipseFilledEx(Ref<ImDrawListPtr> self, Vector2 center, Vector2 radius, Color col,
                                              real_t rot, int num_segments);
    static void ImDrawList_AddText(Ref<ImDrawListPtr> self, Vector2 pos, Color col, String text_begin);
    static void ImDrawList_AddTextEx(Ref<ImDrawListPtr> self, Vector2 pos, Color col, String text_begin,
                                     String text_end);
    static void ImDrawList_AddBezierCubic(Ref<ImDrawListPtr> self, Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4,
                                          Color col, real_t thickness, int num_segments);
    static void ImDrawList_AddBezierQuadratic(Ref<ImDrawListPtr> self, Vector2 p1, Vector2 p2, Vector2 p3, Color col,
                                              real_t thickness, int num_segments);
    static void ImDrawList_AddImage(Ref<ImDrawListPtr> self, Ref<Texture2D> user_texture_id, Vector2 p_min,
                                    Vector2 p_max);
    static void ImDrawList_AddImageEx(Ref<ImDrawListPtr> self, Ref<Texture2D> user_texture_id, Vector2 p_min,
                                      Vector2 p_max, Vector2 uv_min, Vector2 uv_max, Color col);
    static void ImDrawList_AddImageQuad(Ref<ImDrawListPtr> self, Ref<Texture2D> user_texture_id, Vector2 p1, Vector2 p2,
                                        Vector2 p3, Vector2 p4);
    static void ImDrawList_AddImageQuadEx(Ref<ImDrawListPtr> self, Ref<Texture2D> user_texture_id, Vector2 p1,
                                          Vector2 p2, Vector2 p3, Vector2 p4, Vector2 uv1, Vector2 uv2, Vector2 uv3,
                                          Vector2 uv4, Color col);
    static void ImDrawList_AddImageRounded(Ref<ImDrawListPtr> self, Ref<Texture2D> user_texture_id, Vector2 p_min,
                                           Vector2 p_max, Vector2 uv_min, Vector2 uv_max, Color col, real_t rounding,
                                           BitField<ImGui::DrawFlags> flags);
    static void ImDrawList_PathClear(Ref<ImDrawListPtr> self);
    static void ImDrawList_PathLineTo(Ref<ImDrawListPtr> self, Vector2 pos);
    static void ImDrawList_PathLineToMergeDuplicate(Ref<ImDrawListPtr> self, Vector2 pos);
    static void ImDrawList_PathFillConvex(Ref<ImDrawListPtr> self, Color col);
    static void ImDrawList_PathFillConcave(Ref<ImDrawListPtr> self, Color col);
    static void ImDrawList_PathStroke(Ref<ImDrawListPtr> self, Color col, BitField<ImGui::DrawFlags> flags,
                                      real_t thickness);
    static void ImDrawList_PathArcTo(Ref<ImDrawListPtr> self, Vector2 center, real_t radius, real_t a_min, real_t a_max,
                                     int num_segments);
    static void ImDrawList_PathArcToFast(Ref<ImDrawListPtr> self, Vector2 center, real_t radius, int a_min_of_12,
                                         int a_max_of_12);
    static void ImDrawList_PathEllipticalArcTo(Ref<ImDrawListPtr> self, Vector2 center, Vector2 radius, real_t rot,
                                               real_t a_min, real_t a_max);
    static void ImDrawList_PathEllipticalArcToEx(Ref<ImDrawListPtr> self, Vector2 center, Vector2 radius, real_t rot,
                                                 real_t a_min, real_t a_max, int num_segments);
    static void ImDrawList_PathBezierCubicCurveTo(Ref<ImDrawListPtr> self, Vector2 p2, Vector2 p3, Vector2 p4,
                                                  int num_segments);
    static void ImDrawList_PathBezierQuadraticCurveTo(Ref<ImDrawListPtr> self, Vector2 p2, Vector2 p3,
                                                      int num_segments);
    static void ImDrawList_PathRect(Ref<ImDrawListPtr> self, Vector2 rect_min, Vector2 rect_max, real_t rounding,
                                    BitField<ImGui::DrawFlags> flags);
    static void ImDrawList_AddDrawCmd(Ref<ImDrawListPtr> self);
    static void ImDrawList_ChannelsSplit(Ref<ImDrawListPtr> self, int count);
    static void ImDrawList_ChannelsMerge(Ref<ImDrawListPtr> self);
    static void ImDrawList_ChannelsSetCurrent(Ref<ImDrawListPtr> self, int n);
    static void ImDrawList_PrimReserve(Ref<ImDrawListPtr> self, int idx_count, int vtx_count);
    static void ImDrawList_PrimUnreserve(Ref<ImDrawListPtr> self, int idx_count, int vtx_count);
    static void ImDrawList_PrimRect(Ref<ImDrawListPtr> self, Vector2 a, Vector2 b, Color col);
    static void ImDrawList_PrimWriteVtx(Ref<ImDrawListPtr> self, Vector2 pos, Vector2 uv, Color col);
    static void ImDrawList_PrimVtx(Ref<ImDrawListPtr> self, Vector2 pos, Vector2 uv, Color col);
};
class ImGuiTableSortSpecsPtr : public RefCounted
{
    GDCLASS(ImGuiTableSortSpecsPtr, RefCounted);

protected:
    static void _bind_methods();

public:
    void _SetPtr(ImGuiTableSortSpecs* p) { ptr = p; }
    ImGuiTableSortSpecs* _GetPtr() { return ptr; }
    Array _GetSpecs();
    void _SetSpecs(Array x);
    int _GetSpecsCount();
    void _SetSpecsCount(int x);
    bool _GetSpecsDirty();
    void _SetSpecsDirty(bool x);

private:
    ImGuiTableSortSpecs* ptr = nullptr;
};
class ImGuiTableColumnSortSpecsPtr : public RefCounted
{
    GDCLASS(ImGuiTableColumnSortSpecsPtr, RefCounted);

protected:
    static void _bind_methods();

public:
    void _SetPtr(ImGuiTableColumnSortSpecs* p) { ptr = p; }
    ImGuiTableColumnSortSpecs* _GetPtr() { return ptr; }
    uint32_t _GetColumnUserID();
    void _SetColumnUserID(uint32_t x);
    int16_t _GetColumnIndex();
    void _SetColumnIndex(int16_t x);
    int16_t _GetSortOrder();
    void _SetSortOrder(int16_t x);
    ImGui::SortDirection _GetSortDirection();
    void _SetSortDirection(ImGui::SortDirection x);

private:
    ImGuiTableColumnSortSpecs* ptr = nullptr;
};
class ImGuiStylePtr : public RefCounted
{
    GDCLASS(ImGuiStylePtr, RefCounted);

protected:
    static void _bind_methods();

public:
    void _SetPtr(ImGuiStyle* p) { ptr = p; }
    ImGuiStyle* _GetPtr() { return ptr; }
    real_t _GetAlpha();
    void _SetAlpha(real_t x);
    real_t _GetDisabledAlpha();
    void _SetDisabledAlpha(real_t x);
    Vector2 _GetWindowPadding();
    void _SetWindowPadding(Vector2 x);
    real_t _GetWindowRounding();
    void _SetWindowRounding(real_t x);
    real_t _GetWindowBorderSize();
    void _SetWindowBorderSize(real_t x);
    Vector2 _GetWindowMinSize();
    void _SetWindowMinSize(Vector2 x);
    Vector2 _GetWindowTitleAlign();
    void _SetWindowTitleAlign(Vector2 x);
    ImGui::Dir _GetWindowMenuButtonPosition();
    void _SetWindowMenuButtonPosition(ImGui::Dir x);
    real_t _GetChildRounding();
    void _SetChildRounding(real_t x);
    real_t _GetChildBorderSize();
    void _SetChildBorderSize(real_t x);
    real_t _GetPopupRounding();
    void _SetPopupRounding(real_t x);
    real_t _GetPopupBorderSize();
    void _SetPopupBorderSize(real_t x);
    Vector2 _GetFramePadding();
    void _SetFramePadding(Vector2 x);
    real_t _GetFrameRounding();
    void _SetFrameRounding(real_t x);
    real_t _GetFrameBorderSize();
    void _SetFrameBorderSize(real_t x);
    Vector2 _GetItemSpacing();
    void _SetItemSpacing(Vector2 x);
    Vector2 _GetItemInnerSpacing();
    void _SetItemInnerSpacing(Vector2 x);
    Vector2 _GetCellPadding();
    void _SetCellPadding(Vector2 x);
    Vector2 _GetTouchExtraPadding();
    void _SetTouchExtraPadding(Vector2 x);
    real_t _GetIndentSpacing();
    void _SetIndentSpacing(real_t x);
    real_t _GetColumnsMinSpacing();
    void _SetColumnsMinSpacing(real_t x);
    real_t _GetScrollbarSize();
    void _SetScrollbarSize(real_t x);
    real_t _GetScrollbarRounding();
    void _SetScrollbarRounding(real_t x);
    real_t _GetGrabMinSize();
    void _SetGrabMinSize(real_t x);
    real_t _GetGrabRounding();
    void _SetGrabRounding(real_t x);
    real_t _GetLogSliderDeadzone();
    void _SetLogSliderDeadzone(real_t x);
    real_t _GetTabRounding();
    void _SetTabRounding(real_t x);
    real_t _GetTabBorderSize();
    void _SetTabBorderSize(real_t x);
    real_t _GetTabMinWidthForCloseButton();
    void _SetTabMinWidthForCloseButton(real_t x);
    real_t _GetTabBarBorderSize();
    void _SetTabBarBorderSize(real_t x);
    real_t _GetTabBarOverlineSize();
    void _SetTabBarOverlineSize(real_t x);
    real_t _GetTableAngledHeadersAngle();
    void _SetTableAngledHeadersAngle(real_t x);
    Vector2 _GetTableAngledHeadersTextAlign();
    void _SetTableAngledHeadersTextAlign(Vector2 x);
    ImGui::Dir _GetColorButtonPosition();
    void _SetColorButtonPosition(ImGui::Dir x);
    Vector2 _GetButtonTextAlign();
    void _SetButtonTextAlign(Vector2 x);
    Vector2 _GetSelectableTextAlign();
    void _SetSelectableTextAlign(Vector2 x);
    real_t _GetSeparatorTextBorderSize();
    void _SetSeparatorTextBorderSize(real_t x);
    Vector2 _GetSeparatorTextAlign();
    void _SetSeparatorTextAlign(Vector2 x);
    Vector2 _GetSeparatorTextPadding();
    void _SetSeparatorTextPadding(Vector2 x);
    Vector2 _GetDisplayWindowPadding();
    void _SetDisplayWindowPadding(Vector2 x);
    Vector2 _GetDisplaySafeAreaPadding();
    void _SetDisplaySafeAreaPadding(Vector2 x);
    real_t _GetDockingSeparatorSize();
    void _SetDockingSeparatorSize(real_t x);
    real_t _GetMouseCursorScale();
    void _SetMouseCursorScale(real_t x);
    bool _GetAntiAliasedLines();
    void _SetAntiAliasedLines(bool x);
    bool _GetAntiAliasedLinesUseTex();
    void _SetAntiAliasedLinesUseTex(bool x);
    bool _GetAntiAliasedFill();
    void _SetAntiAliasedFill(bool x);
    real_t _GetCurveTessellationTol();
    void _SetCurveTessellationTol(real_t x);
    real_t _GetCircleTessellationMaxError();
    void _SetCircleTessellationMaxError(real_t x);
    PackedColorArray _GetColors();
    void _SetColors(PackedColorArray x);
    real_t _GetHoverStationaryDelay();
    void _SetHoverStationaryDelay(real_t x);
    real_t _GetHoverDelayShort();
    void _SetHoverDelayShort(real_t x);
    real_t _GetHoverDelayNormal();
    void _SetHoverDelayNormal(real_t x);
    BitField<ImGui::HoveredFlags> _GetHoverFlagsForTooltipMouse();
    void _SetHoverFlagsForTooltipMouse(BitField<ImGui::HoveredFlags> x);
    BitField<ImGui::HoveredFlags> _GetHoverFlagsForTooltipNav();
    void _SetHoverFlagsForTooltipNav(BitField<ImGui::HoveredFlags> x);

private:
    ImGuiStyle* ptr = nullptr;
};
class ImGuiIOPtr : public RefCounted
{
    GDCLASS(ImGuiIOPtr, RefCounted);

protected:
    static void _bind_methods();

public:
    void _SetPtr(ImGuiIO* p) { ptr = p; }
    ImGuiIO* _GetPtr() { return ptr; }
    BitField<ImGui::ConfigFlags> _GetConfigFlags();
    void _SetConfigFlags(BitField<ImGui::ConfigFlags> x);
    BitField<ImGui::BackendFlags> _GetBackendFlags();
    void _SetBackendFlags(BitField<ImGui::BackendFlags> x);
    Vector2 _GetDisplaySize();
    void _SetDisplaySize(Vector2 x);
    real_t _GetDeltaTime();
    void _SetDeltaTime(real_t x);
    real_t _GetIniSavingRate();
    void _SetIniSavingRate(real_t x);
    real_t _GetFontGlobalScale();
    void _SetFontGlobalScale(real_t x);
    bool _GetFontAllowUserScaling();
    void _SetFontAllowUserScaling(bool x);
    int64_t _GetFontDefault();
    void _SetFontDefault(int64_t x);
    Vector2 _GetDisplayFramebufferScale();
    void _SetDisplayFramebufferScale(Vector2 x);
    bool _GetConfigDockingNoSplit();
    void _SetConfigDockingNoSplit(bool x);
    bool _GetConfigDockingWithShift();
    void _SetConfigDockingWithShift(bool x);
    bool _GetConfigDockingAlwaysTabBar();
    void _SetConfigDockingAlwaysTabBar(bool x);
    bool _GetConfigDockingTransparentPayload();
    void _SetConfigDockingTransparentPayload(bool x);
    bool _GetConfigViewportsNoAutoMerge();
    void _SetConfigViewportsNoAutoMerge(bool x);
    bool _GetConfigViewportsNoTaskBarIcon();
    void _SetConfigViewportsNoTaskBarIcon(bool x);
    bool _GetConfigViewportsNoDecoration();
    void _SetConfigViewportsNoDecoration(bool x);
    bool _GetConfigViewportsNoDefaultParent();
    void _SetConfigViewportsNoDefaultParent(bool x);
    bool _GetMouseDrawCursor();
    void _SetMouseDrawCursor(bool x);
    bool _GetConfigMacOSXBehaviors();
    void _SetConfigMacOSXBehaviors(bool x);
    bool _GetConfigNavSwapGamepadButtons();
    void _SetConfigNavSwapGamepadButtons(bool x);
    bool _GetConfigInputTrickleEventQueue();
    void _SetConfigInputTrickleEventQueue(bool x);
    bool _GetConfigInputTextCursorBlink();
    void _SetConfigInputTextCursorBlink(bool x);
    bool _GetConfigInputTextEnterKeepActive();
    void _SetConfigInputTextEnterKeepActive(bool x);
    bool _GetConfigDragClickToInputText();
    void _SetConfigDragClickToInputText(bool x);
    bool _GetConfigWindowsResizeFromEdges();
    void _SetConfigWindowsResizeFromEdges(bool x);
    bool _GetConfigWindowsMoveFromTitleBarOnly();
    void _SetConfigWindowsMoveFromTitleBarOnly(bool x);
    real_t _GetConfigMemoryCompactTimer();
    void _SetConfigMemoryCompactTimer(real_t x);
    real_t _GetMouseDoubleClickTime();
    void _SetMouseDoubleClickTime(real_t x);
    real_t _GetMouseDoubleClickMaxDist();
    void _SetMouseDoubleClickMaxDist(real_t x);
    real_t _GetMouseDragThreshold();
    void _SetMouseDragThreshold(real_t x);
    real_t _GetKeyRepeatDelay();
    void _SetKeyRepeatDelay(real_t x);
    real_t _GetKeyRepeatRate();
    void _SetKeyRepeatRate(real_t x);
    bool _GetConfigDebugIsDebuggerPresent();
    void _SetConfigDebugIsDebuggerPresent(bool x);
    bool _GetConfigDebugBeginReturnValueOnce();
    void _SetConfigDebugBeginReturnValueOnce(bool x);
    bool _GetConfigDebugBeginReturnValueLoop();
    void _SetConfigDebugBeginReturnValueLoop(bool x);
    bool _GetConfigDebugIgnoreFocusLoss();
    void _SetConfigDebugIgnoreFocusLoss(bool x);
    bool _GetConfigDebugIniSettings();
    void _SetConfigDebugIniSettings(bool x);
    bool _GetWantCaptureMouse();
    void _SetWantCaptureMouse(bool x);
    bool _GetWantCaptureKeyboard();
    void _SetWantCaptureKeyboard(bool x);
    bool _GetWantTextInput();
    void _SetWantTextInput(bool x);
    bool _GetWantSetMousePos();
    void _SetWantSetMousePos(bool x);
    bool _GetWantSaveIniSettings();
    void _SetWantSaveIniSettings(bool x);
    bool _GetNavActive();
    void _SetNavActive(bool x);
    bool _GetNavVisible();
    void _SetNavVisible(bool x);
    real_t _GetFramerate();
    void _SetFramerate(real_t x);
    int _GetMetricsRenderVertices();
    void _SetMetricsRenderVertices(int x);
    int _GetMetricsRenderIndices();
    void _SetMetricsRenderIndices(int x);
    int _GetMetricsRenderWindows();
    void _SetMetricsRenderWindows(int x);
    int _GetMetricsActiveWindows();
    void _SetMetricsActiveWindows(int x);
    Vector2 _GetMouseDelta();
    void _SetMouseDelta(Vector2 x);
    Vector2 _GetMousePos();
    void _SetMousePos(Vector2 x);
    real_t _GetMouseWheel();
    void _SetMouseWheel(real_t x);
    real_t _GetMouseWheelH();
    void _SetMouseWheelH(real_t x);
    ImGui::MouseSource _GetMouseSource();
    void _SetMouseSource(ImGui::MouseSource x);
    uint32_t _GetMouseHoveredViewport();
    void _SetMouseHoveredViewport(uint32_t x);
    bool _GetKeyCtrl();
    void _SetKeyCtrl(bool x);
    bool _GetKeyShift();
    void _SetKeyShift(bool x);
    bool _GetKeyAlt();
    void _SetKeyAlt(bool x);
    bool _GetKeySuper();
    void _SetKeySuper(bool x);
    bool _GetWantCaptureMouseUnlessPopupClose();
    void _SetWantCaptureMouseUnlessPopupClose(bool x);
    Vector2 _GetMousePosPrev();
    void _SetMousePosPrev(Vector2 x);
    bool _GetMouseWheelRequestAxisSwap();
    void _SetMouseWheelRequestAxisSwap(bool x);
    bool _GetMouseCtrlLeftAsRightClick();
    void _SetMouseCtrlLeftAsRightClick(bool x);
    real_t _GetPenPressure();
    void _SetPenPressure(real_t x);
    bool _GetAppFocusLost();
    void _SetAppFocusLost(bool x);
    bool _GetAppAcceptingEvents();
    void _SetAppAcceptingEvents(bool x);
    int8_t _GetBackendUsingLegacyKeyArrays();
    void _SetBackendUsingLegacyKeyArrays(int8_t x);
    bool _GetBackendUsingLegacyNavInputArray();
    void _SetBackendUsingLegacyNavInputArray(bool x);

private:
    ImGuiIO* ptr = nullptr;
};
class ImGuiWindowClassPtr : public RefCounted
{
    GDCLASS(ImGuiWindowClassPtr, RefCounted);

protected:
    static void _bind_methods();

public:
    ImGuiWindowClassPtr()
    {
        ptr->ParentViewportId = -1;
        ptr->DockingAllowUnclassed = true;
    }
    ImGuiWindowClass* _GetPtr() { return ptr.get(); }
    uint32_t _GetClassId();
    void _SetClassId(uint32_t x);
    uint32_t _GetParentViewportId();
    void _SetParentViewportId(uint32_t x);
    uint32_t _GetFocusRouteParentWindowId();
    void _SetFocusRouteParentWindowId(uint32_t x);
    BitField<ImGui::ViewportFlags> _GetViewportFlagsOverrideSet();
    void _SetViewportFlagsOverrideSet(BitField<ImGui::ViewportFlags> x);
    BitField<ImGui::ViewportFlags> _GetViewportFlagsOverrideClear();
    void _SetViewportFlagsOverrideClear(BitField<ImGui::ViewportFlags> x);
    BitField<ImGui::TabItemFlags> _GetTabItemFlagsOverrideSet();
    void _SetTabItemFlagsOverrideSet(BitField<ImGui::TabItemFlags> x);
    BitField<ImGui::DockNodeFlags> _GetDockNodeFlagsOverrideSet();
    void _SetDockNodeFlagsOverrideSet(BitField<ImGui::DockNodeFlags> x);
    bool _GetDockingAlwaysTabBar();
    void _SetDockingAlwaysTabBar(bool x);
    bool _GetDockingAllowUnclassed();
    void _SetDockingAllowUnclassed(bool x);

private:
    std::unique_ptr<ImGuiWindowClass> ptr = std::make_unique<ImGuiWindowClass>();
};
class ImGuiListClipperPtr : public RefCounted
{
    GDCLASS(ImGuiListClipperPtr, RefCounted);

protected:
    static void _bind_methods();

public:
    ImGuiListClipper* _GetPtr() { return ptr.get(); }
    int _GetDisplayStart();
    void _SetDisplayStart(int x);
    int _GetDisplayEnd();
    void _SetDisplayEnd(int x);
    int _GetItemsCount();
    void _SetItemsCount(int x);
    real_t _GetItemsHeight();
    void _SetItemsHeight(real_t x);
    real_t _GetStartPosY();
    void _SetStartPosY(real_t x);
    double _GetStartSeekOffsetY();
    void _SetStartSeekOffsetY(double x);

private:
    std::unique_ptr<ImGuiListClipper> ptr = std::make_unique<ImGuiListClipper>();
};
class ImGuiMultiSelectIOPtr : public RefCounted
{
    GDCLASS(ImGuiMultiSelectIOPtr, RefCounted);

protected:
    static void _bind_methods();

public:
    void _SetPtr(ImGuiMultiSelectIO* p) { ptr = p; }
    ImGuiMultiSelectIO* _GetPtr() { return ptr; }
    Array _GetRequests();
    void _SetRequests(Array x);
    int64_t _GetRangeSrcItem();
    void _SetRangeSrcItem(int64_t x);
    int64_t _GetNavIdItem();
    void _SetNavIdItem(int64_t x);
    bool _GetNavIdSelected();
    void _SetNavIdSelected(bool x);
    bool _GetRangeSrcReset();
    void _SetRangeSrcReset(bool x);
    int _GetItemsCount();
    void _SetItemsCount(int x);

private:
    ImGuiMultiSelectIO* ptr = nullptr;
};
class ImGuiSelectionRequestPtr : public RefCounted
{
    GDCLASS(ImGuiSelectionRequestPtr, RefCounted);

protected:
    static void _bind_methods();

public:
    void _SetPtr(ImGuiSelectionRequest* p) { ptr = p; }
    ImGuiSelectionRequest* _GetPtr() { return ptr; }
    ImGui::SelectionRequestType _GetType();
    void _SetType(ImGui::SelectionRequestType x);
    bool _GetSelected();
    void _SetSelected(bool x);
    int8_t _GetRangeDirection();
    void _SetRangeDirection(int8_t x);
    int64_t _GetRangeFirstItem();
    void _SetRangeFirstItem(int64_t x);
    int64_t _GetRangeLastItem();
    void _SetRangeLastItem(int64_t x);

private:
    ImGuiSelectionRequest* ptr = nullptr;
};
class ImDrawListPtr : public RefCounted
{
    GDCLASS(ImDrawListPtr, RefCounted);

protected:
    static void _bind_methods();

public:
    void _SetPtr(ImDrawList* p) { ptr = p; }
    ImDrawList* _GetPtr() { return ptr; }
    BitField<ImGui::DrawListFlags> _GetFlags();
    void _SetFlags(BitField<ImGui::DrawListFlags> x);
    real_t _Get_FringeScale();
    void _Set_FringeScale(real_t x);

private:
    ImDrawList* ptr = nullptr;
};
} // namespace ImGui::Godot
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::WindowFlags);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::ChildFlags);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::ItemFlags);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::InputTextFlags);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::TreeNodeFlags);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::PopupFlags);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::SelectableFlags);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::ComboFlags);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::TabBarFlags);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::TabItemFlags);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::FocusedFlags);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::HoveredFlags);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::DockNodeFlags);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::DragDropFlags);
VARIANT_ENUM_CAST(ImGui::Godot::ImGui::DataType);
VARIANT_ENUM_CAST(ImGui::Godot::ImGui::Dir);
VARIANT_ENUM_CAST(ImGui::Godot::ImGui::SortDirection);
VARIANT_ENUM_CAST(ImGui::Godot::ImGui::Key);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::InputFlags);
VARIANT_ENUM_CAST(ImGui::Godot::ImGui::NavInput);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::ConfigFlags);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::BackendFlags);
VARIANT_ENUM_CAST(ImGui::Godot::ImGui::Col);
VARIANT_ENUM_CAST(ImGui::Godot::ImGui::StyleVar);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::ButtonFlags);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::ColorEditFlags);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::SliderFlags);
VARIANT_ENUM_CAST(ImGui::Godot::ImGui::MouseButton);
VARIANT_ENUM_CAST(ImGui::Godot::ImGui::MouseCursor);
VARIANT_ENUM_CAST(ImGui::Godot::ImGui::MouseSource);
VARIANT_ENUM_CAST(ImGui::Godot::ImGui::Cond);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::TableFlags);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::TableColumnFlags);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::TableRowFlags);
VARIANT_ENUM_CAST(ImGui::Godot::ImGui::TableBgTarget);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::MultiSelectFlags);
VARIANT_ENUM_CAST(ImGui::Godot::ImGui::SelectionRequestType);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::DrawFlags);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::DrawListFlags);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::FontAtlasFlags);
VARIANT_BITFIELD_CAST(ImGui::Godot::ImGui::ViewportFlags);