void ImGui::_bind_methods()
{
    BIND_BITFIELD_FLAG(WindowFlags_None);
    BIND_BITFIELD_FLAG(WindowFlags_NoTitleBar);
    BIND_BITFIELD_FLAG(WindowFlags_NoResize);
    BIND_BITFIELD_FLAG(WindowFlags_NoMove);
    BIND_BITFIELD_FLAG(WindowFlags_NoScrollbar);
    BIND_BITFIELD_FLAG(WindowFlags_NoScrollWithMouse);
    BIND_BITFIELD_FLAG(WindowFlags_NoCollapse);
    BIND_BITFIELD_FLAG(WindowFlags_AlwaysAutoResize);
    BIND_BITFIELD_FLAG(WindowFlags_NoBackground);
    BIND_BITFIELD_FLAG(WindowFlags_NoSavedSettings);
    BIND_BITFIELD_FLAG(WindowFlags_NoMouseInputs);
    BIND_BITFIELD_FLAG(WindowFlags_MenuBar);
    BIND_BITFIELD_FLAG(WindowFlags_HorizontalScrollbar);
    BIND_BITFIELD_FLAG(WindowFlags_NoFocusOnAppearing);
    BIND_BITFIELD_FLAG(WindowFlags_NoBringToFrontOnFocus);
    BIND_BITFIELD_FLAG(WindowFlags_AlwaysVerticalScrollbar);
    BIND_BITFIELD_FLAG(WindowFlags_AlwaysHorizontalScrollbar);
    BIND_BITFIELD_FLAG(WindowFlags_NoNavInputs);
    BIND_BITFIELD_FLAG(WindowFlags_NoNavFocus);
    BIND_BITFIELD_FLAG(WindowFlags_UnsavedDocument);
    BIND_BITFIELD_FLAG(WindowFlags_NoDocking);
    BIND_BITFIELD_FLAG(WindowFlags_NoNav);
    BIND_BITFIELD_FLAG(WindowFlags_NoDecoration);
    BIND_BITFIELD_FLAG(WindowFlags_NoInputs);
    BIND_BITFIELD_FLAG(WindowFlags_ChildWindow);
    BIND_BITFIELD_FLAG(WindowFlags_Tooltip);
    BIND_BITFIELD_FLAG(WindowFlags_Popup);
    BIND_BITFIELD_FLAG(WindowFlags_Modal);
    BIND_BITFIELD_FLAG(WindowFlags_ChildMenu);
    BIND_BITFIELD_FLAG(WindowFlags_DockNodeHost);
    BIND_BITFIELD_FLAG(ChildFlags_None);
    BIND_BITFIELD_FLAG(ChildFlags_Borders);
    BIND_BITFIELD_FLAG(ChildFlags_AlwaysUseWindowPadding);
    BIND_BITFIELD_FLAG(ChildFlags_ResizeX);
    BIND_BITFIELD_FLAG(ChildFlags_ResizeY);
    BIND_BITFIELD_FLAG(ChildFlags_AutoResizeX);
    BIND_BITFIELD_FLAG(ChildFlags_AutoResizeY);
    BIND_BITFIELD_FLAG(ChildFlags_AlwaysAutoResize);
    BIND_BITFIELD_FLAG(ChildFlags_FrameStyle);
    BIND_BITFIELD_FLAG(ChildFlags_NavFlattened);
    BIND_BITFIELD_FLAG(ItemFlags_None);
    BIND_BITFIELD_FLAG(ItemFlags_NoTabStop);
    BIND_BITFIELD_FLAG(ItemFlags_NoNav);
    BIND_BITFIELD_FLAG(ItemFlags_NoNavDefaultFocus);
    BIND_BITFIELD_FLAG(ItemFlags_ButtonRepeat);
    BIND_BITFIELD_FLAG(ItemFlags_AutoClosePopups);
    BIND_BITFIELD_FLAG(ItemFlags_AllowDuplicateId);
    BIND_BITFIELD_FLAG(InputTextFlags_None);
    BIND_BITFIELD_FLAG(InputTextFlags_CharsDecimal);
    BIND_BITFIELD_FLAG(InputTextFlags_CharsHexadecimal);
    BIND_BITFIELD_FLAG(InputTextFlags_CharsScientific);
    BIND_BITFIELD_FLAG(InputTextFlags_CharsUppercase);
    BIND_BITFIELD_FLAG(InputTextFlags_CharsNoBlank);
    BIND_BITFIELD_FLAG(InputTextFlags_AllowTabInput);
    BIND_BITFIELD_FLAG(InputTextFlags_EnterReturnsTrue);
    BIND_BITFIELD_FLAG(InputTextFlags_EscapeClearsAll);
    BIND_BITFIELD_FLAG(InputTextFlags_CtrlEnterForNewLine);
    BIND_BITFIELD_FLAG(InputTextFlags_ReadOnly);
    BIND_BITFIELD_FLAG(InputTextFlags_Password);
    BIND_BITFIELD_FLAG(InputTextFlags_AlwaysOverwrite);
    BIND_BITFIELD_FLAG(InputTextFlags_AutoSelectAll);
    BIND_BITFIELD_FLAG(InputTextFlags_ParseEmptyRefVal);
    BIND_BITFIELD_FLAG(InputTextFlags_DisplayEmptyRefVal);
    BIND_BITFIELD_FLAG(InputTextFlags_NoHorizontalScroll);
    BIND_BITFIELD_FLAG(InputTextFlags_NoUndoRedo);
    BIND_BITFIELD_FLAG(InputTextFlags_ElideLeft);
    BIND_BITFIELD_FLAG(InputTextFlags_CallbackCompletion);
    BIND_BITFIELD_FLAG(InputTextFlags_CallbackHistory);
    BIND_BITFIELD_FLAG(InputTextFlags_CallbackAlways);
    BIND_BITFIELD_FLAG(InputTextFlags_CallbackCharFilter);
    BIND_BITFIELD_FLAG(InputTextFlags_CallbackResize);
    BIND_BITFIELD_FLAG(InputTextFlags_CallbackEdit);
    BIND_BITFIELD_FLAG(TreeNodeFlags_None);
    BIND_BITFIELD_FLAG(TreeNodeFlags_Selected);
    BIND_BITFIELD_FLAG(TreeNodeFlags_Framed);
    BIND_BITFIELD_FLAG(TreeNodeFlags_AllowOverlap);
    BIND_BITFIELD_FLAG(TreeNodeFlags_NoTreePushOnOpen);
    BIND_BITFIELD_FLAG(TreeNodeFlags_NoAutoOpenOnLog);
    BIND_BITFIELD_FLAG(TreeNodeFlags_DefaultOpen);
    BIND_BITFIELD_FLAG(TreeNodeFlags_OpenOnDoubleClick);
    BIND_BITFIELD_FLAG(TreeNodeFlags_OpenOnArrow);
    BIND_BITFIELD_FLAG(TreeNodeFlags_Leaf);
    BIND_BITFIELD_FLAG(TreeNodeFlags_Bullet);
    BIND_BITFIELD_FLAG(TreeNodeFlags_FramePadding);
    BIND_BITFIELD_FLAG(TreeNodeFlags_SpanAvailWidth);
    BIND_BITFIELD_FLAG(TreeNodeFlags_SpanFullWidth);
    BIND_BITFIELD_FLAG(TreeNodeFlags_SpanTextWidth);
    BIND_BITFIELD_FLAG(TreeNodeFlags_SpanAllColumns);
    BIND_BITFIELD_FLAG(TreeNodeFlags_NavLeftJumpsBackHere);
    BIND_BITFIELD_FLAG(TreeNodeFlags_CollapsingHeader);
    BIND_BITFIELD_FLAG(PopupFlags_None);
    BIND_BITFIELD_FLAG(PopupFlags_MouseButtonLeft);
    BIND_BITFIELD_FLAG(PopupFlags_MouseButtonRight);
    BIND_BITFIELD_FLAG(PopupFlags_MouseButtonMiddle);
    BIND_BITFIELD_FLAG(PopupFlags_NoReopen);
    BIND_BITFIELD_FLAG(PopupFlags_NoOpenOverExistingPopup);
    BIND_BITFIELD_FLAG(PopupFlags_NoOpenOverItems);
    BIND_BITFIELD_FLAG(PopupFlags_AnyPopupId);
    BIND_BITFIELD_FLAG(PopupFlags_AnyPopupLevel);
    BIND_BITFIELD_FLAG(PopupFlags_AnyPopup);
    BIND_BITFIELD_FLAG(SelectableFlags_None);
    BIND_BITFIELD_FLAG(SelectableFlags_NoAutoClosePopups);
    BIND_BITFIELD_FLAG(SelectableFlags_SpanAllColumns);
    BIND_BITFIELD_FLAG(SelectableFlags_AllowDoubleClick);
    BIND_BITFIELD_FLAG(SelectableFlags_Disabled);
    BIND_BITFIELD_FLAG(SelectableFlags_AllowOverlap);
    BIND_BITFIELD_FLAG(SelectableFlags_Highlight);
    BIND_BITFIELD_FLAG(ComboFlags_None);
    BIND_BITFIELD_FLAG(ComboFlags_PopupAlignLeft);
    BIND_BITFIELD_FLAG(ComboFlags_HeightSmall);
    BIND_BITFIELD_FLAG(ComboFlags_HeightRegular);
    BIND_BITFIELD_FLAG(ComboFlags_HeightLarge);
    BIND_BITFIELD_FLAG(ComboFlags_HeightLargest);
    BIND_BITFIELD_FLAG(ComboFlags_NoArrowButton);
    BIND_BITFIELD_FLAG(ComboFlags_NoPreview);
    BIND_BITFIELD_FLAG(ComboFlags_WidthFitPreview);
    BIND_BITFIELD_FLAG(TabBarFlags_None);
    BIND_BITFIELD_FLAG(TabBarFlags_Reorderable);
    BIND_BITFIELD_FLAG(TabBarFlags_AutoSelectNewTabs);
    BIND_BITFIELD_FLAG(TabBarFlags_TabListPopupButton);
    BIND_BITFIELD_FLAG(TabBarFlags_NoCloseWithMiddleMouseButton);
    BIND_BITFIELD_FLAG(TabBarFlags_NoTabListScrollingButtons);
    BIND_BITFIELD_FLAG(TabBarFlags_NoTooltip);
    BIND_BITFIELD_FLAG(TabBarFlags_DrawSelectedOverline);
    BIND_BITFIELD_FLAG(TabBarFlags_FittingPolicyResizeDown);
    BIND_BITFIELD_FLAG(TabBarFlags_FittingPolicyScroll);
    BIND_BITFIELD_FLAG(TabItemFlags_None);
    BIND_BITFIELD_FLAG(TabItemFlags_UnsavedDocument);
    BIND_BITFIELD_FLAG(TabItemFlags_SetSelected);
    BIND_BITFIELD_FLAG(TabItemFlags_NoCloseWithMiddleMouseButton);
    BIND_BITFIELD_FLAG(TabItemFlags_NoPushId);
    BIND_BITFIELD_FLAG(TabItemFlags_NoTooltip);
    BIND_BITFIELD_FLAG(TabItemFlags_NoReorder);
    BIND_BITFIELD_FLAG(TabItemFlags_Leading);
    BIND_BITFIELD_FLAG(TabItemFlags_Trailing);
    BIND_BITFIELD_FLAG(TabItemFlags_NoAssumedClosure);
    BIND_BITFIELD_FLAG(FocusedFlags_None);
    BIND_BITFIELD_FLAG(FocusedFlags_ChildWindows);
    BIND_BITFIELD_FLAG(FocusedFlags_RootWindow);
    BIND_BITFIELD_FLAG(FocusedFlags_AnyWindow);
    BIND_BITFIELD_FLAG(FocusedFlags_NoPopupHierarchy);
    BIND_BITFIELD_FLAG(FocusedFlags_DockHierarchy);
    BIND_BITFIELD_FLAG(FocusedFlags_RootAndChildWindows);
    BIND_BITFIELD_FLAG(HoveredFlags_None);
    BIND_BITFIELD_FLAG(HoveredFlags_ChildWindows);
    BIND_BITFIELD_FLAG(HoveredFlags_RootWindow);
    BIND_BITFIELD_FLAG(HoveredFlags_AnyWindow);
    BIND_BITFIELD_FLAG(HoveredFlags_NoPopupHierarchy);
    BIND_BITFIELD_FLAG(HoveredFlags_DockHierarchy);
    BIND_BITFIELD_FLAG(HoveredFlags_AllowWhenBlockedByPopup);
    BIND_BITFIELD_FLAG(HoveredFlags_AllowWhenBlockedByActiveItem);
    BIND_BITFIELD_FLAG(HoveredFlags_AllowWhenOverlappedByItem);
    BIND_BITFIELD_FLAG(HoveredFlags_AllowWhenOverlappedByWindow);
    BIND_BITFIELD_FLAG(HoveredFlags_AllowWhenDisabled);
    BIND_BITFIELD_FLAG(HoveredFlags_NoNavOverride);
    BIND_BITFIELD_FLAG(HoveredFlags_AllowWhenOverlapped);
    BIND_BITFIELD_FLAG(HoveredFlags_RectOnly);
    BIND_BITFIELD_FLAG(HoveredFlags_RootAndChildWindows);
    BIND_BITFIELD_FLAG(HoveredFlags_ForTooltip);
    BIND_BITFIELD_FLAG(HoveredFlags_Stationary);
    BIND_BITFIELD_FLAG(HoveredFlags_DelayNone);
    BIND_BITFIELD_FLAG(HoveredFlags_DelayShort);
    BIND_BITFIELD_FLAG(HoveredFlags_DelayNormal);
    BIND_BITFIELD_FLAG(HoveredFlags_NoSharedDelay);
    BIND_BITFIELD_FLAG(DockNodeFlags_None);
    BIND_BITFIELD_FLAG(DockNodeFlags_KeepAliveOnly);
    BIND_BITFIELD_FLAG(DockNodeFlags_NoDockingOverCentralNode);
    BIND_BITFIELD_FLAG(DockNodeFlags_PassthruCentralNode);
    BIND_BITFIELD_FLAG(DockNodeFlags_NoDockingSplit);
    BIND_BITFIELD_FLAG(DockNodeFlags_NoResize);
    BIND_BITFIELD_FLAG(DockNodeFlags_AutoHideTabBar);
    BIND_BITFIELD_FLAG(DockNodeFlags_NoUndocking);
    BIND_BITFIELD_FLAG(DragDropFlags_None);
    BIND_BITFIELD_FLAG(DragDropFlags_SourceNoPreviewTooltip);
    BIND_BITFIELD_FLAG(DragDropFlags_SourceNoDisableHover);
    BIND_BITFIELD_FLAG(DragDropFlags_SourceNoHoldToOpenOthers);
    BIND_BITFIELD_FLAG(DragDropFlags_SourceAllowNullID);
    BIND_BITFIELD_FLAG(DragDropFlags_SourceExtern);
    BIND_BITFIELD_FLAG(DragDropFlags_PayloadAutoExpire);
    BIND_BITFIELD_FLAG(DragDropFlags_PayloadNoCrossContext);
    BIND_BITFIELD_FLAG(DragDropFlags_PayloadNoCrossProcess);
    BIND_BITFIELD_FLAG(DragDropFlags_AcceptBeforeDelivery);
    BIND_BITFIELD_FLAG(DragDropFlags_AcceptNoDrawDefaultRect);
    BIND_BITFIELD_FLAG(DragDropFlags_AcceptNoPreviewTooltip);
    BIND_BITFIELD_FLAG(DragDropFlags_AcceptPeekOnly);
    BIND_ENUM_CONSTANT(DataType_S8);
    BIND_ENUM_CONSTANT(DataType_U8);
    BIND_ENUM_CONSTANT(DataType_S16);
    BIND_ENUM_CONSTANT(DataType_U16);
    BIND_ENUM_CONSTANT(DataType_S32);
    BIND_ENUM_CONSTANT(DataType_U32);
    BIND_ENUM_CONSTANT(DataType_S64);
    BIND_ENUM_CONSTANT(DataType_U64);
    BIND_ENUM_CONSTANT(DataType_Float);
    BIND_ENUM_CONSTANT(DataType_Double);
    BIND_ENUM_CONSTANT(DataType_Bool);
    BIND_ENUM_CONSTANT(Dir_None);
    BIND_ENUM_CONSTANT(Dir_Left);
    BIND_ENUM_CONSTANT(Dir_Right);
    BIND_ENUM_CONSTANT(Dir_Up);
    BIND_ENUM_CONSTANT(Dir_Down);
    BIND_ENUM_CONSTANT(SortDirection_None);
    BIND_ENUM_CONSTANT(SortDirection_Ascending);
    BIND_ENUM_CONSTANT(SortDirection_Descending);
    BIND_ENUM_CONSTANT(Key_None);
    BIND_ENUM_CONSTANT(Key_Tab);
    BIND_ENUM_CONSTANT(Key_LeftArrow);
    BIND_ENUM_CONSTANT(Key_RightArrow);
    BIND_ENUM_CONSTANT(Key_UpArrow);
    BIND_ENUM_CONSTANT(Key_DownArrow);
    BIND_ENUM_CONSTANT(Key_PageUp);
    BIND_ENUM_CONSTANT(Key_PageDown);
    BIND_ENUM_CONSTANT(Key_Home);
    BIND_ENUM_CONSTANT(Key_End);
    BIND_ENUM_CONSTANT(Key_Insert);
    BIND_ENUM_CONSTANT(Key_Delete);
    BIND_ENUM_CONSTANT(Key_Backspace);
    BIND_ENUM_CONSTANT(Key_Space);
    BIND_ENUM_CONSTANT(Key_Enter);
    BIND_ENUM_CONSTANT(Key_Escape);
    BIND_ENUM_CONSTANT(Key_LeftCtrl);
    BIND_ENUM_CONSTANT(Key_LeftShift);
    BIND_ENUM_CONSTANT(Key_LeftAlt);
    BIND_ENUM_CONSTANT(Key_LeftSuper);
    BIND_ENUM_CONSTANT(Key_RightCtrl);
    BIND_ENUM_CONSTANT(Key_RightShift);
    BIND_ENUM_CONSTANT(Key_RightAlt);
    BIND_ENUM_CONSTANT(Key_RightSuper);
    BIND_ENUM_CONSTANT(Key_Menu);
    BIND_ENUM_CONSTANT(Key_0);
    BIND_ENUM_CONSTANT(Key_1);
    BIND_ENUM_CONSTANT(Key_2);
    BIND_ENUM_CONSTANT(Key_3);
    BIND_ENUM_CONSTANT(Key_4);
    BIND_ENUM_CONSTANT(Key_5);
    BIND_ENUM_CONSTANT(Key_6);
    BIND_ENUM_CONSTANT(Key_7);
    BIND_ENUM_CONSTANT(Key_8);
    BIND_ENUM_CONSTANT(Key_9);
    BIND_ENUM_CONSTANT(Key_A);
    BIND_ENUM_CONSTANT(Key_B);
    BIND_ENUM_CONSTANT(Key_C);
    BIND_ENUM_CONSTANT(Key_D);
    BIND_ENUM_CONSTANT(Key_E);
    BIND_ENUM_CONSTANT(Key_F);
    BIND_ENUM_CONSTANT(Key_G);
    BIND_ENUM_CONSTANT(Key_H);
    BIND_ENUM_CONSTANT(Key_I);
    BIND_ENUM_CONSTANT(Key_J);
    BIND_ENUM_CONSTANT(Key_K);
    BIND_ENUM_CONSTANT(Key_L);
    BIND_ENUM_CONSTANT(Key_M);
    BIND_ENUM_CONSTANT(Key_N);
    BIND_ENUM_CONSTANT(Key_O);
    BIND_ENUM_CONSTANT(Key_P);
    BIND_ENUM_CONSTANT(Key_Q);
    BIND_ENUM_CONSTANT(Key_R);
    BIND_ENUM_CONSTANT(Key_S);
    BIND_ENUM_CONSTANT(Key_T);
    BIND_ENUM_CONSTANT(Key_U);
    BIND_ENUM_CONSTANT(Key_V);
    BIND_ENUM_CONSTANT(Key_W);
    BIND_ENUM_CONSTANT(Key_X);
    BIND_ENUM_CONSTANT(Key_Y);
    BIND_ENUM_CONSTANT(Key_Z);
    BIND_ENUM_CONSTANT(Key_F1);
    BIND_ENUM_CONSTANT(Key_F2);
    BIND_ENUM_CONSTANT(Key_F3);
    BIND_ENUM_CONSTANT(Key_F4);
    BIND_ENUM_CONSTANT(Key_F5);
    BIND_ENUM_CONSTANT(Key_F6);
    BIND_ENUM_CONSTANT(Key_F7);
    BIND_ENUM_CONSTANT(Key_F8);
    BIND_ENUM_CONSTANT(Key_F9);
    BIND_ENUM_CONSTANT(Key_F10);
    BIND_ENUM_CONSTANT(Key_F11);
    BIND_ENUM_CONSTANT(Key_F12);
    BIND_ENUM_CONSTANT(Key_F13);
    BIND_ENUM_CONSTANT(Key_F14);
    BIND_ENUM_CONSTANT(Key_F15);
    BIND_ENUM_CONSTANT(Key_F16);
    BIND_ENUM_CONSTANT(Key_F17);
    BIND_ENUM_CONSTANT(Key_F18);
    BIND_ENUM_CONSTANT(Key_F19);
    BIND_ENUM_CONSTANT(Key_F20);
    BIND_ENUM_CONSTANT(Key_F21);
    BIND_ENUM_CONSTANT(Key_F22);
    BIND_ENUM_CONSTANT(Key_F23);
    BIND_ENUM_CONSTANT(Key_F24);
    BIND_ENUM_CONSTANT(Key_Apostrophe);
    BIND_ENUM_CONSTANT(Key_Comma);
    BIND_ENUM_CONSTANT(Key_Minus);
    BIND_ENUM_CONSTANT(Key_Period);
    BIND_ENUM_CONSTANT(Key_Slash);
    BIND_ENUM_CONSTANT(Key_Semicolon);
    BIND_ENUM_CONSTANT(Key_Equal);
    BIND_ENUM_CONSTANT(Key_LeftBracket);
    BIND_ENUM_CONSTANT(Key_Backslash);
    BIND_ENUM_CONSTANT(Key_RightBracket);
    BIND_ENUM_CONSTANT(Key_GraveAccent);
    BIND_ENUM_CONSTANT(Key_CapsLock);
    BIND_ENUM_CONSTANT(Key_ScrollLock);
    BIND_ENUM_CONSTANT(Key_NumLock);
    BIND_ENUM_CONSTANT(Key_PrintScreen);
    BIND_ENUM_CONSTANT(Key_Pause);
    BIND_ENUM_CONSTANT(Key_Keypad0);
    BIND_ENUM_CONSTANT(Key_Keypad1);
    BIND_ENUM_CONSTANT(Key_Keypad2);
    BIND_ENUM_CONSTANT(Key_Keypad3);
    BIND_ENUM_CONSTANT(Key_Keypad4);
    BIND_ENUM_CONSTANT(Key_Keypad5);
    BIND_ENUM_CONSTANT(Key_Keypad6);
    BIND_ENUM_CONSTANT(Key_Keypad7);
    BIND_ENUM_CONSTANT(Key_Keypad8);
    BIND_ENUM_CONSTANT(Key_Keypad9);
    BIND_ENUM_CONSTANT(Key_KeypadDecimal);
    BIND_ENUM_CONSTANT(Key_KeypadDivide);
    BIND_ENUM_CONSTANT(Key_KeypadMultiply);
    BIND_ENUM_CONSTANT(Key_KeypadSubtract);
    BIND_ENUM_CONSTANT(Key_KeypadAdd);
    BIND_ENUM_CONSTANT(Key_KeypadEnter);
    BIND_ENUM_CONSTANT(Key_KeypadEqual);
    BIND_ENUM_CONSTANT(Key_AppBack);
    BIND_ENUM_CONSTANT(Key_AppForward);
    BIND_ENUM_CONSTANT(Key_GamepadStart);
    BIND_ENUM_CONSTANT(Key_GamepadBack);
    BIND_ENUM_CONSTANT(Key_GamepadFaceLeft);
    BIND_ENUM_CONSTANT(Key_GamepadFaceRight);
    BIND_ENUM_CONSTANT(Key_GamepadFaceUp);
    BIND_ENUM_CONSTANT(Key_GamepadFaceDown);
    BIND_ENUM_CONSTANT(Key_GamepadDpadLeft);
    BIND_ENUM_CONSTANT(Key_GamepadDpadRight);
    BIND_ENUM_CONSTANT(Key_GamepadDpadUp);
    BIND_ENUM_CONSTANT(Key_GamepadDpadDown);
    BIND_ENUM_CONSTANT(Key_GamepadL1);
    BIND_ENUM_CONSTANT(Key_GamepadR1);
    BIND_ENUM_CONSTANT(Key_GamepadL2);
    BIND_ENUM_CONSTANT(Key_GamepadR2);
    BIND_ENUM_CONSTANT(Key_GamepadL3);
    BIND_ENUM_CONSTANT(Key_GamepadR3);
    BIND_ENUM_CONSTANT(Key_GamepadLStickLeft);
    BIND_ENUM_CONSTANT(Key_GamepadLStickRight);
    BIND_ENUM_CONSTANT(Key_GamepadLStickUp);
    BIND_ENUM_CONSTANT(Key_GamepadLStickDown);
    BIND_ENUM_CONSTANT(Key_GamepadRStickLeft);
    BIND_ENUM_CONSTANT(Key_GamepadRStickRight);
    BIND_ENUM_CONSTANT(Key_GamepadRStickUp);
    BIND_ENUM_CONSTANT(Key_GamepadRStickDown);
    BIND_ENUM_CONSTANT(Key_MouseLeft);
    BIND_ENUM_CONSTANT(Key_MouseRight);
    BIND_ENUM_CONSTANT(Key_MouseMiddle);
    BIND_ENUM_CONSTANT(Key_MouseX1);
    BIND_ENUM_CONSTANT(Key_MouseX2);
    BIND_ENUM_CONSTANT(Key_MouseWheelX);
    BIND_ENUM_CONSTANT(Key_MouseWheelY);
    BIND_ENUM_CONSTANT(Key_ReservedForModCtrl);
    BIND_ENUM_CONSTANT(Key_ReservedForModShift);
    BIND_ENUM_CONSTANT(Key_ReservedForModAlt);
    BIND_ENUM_CONSTANT(Key_ReservedForModSuper);
    BIND_ENUM_CONSTANT(Mod_None);
    BIND_ENUM_CONSTANT(Mod_Ctrl);
    BIND_ENUM_CONSTANT(Mod_Shift);
    BIND_ENUM_CONSTANT(Mod_Alt);
    BIND_ENUM_CONSTANT(Mod_Super);
    BIND_BITFIELD_FLAG(InputFlags_None);
    BIND_BITFIELD_FLAG(InputFlags_Repeat);
    BIND_BITFIELD_FLAG(InputFlags_RouteActive);
    BIND_BITFIELD_FLAG(InputFlags_RouteFocused);
    BIND_BITFIELD_FLAG(InputFlags_RouteGlobal);
    BIND_BITFIELD_FLAG(InputFlags_RouteAlways);
    BIND_BITFIELD_FLAG(InputFlags_RouteOverFocused);
    BIND_BITFIELD_FLAG(InputFlags_RouteOverActive);
    BIND_BITFIELD_FLAG(InputFlags_RouteUnlessBgFocused);
    BIND_BITFIELD_FLAG(InputFlags_RouteFromRootWindow);
    BIND_BITFIELD_FLAG(InputFlags_Tooltip);
    BIND_BITFIELD_FLAG(ConfigFlags_None);
    BIND_BITFIELD_FLAG(ConfigFlags_NavEnableKeyboard);
    BIND_BITFIELD_FLAG(ConfigFlags_NavEnableGamepad);
    BIND_BITFIELD_FLAG(ConfigFlags_NoMouse);
    BIND_BITFIELD_FLAG(ConfigFlags_NoMouseCursorChange);
    BIND_BITFIELD_FLAG(ConfigFlags_NoKeyboard);
    BIND_BITFIELD_FLAG(ConfigFlags_DockingEnable);
    BIND_BITFIELD_FLAG(ConfigFlags_ViewportsEnable);
    BIND_BITFIELD_FLAG(ConfigFlags_DpiEnableScaleViewports);
    BIND_BITFIELD_FLAG(ConfigFlags_DpiEnableScaleFonts);
    BIND_BITFIELD_FLAG(ConfigFlags_IsSRGB);
    BIND_BITFIELD_FLAG(ConfigFlags_IsTouchScreen);
    BIND_BITFIELD_FLAG(BackendFlags_None);
    BIND_BITFIELD_FLAG(BackendFlags_HasGamepad);
    BIND_BITFIELD_FLAG(BackendFlags_HasMouseCursors);
    BIND_BITFIELD_FLAG(BackendFlags_HasSetMousePos);
    BIND_BITFIELD_FLAG(BackendFlags_RendererHasVtxOffset);
    BIND_BITFIELD_FLAG(BackendFlags_PlatformHasViewports);
    BIND_BITFIELD_FLAG(BackendFlags_HasMouseHoveredViewport);
    BIND_BITFIELD_FLAG(BackendFlags_RendererHasViewports);
    BIND_ENUM_CONSTANT(Col_Text);
    BIND_ENUM_CONSTANT(Col_TextDisabled);
    BIND_ENUM_CONSTANT(Col_WindowBg);
    BIND_ENUM_CONSTANT(Col_ChildBg);
    BIND_ENUM_CONSTANT(Col_PopupBg);
    BIND_ENUM_CONSTANT(Col_Border);
    BIND_ENUM_CONSTANT(Col_BorderShadow);
    BIND_ENUM_CONSTANT(Col_FrameBg);
    BIND_ENUM_CONSTANT(Col_FrameBgHovered);
    BIND_ENUM_CONSTANT(Col_FrameBgActive);
    BIND_ENUM_CONSTANT(Col_TitleBg);
    BIND_ENUM_CONSTANT(Col_TitleBgActive);
    BIND_ENUM_CONSTANT(Col_TitleBgCollapsed);
    BIND_ENUM_CONSTANT(Col_MenuBarBg);
    BIND_ENUM_CONSTANT(Col_ScrollbarBg);
    BIND_ENUM_CONSTANT(Col_ScrollbarGrab);
    BIND_ENUM_CONSTANT(Col_ScrollbarGrabHovered);
    BIND_ENUM_CONSTANT(Col_ScrollbarGrabActive);
    BIND_ENUM_CONSTANT(Col_CheckMark);
    BIND_ENUM_CONSTANT(Col_SliderGrab);
    BIND_ENUM_CONSTANT(Col_SliderGrabActive);
    BIND_ENUM_CONSTANT(Col_Button);
    BIND_ENUM_CONSTANT(Col_ButtonHovered);
    BIND_ENUM_CONSTANT(Col_ButtonActive);
    BIND_ENUM_CONSTANT(Col_Header);
    BIND_ENUM_CONSTANT(Col_HeaderHovered);
    BIND_ENUM_CONSTANT(Col_HeaderActive);
    BIND_ENUM_CONSTANT(Col_Separator);
    BIND_ENUM_CONSTANT(Col_SeparatorHovered);
    BIND_ENUM_CONSTANT(Col_SeparatorActive);
    BIND_ENUM_CONSTANT(Col_ResizeGrip);
    BIND_ENUM_CONSTANT(Col_ResizeGripHovered);
    BIND_ENUM_CONSTANT(Col_ResizeGripActive);
    BIND_ENUM_CONSTANT(Col_TabHovered);
    BIND_ENUM_CONSTANT(Col_Tab);
    BIND_ENUM_CONSTANT(Col_TabSelected);
    BIND_ENUM_CONSTANT(Col_TabSelectedOverline);
    BIND_ENUM_CONSTANT(Col_TabDimmed);
    BIND_ENUM_CONSTANT(Col_TabDimmedSelected);
    BIND_ENUM_CONSTANT(Col_TabDimmedSelectedOverline);
    BIND_ENUM_CONSTANT(Col_DockingPreview);
    BIND_ENUM_CONSTANT(Col_DockingEmptyBg);
    BIND_ENUM_CONSTANT(Col_PlotLines);
    BIND_ENUM_CONSTANT(Col_PlotLinesHovered);
    BIND_ENUM_CONSTANT(Col_PlotHistogram);
    BIND_ENUM_CONSTANT(Col_PlotHistogramHovered);
    BIND_ENUM_CONSTANT(Col_TableHeaderBg);
    BIND_ENUM_CONSTANT(Col_TableBorderStrong);
    BIND_ENUM_CONSTANT(Col_TableBorderLight);
    BIND_ENUM_CONSTANT(Col_TableRowBg);
    BIND_ENUM_CONSTANT(Col_TableRowBgAlt);
    BIND_ENUM_CONSTANT(Col_TextLink);
    BIND_ENUM_CONSTANT(Col_TextSelectedBg);
    BIND_ENUM_CONSTANT(Col_DragDropTarget);
    BIND_ENUM_CONSTANT(Col_NavCursor);
    BIND_ENUM_CONSTANT(Col_NavWindowingHighlight);
    BIND_ENUM_CONSTANT(Col_NavWindowingDimBg);
    BIND_ENUM_CONSTANT(Col_ModalWindowDimBg);
    BIND_ENUM_CONSTANT(StyleVar_Alpha);
    BIND_ENUM_CONSTANT(StyleVar_DisabledAlpha);
    BIND_ENUM_CONSTANT(StyleVar_WindowPadding);
    BIND_ENUM_CONSTANT(StyleVar_WindowRounding);
    BIND_ENUM_CONSTANT(StyleVar_WindowBorderSize);
    BIND_ENUM_CONSTANT(StyleVar_WindowMinSize);
    BIND_ENUM_CONSTANT(StyleVar_WindowTitleAlign);
    BIND_ENUM_CONSTANT(StyleVar_ChildRounding);
    BIND_ENUM_CONSTANT(StyleVar_ChildBorderSize);
    BIND_ENUM_CONSTANT(StyleVar_PopupRounding);
    BIND_ENUM_CONSTANT(StyleVar_PopupBorderSize);
    BIND_ENUM_CONSTANT(StyleVar_FramePadding);
    BIND_ENUM_CONSTANT(StyleVar_FrameRounding);
    BIND_ENUM_CONSTANT(StyleVar_FrameBorderSize);
    BIND_ENUM_CONSTANT(StyleVar_ItemSpacing);
    BIND_ENUM_CONSTANT(StyleVar_ItemInnerSpacing);
    BIND_ENUM_CONSTANT(StyleVar_IndentSpacing);
    BIND_ENUM_CONSTANT(StyleVar_CellPadding);
    BIND_ENUM_CONSTANT(StyleVar_ScrollbarSize);
    BIND_ENUM_CONSTANT(StyleVar_ScrollbarRounding);
    BIND_ENUM_CONSTANT(StyleVar_GrabMinSize);
    BIND_ENUM_CONSTANT(StyleVar_GrabRounding);
    BIND_ENUM_CONSTANT(StyleVar_TabRounding);
    BIND_ENUM_CONSTANT(StyleVar_TabBorderSize);
    BIND_ENUM_CONSTANT(StyleVar_TabBarBorderSize);
    BIND_ENUM_CONSTANT(StyleVar_TabBarOverlineSize);
    BIND_ENUM_CONSTANT(StyleVar_TableAngledHeadersAngle);
    BIND_ENUM_CONSTANT(StyleVar_TableAngledHeadersTextAlign);
    BIND_ENUM_CONSTANT(StyleVar_ButtonTextAlign);
    BIND_ENUM_CONSTANT(StyleVar_SelectableTextAlign);
    BIND_ENUM_CONSTANT(StyleVar_SeparatorTextBorderSize);
    BIND_ENUM_CONSTANT(StyleVar_SeparatorTextAlign);
    BIND_ENUM_CONSTANT(StyleVar_SeparatorTextPadding);
    BIND_ENUM_CONSTANT(StyleVar_DockingSeparatorSize);
    BIND_BITFIELD_FLAG(ButtonFlags_None);
    BIND_BITFIELD_FLAG(ButtonFlags_MouseButtonLeft);
    BIND_BITFIELD_FLAG(ButtonFlags_MouseButtonRight);
    BIND_BITFIELD_FLAG(ButtonFlags_MouseButtonMiddle);
    BIND_BITFIELD_FLAG(ButtonFlags_EnableNav);
    BIND_BITFIELD_FLAG(ColorEditFlags_None);
    BIND_BITFIELD_FLAG(ColorEditFlags_NoAlpha);
    BIND_BITFIELD_FLAG(ColorEditFlags_NoPicker);
    BIND_BITFIELD_FLAG(ColorEditFlags_NoOptions);
    BIND_BITFIELD_FLAG(ColorEditFlags_NoSmallPreview);
    BIND_BITFIELD_FLAG(ColorEditFlags_NoInputs);
    BIND_BITFIELD_FLAG(ColorEditFlags_NoTooltip);
    BIND_BITFIELD_FLAG(ColorEditFlags_NoLabel);
    BIND_BITFIELD_FLAG(ColorEditFlags_NoSidePreview);
    BIND_BITFIELD_FLAG(ColorEditFlags_NoDragDrop);
    BIND_BITFIELD_FLAG(ColorEditFlags_NoBorder);
    BIND_BITFIELD_FLAG(ColorEditFlags_AlphaBar);
    BIND_BITFIELD_FLAG(ColorEditFlags_AlphaPreview);
    BIND_BITFIELD_FLAG(ColorEditFlags_AlphaPreviewHalf);
    BIND_BITFIELD_FLAG(ColorEditFlags_HDR);
    BIND_BITFIELD_FLAG(ColorEditFlags_DisplayRGB);
    BIND_BITFIELD_FLAG(ColorEditFlags_DisplayHSV);
    BIND_BITFIELD_FLAG(ColorEditFlags_DisplayHex);
    BIND_BITFIELD_FLAG(ColorEditFlags_Uint8);
    BIND_BITFIELD_FLAG(ColorEditFlags_Float);
    BIND_BITFIELD_FLAG(ColorEditFlags_PickerHueBar);
    BIND_BITFIELD_FLAG(ColorEditFlags_PickerHueWheel);
    BIND_BITFIELD_FLAG(ColorEditFlags_InputRGB);
    BIND_BITFIELD_FLAG(ColorEditFlags_InputHSV);
    BIND_BITFIELD_FLAG(SliderFlags_None);
    BIND_BITFIELD_FLAG(SliderFlags_Logarithmic);
    BIND_BITFIELD_FLAG(SliderFlags_NoRoundToFormat);
    BIND_BITFIELD_FLAG(SliderFlags_NoInput);
    BIND_BITFIELD_FLAG(SliderFlags_WrapAround);
    BIND_BITFIELD_FLAG(SliderFlags_ClampOnInput);
    BIND_BITFIELD_FLAG(SliderFlags_ClampZeroRange);
    BIND_BITFIELD_FLAG(SliderFlags_AlwaysClamp);
    BIND_ENUM_CONSTANT(MouseButton_Left);
    BIND_ENUM_CONSTANT(MouseButton_Right);
    BIND_ENUM_CONSTANT(MouseButton_Middle);
    BIND_ENUM_CONSTANT(MouseCursor_None);
    BIND_ENUM_CONSTANT(MouseCursor_Arrow);
    BIND_ENUM_CONSTANT(MouseCursor_TextInput);
    BIND_ENUM_CONSTANT(MouseCursor_ResizeAll);
    BIND_ENUM_CONSTANT(MouseCursor_ResizeNS);
    BIND_ENUM_CONSTANT(MouseCursor_ResizeEW);
    BIND_ENUM_CONSTANT(MouseCursor_ResizeNESW);
    BIND_ENUM_CONSTANT(MouseCursor_ResizeNWSE);
    BIND_ENUM_CONSTANT(MouseCursor_Hand);
    BIND_ENUM_CONSTANT(MouseCursor_NotAllowed);
    BIND_ENUM_CONSTANT(MouseSource_Mouse);
    BIND_ENUM_CONSTANT(MouseSource_TouchScreen);
    BIND_ENUM_CONSTANT(MouseSource_Pen);
    BIND_ENUM_CONSTANT(Cond_None);
    BIND_ENUM_CONSTANT(Cond_Always);
    BIND_ENUM_CONSTANT(Cond_Once);
    BIND_ENUM_CONSTANT(Cond_FirstUseEver);
    BIND_ENUM_CONSTANT(Cond_Appearing);
    BIND_BITFIELD_FLAG(TableFlags_None);
    BIND_BITFIELD_FLAG(TableFlags_Resizable);
    BIND_BITFIELD_FLAG(TableFlags_Reorderable);
    BIND_BITFIELD_FLAG(TableFlags_Hideable);
    BIND_BITFIELD_FLAG(TableFlags_Sortable);
    BIND_BITFIELD_FLAG(TableFlags_NoSavedSettings);
    BIND_BITFIELD_FLAG(TableFlags_ContextMenuInBody);
    BIND_BITFIELD_FLAG(TableFlags_RowBg);
    BIND_BITFIELD_FLAG(TableFlags_BordersInnerH);
    BIND_BITFIELD_FLAG(TableFlags_BordersOuterH);
    BIND_BITFIELD_FLAG(TableFlags_BordersInnerV);
    BIND_BITFIELD_FLAG(TableFlags_BordersOuterV);
    BIND_BITFIELD_FLAG(TableFlags_BordersH);
    BIND_BITFIELD_FLAG(TableFlags_BordersV);
    BIND_BITFIELD_FLAG(TableFlags_BordersInner);
    BIND_BITFIELD_FLAG(TableFlags_BordersOuter);
    BIND_BITFIELD_FLAG(TableFlags_Borders);
    BIND_BITFIELD_FLAG(TableFlags_NoBordersInBody);
    BIND_BITFIELD_FLAG(TableFlags_NoBordersInBodyUntilResize);
    BIND_BITFIELD_FLAG(TableFlags_SizingFixedFit);
    BIND_BITFIELD_FLAG(TableFlags_SizingFixedSame);
    BIND_BITFIELD_FLAG(TableFlags_SizingStretchProp);
    BIND_BITFIELD_FLAG(TableFlags_SizingStretchSame);
    BIND_BITFIELD_FLAG(TableFlags_NoHostExtendX);
    BIND_BITFIELD_FLAG(TableFlags_NoHostExtendY);
    BIND_BITFIELD_FLAG(TableFlags_NoKeepColumnsVisible);
    BIND_BITFIELD_FLAG(TableFlags_PreciseWidths);
    BIND_BITFIELD_FLAG(TableFlags_NoClip);
    BIND_BITFIELD_FLAG(TableFlags_PadOuterX);
    BIND_BITFIELD_FLAG(TableFlags_NoPadOuterX);
    BIND_BITFIELD_FLAG(TableFlags_NoPadInnerX);
    BIND_BITFIELD_FLAG(TableFlags_ScrollX);
    BIND_BITFIELD_FLAG(TableFlags_ScrollY);
    BIND_BITFIELD_FLAG(TableFlags_SortMulti);
    BIND_BITFIELD_FLAG(TableFlags_SortTristate);
    BIND_BITFIELD_FLAG(TableFlags_HighlightHoveredColumn);
    BIND_BITFIELD_FLAG(TableColumnFlags_None);
    BIND_BITFIELD_FLAG(TableColumnFlags_Disabled);
    BIND_BITFIELD_FLAG(TableColumnFlags_DefaultHide);
    BIND_BITFIELD_FLAG(TableColumnFlags_DefaultSort);
    BIND_BITFIELD_FLAG(TableColumnFlags_WidthStretch);
    BIND_BITFIELD_FLAG(TableColumnFlags_WidthFixed);
    BIND_BITFIELD_FLAG(TableColumnFlags_NoResize);
    BIND_BITFIELD_FLAG(TableColumnFlags_NoReorder);
    BIND_BITFIELD_FLAG(TableColumnFlags_NoHide);
    BIND_BITFIELD_FLAG(TableColumnFlags_NoClip);
    BIND_BITFIELD_FLAG(TableColumnFlags_NoSort);
    BIND_BITFIELD_FLAG(TableColumnFlags_NoSortAscending);
    BIND_BITFIELD_FLAG(TableColumnFlags_NoSortDescending);
    BIND_BITFIELD_FLAG(TableColumnFlags_NoHeaderLabel);
    BIND_BITFIELD_FLAG(TableColumnFlags_NoHeaderWidth);
    BIND_BITFIELD_FLAG(TableColumnFlags_PreferSortAscending);
    BIND_BITFIELD_FLAG(TableColumnFlags_PreferSortDescending);
    BIND_BITFIELD_FLAG(TableColumnFlags_IndentEnable);
    BIND_BITFIELD_FLAG(TableColumnFlags_IndentDisable);
    BIND_BITFIELD_FLAG(TableColumnFlags_AngledHeader);
    BIND_BITFIELD_FLAG(TableColumnFlags_IsEnabled);
    BIND_BITFIELD_FLAG(TableColumnFlags_IsVisible);
    BIND_BITFIELD_FLAG(TableColumnFlags_IsSorted);
    BIND_BITFIELD_FLAG(TableColumnFlags_IsHovered);
    BIND_BITFIELD_FLAG(TableRowFlags_None);
    BIND_BITFIELD_FLAG(TableRowFlags_Headers);
    BIND_ENUM_CONSTANT(TableBgTarget_None);
    BIND_ENUM_CONSTANT(TableBgTarget_RowBg0);
    BIND_ENUM_CONSTANT(TableBgTarget_RowBg1);
    BIND_ENUM_CONSTANT(TableBgTarget_CellBg);
    BIND_BITFIELD_FLAG(MultiSelectFlags_None);
    BIND_BITFIELD_FLAG(MultiSelectFlags_SingleSelect);
    BIND_BITFIELD_FLAG(MultiSelectFlags_NoSelectAll);
    BIND_BITFIELD_FLAG(MultiSelectFlags_NoRangeSelect);
    BIND_BITFIELD_FLAG(MultiSelectFlags_NoAutoSelect);
    BIND_BITFIELD_FLAG(MultiSelectFlags_NoAutoClear);
    BIND_BITFIELD_FLAG(MultiSelectFlags_NoAutoClearOnReselect);
    BIND_BITFIELD_FLAG(MultiSelectFlags_BoxSelect1d);
    BIND_BITFIELD_FLAG(MultiSelectFlags_BoxSelect2d);
    BIND_BITFIELD_FLAG(MultiSelectFlags_BoxSelectNoScroll);
    BIND_BITFIELD_FLAG(MultiSelectFlags_ClearOnEscape);
    BIND_BITFIELD_FLAG(MultiSelectFlags_ClearOnClickVoid);
    BIND_BITFIELD_FLAG(MultiSelectFlags_ScopeWindow);
    BIND_BITFIELD_FLAG(MultiSelectFlags_ScopeRect);
    BIND_BITFIELD_FLAG(MultiSelectFlags_SelectOnClick);
    BIND_BITFIELD_FLAG(MultiSelectFlags_SelectOnClickRelease);
    BIND_BITFIELD_FLAG(MultiSelectFlags_NavWrapX);
    BIND_ENUM_CONSTANT(SelectionRequestType_None);
    BIND_ENUM_CONSTANT(SelectionRequestType_SetAll);
    BIND_ENUM_CONSTANT(SelectionRequestType_SetRange);
    BIND_BITFIELD_FLAG(DrawFlags_None);
    BIND_BITFIELD_FLAG(DrawFlags_Closed);
    BIND_BITFIELD_FLAG(DrawFlags_RoundCornersTopLeft);
    BIND_BITFIELD_FLAG(DrawFlags_RoundCornersTopRight);
    BIND_BITFIELD_FLAG(DrawFlags_RoundCornersBottomLeft);
    BIND_BITFIELD_FLAG(DrawFlags_RoundCornersBottomRight);
    BIND_BITFIELD_FLAG(DrawFlags_RoundCornersNone);
    BIND_BITFIELD_FLAG(DrawFlags_RoundCornersTop);
    BIND_BITFIELD_FLAG(DrawFlags_RoundCornersBottom);
    BIND_BITFIELD_FLAG(DrawFlags_RoundCornersLeft);
    BIND_BITFIELD_FLAG(DrawFlags_RoundCornersRight);
    BIND_BITFIELD_FLAG(DrawFlags_RoundCornersAll);
    BIND_BITFIELD_FLAG(DrawListFlags_None);
    BIND_BITFIELD_FLAG(DrawListFlags_AntiAliasedLines);
    BIND_BITFIELD_FLAG(DrawListFlags_AntiAliasedLinesUseTex);
    BIND_BITFIELD_FLAG(DrawListFlags_AntiAliasedFill);
    BIND_BITFIELD_FLAG(DrawListFlags_AllowVtxOffset);
    BIND_BITFIELD_FLAG(FontAtlasFlags_None);
    BIND_BITFIELD_FLAG(FontAtlasFlags_NoPowerOfTwoHeight);
    BIND_BITFIELD_FLAG(FontAtlasFlags_NoMouseCursors);
    BIND_BITFIELD_FLAG(FontAtlasFlags_NoBakedLines);
    BIND_BITFIELD_FLAG(ViewportFlags_None);
    BIND_BITFIELD_FLAG(ViewportFlags_IsPlatformWindow);
    BIND_BITFIELD_FLAG(ViewportFlags_IsPlatformMonitor);
    BIND_BITFIELD_FLAG(ViewportFlags_OwnedByApp);
    BIND_BITFIELD_FLAG(ViewportFlags_NoDecoration);
    BIND_BITFIELD_FLAG(ViewportFlags_NoTaskBarIcon);
    BIND_BITFIELD_FLAG(ViewportFlags_NoFocusOnAppearing);
    BIND_BITFIELD_FLAG(ViewportFlags_NoFocusOnClick);
    BIND_BITFIELD_FLAG(ViewportFlags_NoInputs);
    BIND_BITFIELD_FLAG(ViewportFlags_NoRendererClear);
    BIND_BITFIELD_FLAG(ViewportFlags_NoAutoMerge);
    BIND_BITFIELD_FLAG(ViewportFlags_TopMost);
    BIND_BITFIELD_FLAG(ViewportFlags_CanHostOtherWindows);
    BIND_BITFIELD_FLAG(ViewportFlags_IsMinimized);
    BIND_BITFIELD_FLAG(ViewportFlags_IsFocused);
    ClassDB::register_class<ImGuiTableSortSpecsPtr>();
    ClassDB::register_class<ImGuiTableColumnSortSpecsPtr>();
    ClassDB::register_class<ImGuiStylePtr>();
    ClassDB::register_class<ImGuiIOPtr>();
    ClassDB::register_class<ImGuiWindowClassPtr>();
    ClassDB::register_class<ImGuiListClipperPtr>();
    ClassDB::register_class<ImGuiMultiSelectIOPtr>();
    ClassDB::register_class<ImGuiSelectionRequestPtr>();
    ClassDB::register_class<ImDrawListPtr>();
    ClassDB::bind_static_method("ImGui", D_METHOD("GetIO"), &ImGui::GetIO);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetStyle"), &ImGui::GetStyle);
    ClassDB::bind_static_method("ImGui", D_METHOD("ShowDemoWindow", "p_open"), &ImGui::ShowDemoWindow, DEFVAL(Array()));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ShowMetricsWindow", "p_open"),
                                &ImGui::ShowMetricsWindow,
                                DEFVAL(Array()));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ShowDebugLogWindow", "p_open"),
                                &ImGui::ShowDebugLogWindow,
                                DEFVAL(Array()));
    ClassDB::bind_static_method("ImGui", D_METHOD("ShowIDStackToolWindow"), &ImGui::ShowIDStackToolWindow);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ShowIDStackToolWindowEx", "p_open"),
                                &ImGui::ShowIDStackToolWindowEx,
                                DEFVAL(Array()));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ShowAboutWindow", "p_open"),
                                &ImGui::ShowAboutWindow,
                                DEFVAL(Array()));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ShowStyleEditor", "ref"),
                                &ImGui::ShowStyleEditor,
                                DEFVAL(Ref<ImGuiStylePtr>()));
    ClassDB::bind_static_method("ImGui", D_METHOD("ShowStyleSelector", "label"), &ImGui::ShowStyleSelector);
    ClassDB::bind_static_method("ImGui", D_METHOD("ShowFontSelector", "label"), &ImGui::ShowFontSelector);
    ClassDB::bind_static_method("ImGui", D_METHOD("ShowUserGuide"), &ImGui::ShowUserGuide);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetVersion"), &ImGui::GetVersion);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("StyleColorsDark", "dst"),
                                &ImGui::StyleColorsDark,
                                DEFVAL(Ref<ImGuiStylePtr>()));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("StyleColorsLight", "dst"),
                                &ImGui::StyleColorsLight,
                                DEFVAL(Ref<ImGuiStylePtr>()));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("StyleColorsClassic", "dst"),
                                &ImGui::StyleColorsClassic,
                                DEFVAL(Ref<ImGuiStylePtr>()));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("Begin", "name", "p_open", "flags"),
                                &ImGui::Begin,
                                DEFVAL(Array()),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("End"), &ImGui::End);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("BeginChild", "str_id", "size", "child_flags", "window_flags"),
                                &ImGui::BeginChild,
                                DEFVAL(Vector2(0, 0)),
                                DEFVAL(0),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("BeginChildID", "id", "size", "child_flags", "window_flags"),
                                &ImGui::BeginChildID,
                                DEFVAL(Vector2(0, 0)),
                                DEFVAL(0),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("EndChild"), &ImGui::EndChild);
    ClassDB::bind_static_method("ImGui", D_METHOD("IsWindowAppearing"), &ImGui::IsWindowAppearing);
    ClassDB::bind_static_method("ImGui", D_METHOD("IsWindowCollapsed"), &ImGui::IsWindowCollapsed);
    ClassDB::bind_static_method("ImGui", D_METHOD("IsWindowFocused", "flags"), &ImGui::IsWindowFocused, DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("IsWindowHovered", "flags"), &ImGui::IsWindowHovered, DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("GetWindowDrawList"), &ImGui::GetWindowDrawList);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetWindowDpiScale"), &ImGui::GetWindowDpiScale);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetWindowPos"), &ImGui::GetWindowPos);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetWindowSize"), &ImGui::GetWindowSize);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetWindowWidth"), &ImGui::GetWindowWidth);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetWindowHeight"), &ImGui::GetWindowHeight);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SetNextWindowPos", "pos", "cond"),
                                &ImGui::SetNextWindowPos,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SetNextWindowPosEx", "pos", "cond", "pivot"),
                                &ImGui::SetNextWindowPosEx,
                                DEFVAL(0),
                                DEFVAL(Vector2(0, 0)));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SetNextWindowSize", "size", "cond"),
                                &ImGui::SetNextWindowSize,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SetNextWindowContentSize", "size"),
                                &ImGui::SetNextWindowContentSize);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SetNextWindowCollapsed", "collapsed", "cond"),
                                &ImGui::SetNextWindowCollapsed,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("SetNextWindowFocus"), &ImGui::SetNextWindowFocus);
    ClassDB::bind_static_method("ImGui", D_METHOD("SetNextWindowScroll", "scroll"), &ImGui::SetNextWindowScroll);
    ClassDB::bind_static_method("ImGui", D_METHOD("SetNextWindowBgAlpha", "alpha"), &ImGui::SetNextWindowBgAlpha);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SetNextWindowViewport", "viewport_id"),
                                &ImGui::SetNextWindowViewport);
    ClassDB::bind_static_method("ImGui", D_METHOD("SetWindowPos", "pos", "cond"), &ImGui::SetWindowPos, DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("SetWindowSize", "size", "cond"), &ImGui::SetWindowSize, DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SetWindowCollapsed", "collapsed", "cond"),
                                &ImGui::SetWindowCollapsed,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("SetWindowFocus"), &ImGui::SetWindowFocus);
    ClassDB::bind_static_method("ImGui", D_METHOD("SetWindowFontScale", "scale"), &ImGui::SetWindowFontScale);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SetWindowPosStr", "name", "pos", "cond"),
                                &ImGui::SetWindowPosStr,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SetWindowSizeStr", "name", "size", "cond"),
                                &ImGui::SetWindowSizeStr,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SetWindowCollapsedStr", "name", "collapsed", "cond"),
                                &ImGui::SetWindowCollapsedStr,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("SetWindowFocusStr", "name"), &ImGui::SetWindowFocusStr);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetScrollX"), &ImGui::GetScrollX);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetScrollY"), &ImGui::GetScrollY);
    ClassDB::bind_static_method("ImGui", D_METHOD("SetScrollX", "scroll_x"), &ImGui::SetScrollX);
    ClassDB::bind_static_method("ImGui", D_METHOD("SetScrollY", "scroll_y"), &ImGui::SetScrollY);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetScrollMaxX"), &ImGui::GetScrollMaxX);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetScrollMaxY"), &ImGui::GetScrollMaxY);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SetScrollHereX", "center_x_ratio"),
                                &ImGui::SetScrollHereX,
                                DEFVAL(0.5f));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SetScrollHereY", "center_y_ratio"),
                                &ImGui::SetScrollHereY,
                                DEFVAL(0.5f));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SetScrollFromPosX", "local_x", "center_x_ratio"),
                                &ImGui::SetScrollFromPosX,
                                DEFVAL(0.5f));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SetScrollFromPosY", "local_y", "center_y_ratio"),
                                &ImGui::SetScrollFromPosY,
                                DEFVAL(0.5f));
    ClassDB::bind_static_method("ImGui", D_METHOD("PushFont", "font"), &ImGui::PushFont);
    ClassDB::bind_static_method("ImGui", D_METHOD("PopFont"), &ImGui::PopFont);
    ClassDB::bind_static_method("ImGui", D_METHOD("PushStyleColor", "idx", "col"), &ImGui::PushStyleColor);
    ClassDB::bind_static_method("ImGui", D_METHOD("PushStyleColorImVec4", "idx", "col"), &ImGui::PushStyleColorImVec4);
    ClassDB::bind_static_method("ImGui", D_METHOD("PopStyleColor"), &ImGui::PopStyleColor);
    ClassDB::bind_static_method("ImGui", D_METHOD("PopStyleColorEx", "count"), &ImGui::PopStyleColorEx, DEFVAL(1));
    ClassDB::bind_static_method("ImGui", D_METHOD("PushStyleVar", "idx", "val"), &ImGui::PushStyleVar);
    ClassDB::bind_static_method("ImGui", D_METHOD("PushStyleVarImVec2", "idx", "val"), &ImGui::PushStyleVarImVec2);
    ClassDB::bind_static_method("ImGui", D_METHOD("PushStyleVarX", "idx", "val_x"), &ImGui::PushStyleVarX);
    ClassDB::bind_static_method("ImGui", D_METHOD("PushStyleVarY", "idx", "val_y"), &ImGui::PushStyleVarY);
    ClassDB::bind_static_method("ImGui", D_METHOD("PopStyleVar"), &ImGui::PopStyleVar);
    ClassDB::bind_static_method("ImGui", D_METHOD("PopStyleVarEx", "count"), &ImGui::PopStyleVarEx, DEFVAL(1));
    ClassDB::bind_static_method("ImGui", D_METHOD("PushItemFlag", "option", "enabled"), &ImGui::PushItemFlag);
    ClassDB::bind_static_method("ImGui", D_METHOD("PopItemFlag"), &ImGui::PopItemFlag);
    ClassDB::bind_static_method("ImGui", D_METHOD("PushItemWidth", "item_width"), &ImGui::PushItemWidth);
    ClassDB::bind_static_method("ImGui", D_METHOD("PopItemWidth"), &ImGui::PopItemWidth);
    ClassDB::bind_static_method("ImGui", D_METHOD("SetNextItemWidth", "item_width"), &ImGui::SetNextItemWidth);
    ClassDB::bind_static_method("ImGui", D_METHOD("CalcItemWidth"), &ImGui::CalcItemWidth);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("PushTextWrapPos", "wrap_local_pos_x"),
                                &ImGui::PushTextWrapPos,
                                DEFVAL(0.0f));
    ClassDB::bind_static_method("ImGui", D_METHOD("PopTextWrapPos"), &ImGui::PopTextWrapPos);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetFont"), &ImGui::GetFont);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetFontSize"), &ImGui::GetFontSize);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetFontTexUvWhitePixel"), &ImGui::GetFontTexUvWhitePixel);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetCursorScreenPos"), &ImGui::GetCursorScreenPos);
    ClassDB::bind_static_method("ImGui", D_METHOD("SetCursorScreenPos", "pos"), &ImGui::SetCursorScreenPos);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetContentRegionAvail"), &ImGui::GetContentRegionAvail);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetCursorPos"), &ImGui::GetCursorPos);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetCursorPosX"), &ImGui::GetCursorPosX);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetCursorPosY"), &ImGui::GetCursorPosY);
    ClassDB::bind_static_method("ImGui", D_METHOD("SetCursorPos", "local_pos"), &ImGui::SetCursorPos);
    ClassDB::bind_static_method("ImGui", D_METHOD("SetCursorPosX", "local_x"), &ImGui::SetCursorPosX);
    ClassDB::bind_static_method("ImGui", D_METHOD("SetCursorPosY", "local_y"), &ImGui::SetCursorPosY);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetCursorStartPos"), &ImGui::GetCursorStartPos);
    ClassDB::bind_static_method("ImGui", D_METHOD("Separator"), &ImGui::Separator);
    ClassDB::bind_static_method("ImGui", D_METHOD("SameLine"), &ImGui::SameLine);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SameLineEx", "offset_from_start_x", "spacing"),
                                &ImGui::SameLineEx,
                                DEFVAL(0.0f),
                                DEFVAL(-1.0f));
    ClassDB::bind_static_method("ImGui", D_METHOD("NewLine"), &ImGui::NewLine);
    ClassDB::bind_static_method("ImGui", D_METHOD("Spacing"), &ImGui::Spacing);
    ClassDB::bind_static_method("ImGui", D_METHOD("Dummy", "size"), &ImGui::Dummy);
    ClassDB::bind_static_method("ImGui", D_METHOD("Indent"), &ImGui::Indent);
    ClassDB::bind_static_method("ImGui", D_METHOD("IndentEx", "indent_w"), &ImGui::IndentEx, DEFVAL(0.0f));
    ClassDB::bind_static_method("ImGui", D_METHOD("Unindent"), &ImGui::Unindent);
    ClassDB::bind_static_method("ImGui", D_METHOD("UnindentEx", "indent_w"), &ImGui::UnindentEx, DEFVAL(0.0f));
    ClassDB::bind_static_method("ImGui", D_METHOD("BeginGroup"), &ImGui::BeginGroup);
    ClassDB::bind_static_method("ImGui", D_METHOD("EndGroup"), &ImGui::EndGroup);
    ClassDB::bind_static_method("ImGui", D_METHOD("AlignTextToFramePadding"), &ImGui::AlignTextToFramePadding);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetTextLineHeight"), &ImGui::GetTextLineHeight);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("GetTextLineHeightWithSpacing"),
                                &ImGui::GetTextLineHeightWithSpacing);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetFrameHeight"), &ImGui::GetFrameHeight);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetFrameHeightWithSpacing"), &ImGui::GetFrameHeightWithSpacing);
    ClassDB::bind_static_method("ImGui", D_METHOD("PushID", "str_id"), &ImGui::PushID);
    ClassDB::bind_static_method("ImGui", D_METHOD("PushIDStr", "str_id_begin", "str_id_end"), &ImGui::PushIDStr);
    ClassDB::bind_static_method("ImGui", D_METHOD("PushIDInt", "int_id"), &ImGui::PushIDInt);
    ClassDB::bind_static_method("ImGui", D_METHOD("PopID"), &ImGui::PopID);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetID", "str_id"), &ImGui::GetID);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetIDInt", "int_id"), &ImGui::GetIDInt);
    ClassDB::bind_static_method("ImGui", D_METHOD("Text", "fmt"), &ImGui::Text);
    ClassDB::bind_static_method("ImGui", D_METHOD("TextColored", "col", "fmt"), &ImGui::TextColored);
    ClassDB::bind_static_method("ImGui", D_METHOD("TextDisabled", "fmt"), &ImGui::TextDisabled);
    ClassDB::bind_static_method("ImGui", D_METHOD("TextWrapped", "fmt"), &ImGui::TextWrapped);
    ClassDB::bind_static_method("ImGui", D_METHOD("LabelText", "label", "fmt"), &ImGui::LabelText);
    ClassDB::bind_static_method("ImGui", D_METHOD("BulletText", "fmt"), &ImGui::BulletText);
    ClassDB::bind_static_method("ImGui", D_METHOD("SeparatorText", "label"), &ImGui::SeparatorText);
    ClassDB::bind_static_method("ImGui", D_METHOD("Button", "label"), &ImGui::Button);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ButtonEx", "label", "size"),
                                &ImGui::ButtonEx,
                                DEFVAL(Vector2(0, 0)));
    ClassDB::bind_static_method("ImGui", D_METHOD("SmallButton", "label"), &ImGui::SmallButton);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("InvisibleButton", "str_id", "size", "flags"),
                                &ImGui::InvisibleButton,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("ArrowButton", "str_id", "dir"), &ImGui::ArrowButton);
    ClassDB::bind_static_method("ImGui", D_METHOD("Checkbox", "label", "v"), &ImGui::Checkbox);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("CheckboxFlagsIntPtr", "label", "flags", "flags_value"),
                                &ImGui::CheckboxFlagsIntPtr);
    ClassDB::bind_static_method("ImGui", D_METHOD("RadioButton", "label", "active"), &ImGui::RadioButton);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("RadioButtonIntPtr", "label", "v", "v_button"),
                                &ImGui::RadioButtonIntPtr);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ProgressBar", "fraction", "size_arg", "overlay"),
                                &ImGui::ProgressBar,
                                DEFVAL(Vector2(-std::numeric_limits<float>::min(), 0)),
                                DEFVAL(String()));
    ClassDB::bind_static_method("ImGui", D_METHOD("Bullet"), &ImGui::Bullet);
    ClassDB::bind_static_method("ImGui", D_METHOD("TextLink", "label"), &ImGui::TextLink);
    ClassDB::bind_static_method("ImGui", D_METHOD("TextLinkOpenURL", "label"), &ImGui::TextLinkOpenURL);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("TextLinkOpenURLEx", "label", "url"),
                                &ImGui::TextLinkOpenURLEx,
                                DEFVAL(String()));
    ClassDB::bind_static_method("ImGui", D_METHOD("Image", "user_texture_id", "image_size"), &ImGui::Image);
    ClassDB::bind_static_method(
        "ImGui",
        D_METHOD("ImageEx", "user_texture_id", "image_size", "uv0", "uv1", "tint_col", "border_col"),
        &ImGui::ImageEx,
        DEFVAL(Vector2(0, 0)),
        DEFVAL(Vector2(1, 1)),
        DEFVAL(Color(1, 1, 1, 1)),
        DEFVAL(Color(0, 0, 0, 0)));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImageButton", "str_id", "user_texture_id", "image_size"),
                                &ImGui::ImageButton);
    ClassDB::bind_static_method(
        "ImGui",
        D_METHOD("ImageButtonEx", "str_id", "user_texture_id", "image_size", "uv0", "uv1", "bg_col", "tint_col"),
        &ImGui::ImageButtonEx,
        DEFVAL(Vector2(0, 0)),
        DEFVAL(Vector2(1, 1)),
        DEFVAL(Color(0, 0, 0, 0)),
        DEFVAL(Color(1, 1, 1, 1)));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("BeginCombo", "label", "preview_value", "flags"),
                                &ImGui::BeginCombo,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("EndCombo"), &ImGui::EndCombo);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ComboChar", "label", "current_item", "items", "items_count"),
                                &ImGui::ComboChar);
    ClassDB::bind_static_method(
        "ImGui",
        D_METHOD("ComboCharEx", "label", "current_item", "items", "items_count", "popup_max_height_in_items"),
        &ImGui::ComboCharEx,
        DEFVAL(-1));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("Combo", "label", "current_item", "items_separated_by_zeros"),
                                &ImGui::Combo);
    ClassDB::bind_static_method(
        "ImGui",
        D_METHOD("ComboEx", "label", "current_item", "items_separated_by_zeros", "popup_max_height_in_items"),
        &ImGui::ComboEx,
        DEFVAL(-1));
    ClassDB::bind_static_method("ImGui", D_METHOD("DragFloat", "label", "v"), &ImGui::DragFloat);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("DragFloatEx", "label", "v", "v_speed", "v_min", "v_max", "format", "flags"),
                                &ImGui::DragFloatEx,
                                DEFVAL(1.0f),
                                DEFVAL(0.0f),
                                DEFVAL(0.0f),
                                DEFVAL("%.3f"),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("DragFloat2", "label", "v"), &ImGui::DragFloat2);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("DragFloat2Ex", "label", "v", "v_speed", "v_min", "v_max", "format", "flags"),
                                &ImGui::DragFloat2Ex,
                                DEFVAL(1.0f),
                                DEFVAL(0.0f),
                                DEFVAL(0.0f),
                                DEFVAL("%.3f"),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("DragFloat3", "label", "v"), &ImGui::DragFloat3);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("DragFloat3Ex", "label", "v", "v_speed", "v_min", "v_max", "format", "flags"),
                                &ImGui::DragFloat3Ex,
                                DEFVAL(1.0f),
                                DEFVAL(0.0f),
                                DEFVAL(0.0f),
                                DEFVAL("%.3f"),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("DragFloat4", "label", "v"), &ImGui::DragFloat4);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("DragFloat4Ex", "label", "v", "v_speed", "v_min", "v_max", "format", "flags"),
                                &ImGui::DragFloat4Ex,
                                DEFVAL(1.0f),
                                DEFVAL(0.0f),
                                DEFVAL(0.0f),
                                DEFVAL("%.3f"),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("DragFloatRange2", "label", "v_current_min", "v_current_max"),
                                &ImGui::DragFloatRange2);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("DragFloatRange2Ex",
                                         "label",
                                         "v_current_min",
                                         "v_current_max",
                                         "v_speed",
                                         "v_min",
                                         "v_max",
                                         "format",
                                         "format_max",
                                         "flags"),
                                &ImGui::DragFloatRange2Ex,
                                DEFVAL(1.0f),
                                DEFVAL(0.0f),
                                DEFVAL(0.0f),
                                DEFVAL("%.3f"),
                                DEFVAL(String()),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("DragInt", "label", "v"), &ImGui::DragInt);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("DragIntEx", "label", "v", "v_speed", "v_min", "v_max", "format", "flags"),
                                &ImGui::DragIntEx,
                                DEFVAL(1.0f),
                                DEFVAL(0),
                                DEFVAL(0),
                                DEFVAL("%d"),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("DragInt2", "label", "v"), &ImGui::DragInt2);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("DragInt2Ex", "label", "v", "v_speed", "v_min", "v_max", "format", "flags"),
                                &ImGui::DragInt2Ex,
                                DEFVAL(1.0f),
                                DEFVAL(0),
                                DEFVAL(0),
                                DEFVAL("%d"),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("DragInt3", "label", "v"), &ImGui::DragInt3);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("DragInt3Ex", "label", "v", "v_speed", "v_min", "v_max", "format", "flags"),
                                &ImGui::DragInt3Ex,
                                DEFVAL(1.0f),
                                DEFVAL(0),
                                DEFVAL(0),
                                DEFVAL("%d"),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("DragInt4", "label", "v"), &ImGui::DragInt4);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("DragInt4Ex", "label", "v", "v_speed", "v_min", "v_max", "format", "flags"),
                                &ImGui::DragInt4Ex,
                                DEFVAL(1.0f),
                                DEFVAL(0),
                                DEFVAL(0),
                                DEFVAL("%d"),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("DragIntRange2", "label", "v_current_min", "v_current_max"),
                                &ImGui::DragIntRange2);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("DragIntRange2Ex",
                                         "label",
                                         "v_current_min",
                                         "v_current_max",
                                         "v_speed",
                                         "v_min",
                                         "v_max",
                                         "format",
                                         "format_max",
                                         "flags"),
                                &ImGui::DragIntRange2Ex,
                                DEFVAL(1.0f),
                                DEFVAL(0),
                                DEFVAL(0),
                                DEFVAL("%d"),
                                DEFVAL(String()),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("SliderFloat", "label", "v", "v_min", "v_max"), &ImGui::SliderFloat);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SliderFloatEx", "label", "v", "v_min", "v_max", "format", "flags"),
                                &ImGui::SliderFloatEx,
                                DEFVAL("%.3f"),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SliderFloat2", "label", "v", "v_min", "v_max"),
                                &ImGui::SliderFloat2);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SliderFloat2Ex", "label", "v", "v_min", "v_max", "format", "flags"),
                                &ImGui::SliderFloat2Ex,
                                DEFVAL("%.3f"),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SliderFloat3", "label", "v", "v_min", "v_max"),
                                &ImGui::SliderFloat3);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SliderFloat3Ex", "label", "v", "v_min", "v_max", "format", "flags"),
                                &ImGui::SliderFloat3Ex,
                                DEFVAL("%.3f"),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SliderFloat4", "label", "v", "v_min", "v_max"),
                                &ImGui::SliderFloat4);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SliderFloat4Ex", "label", "v", "v_min", "v_max", "format", "flags"),
                                &ImGui::SliderFloat4Ex,
                                DEFVAL("%.3f"),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("SliderAngle", "label", "v_rad"), &ImGui::SliderAngle);
    ClassDB::bind_static_method(
        "ImGui",
        D_METHOD("SliderAngleEx", "label", "v_rad", "v_degrees_min", "v_degrees_max", "format", "flags"),
        &ImGui::SliderAngleEx,
        DEFVAL(-360.0f),
        DEFVAL(+360.0f),
        DEFVAL("%.0f deg"),
        DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("SliderInt", "label", "v", "v_min", "v_max"), &ImGui::SliderInt);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SliderIntEx", "label", "v", "v_min", "v_max", "format", "flags"),
                                &ImGui::SliderIntEx,
                                DEFVAL("%d"),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("SliderInt2", "label", "v", "v_min", "v_max"), &ImGui::SliderInt2);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SliderInt2Ex", "label", "v", "v_min", "v_max", "format", "flags"),
                                &ImGui::SliderInt2Ex,
                                DEFVAL("%d"),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("SliderInt3", "label", "v", "v_min", "v_max"), &ImGui::SliderInt3);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SliderInt3Ex", "label", "v", "v_min", "v_max", "format", "flags"),
                                &ImGui::SliderInt3Ex,
                                DEFVAL("%d"),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("SliderInt4", "label", "v", "v_min", "v_max"), &ImGui::SliderInt4);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SliderInt4Ex", "label", "v", "v_min", "v_max", "format", "flags"),
                                &ImGui::SliderInt4Ex,
                                DEFVAL("%d"),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("VSliderFloat", "label", "size", "v", "v_min", "v_max"),
                                &ImGui::VSliderFloat);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("VSliderFloatEx", "label", "size", "v", "v_min", "v_max", "format", "flags"),
                                &ImGui::VSliderFloatEx,
                                DEFVAL("%.3f"),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("VSliderInt", "label", "size", "v", "v_min", "v_max"),
                                &ImGui::VSliderInt);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("VSliderIntEx", "label", "size", "v", "v_min", "v_max", "format", "flags"),
                                &ImGui::VSliderIntEx,
                                DEFVAL("%d"),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("InputText", "label", "buf", "buf_size", "flags"),
                                &ImGui::InputText,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("InputTextMultiline", "label", "buf", "buf_size"),
                                &ImGui::InputTextMultiline);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("InputTextWithHint", "label", "hint", "buf", "buf_size", "flags"),
                                &ImGui::InputTextWithHint,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("InputFloat", "label", "v"), &ImGui::InputFloat);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("InputFloatEx", "label", "v", "step", "step_fast", "format", "flags"),
                                &ImGui::InputFloatEx,
                                DEFVAL(0.0f),
                                DEFVAL(0.0f),
                                DEFVAL("%.3f"),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("InputFloat2", "label", "v"), &ImGui::InputFloat2);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("InputFloat2Ex", "label", "v", "format", "flags"),
                                &ImGui::InputFloat2Ex,
                                DEFVAL("%.3f"),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("InputFloat3", "label", "v"), &ImGui::InputFloat3);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("InputFloat3Ex", "label", "v", "format", "flags"),
                                &ImGui::InputFloat3Ex,
                                DEFVAL("%.3f"),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("InputFloat4", "label", "v"), &ImGui::InputFloat4);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("InputFloat4Ex", "label", "v", "format", "flags"),
                                &ImGui::InputFloat4Ex,
                                DEFVAL("%.3f"),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("InputInt", "label", "v"), &ImGui::InputInt);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("InputIntEx", "label", "v", "step", "step_fast", "flags"),
                                &ImGui::InputIntEx,
                                DEFVAL(1),
                                DEFVAL(100),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("InputInt2", "label", "v", "flags"), &ImGui::InputInt2, DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("InputInt3", "label", "v", "flags"), &ImGui::InputInt3, DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("InputInt4", "label", "v", "flags"), &ImGui::InputInt4, DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("InputDouble", "label", "v"), &ImGui::InputDouble);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("InputDoubleEx", "label", "v", "step", "step_fast", "format", "flags"),
                                &ImGui::InputDoubleEx,
                                DEFVAL(0.0),
                                DEFVAL(0.0),
                                DEFVAL("%.6f"),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ColorEdit3", "label", "col", "flags"),
                                &ImGui::ColorEdit3,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ColorEdit4", "label", "col", "flags"),
                                &ImGui::ColorEdit4,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ColorPicker3", "label", "col", "flags"),
                                &ImGui::ColorPicker3,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ColorPicker4", "label", "col", "flags", "ref_col"),
                                &ImGui::ColorPicker4,
                                DEFVAL(0),
                                DEFVAL(Array()));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ColorButton", "desc_id", "col", "flags"),
                                &ImGui::ColorButton,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ColorButtonEx", "desc_id", "col", "flags", "size"),
                                &ImGui::ColorButtonEx,
                                DEFVAL(0),
                                DEFVAL(Vector2(0, 0)));
    ClassDB::bind_static_method("ImGui", D_METHOD("SetColorEditOptions", "flags"), &ImGui::SetColorEditOptions);
    ClassDB::bind_static_method("ImGui", D_METHOD("TreeNode", "label"), &ImGui::TreeNode);
    ClassDB::bind_static_method("ImGui", D_METHOD("TreeNodeStr", "str_id", "fmt"), &ImGui::TreeNodeStr);
    ClassDB::bind_static_method("ImGui", D_METHOD("TreeNodeEx", "label", "flags"), &ImGui::TreeNodeEx, DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("TreeNodeExStr", "str_id", "flags", "fmt"), &ImGui::TreeNodeExStr);
    ClassDB::bind_static_method("ImGui", D_METHOD("TreePush", "str_id"), &ImGui::TreePush);
    ClassDB::bind_static_method("ImGui", D_METHOD("TreePop"), &ImGui::TreePop);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetTreeNodeToLabelSpacing"), &ImGui::GetTreeNodeToLabelSpacing);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("CollapsingHeader", "label", "flags"),
                                &ImGui::CollapsingHeader,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("CollapsingHeaderBoolPtr", "label", "p_visible", "flags"),
                                &ImGui::CollapsingHeaderBoolPtr,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SetNextItemOpen", "is_open", "cond"),
                                &ImGui::SetNextItemOpen,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("SetNextItemStorageID", "storage_id"), &ImGui::SetNextItemStorageID);
    ClassDB::bind_static_method("ImGui", D_METHOD("Selectable", "label"), &ImGui::Selectable);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SelectableEx", "label", "selected", "flags", "size"),
                                &ImGui::SelectableEx,
                                DEFVAL(false),
                                DEFVAL(0),
                                DEFVAL(Vector2(0, 0)));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SelectableBoolPtr", "label", "p_selected", "flags"),
                                &ImGui::SelectableBoolPtr,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SelectableBoolPtrEx", "label", "p_selected", "flags", "size"),
                                &ImGui::SelectableBoolPtrEx,
                                DEFVAL(0),
                                DEFVAL(Vector2(0, 0)));
    ClassDB::bind_static_method("ImGui", D_METHOD("BeginMultiSelect", "flags"), &ImGui::BeginMultiSelect);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("BeginMultiSelectEx", "flags", "selection_size", "items_count"),
                                &ImGui::BeginMultiSelectEx,
                                DEFVAL(-1),
                                DEFVAL(-1));
    ClassDB::bind_static_method("ImGui", D_METHOD("EndMultiSelect"), &ImGui::EndMultiSelect);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SetNextItemSelectionUserData", "selection_user_data"),
                                &ImGui::SetNextItemSelectionUserData);
    ClassDB::bind_static_method("ImGui", D_METHOD("IsItemToggledSelection"), &ImGui::IsItemToggledSelection);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("BeginListBox", "label", "size"),
                                &ImGui::BeginListBox,
                                DEFVAL(Vector2(0, 0)));
    ClassDB::bind_static_method("ImGui", D_METHOD("EndListBox"), &ImGui::EndListBox);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ListBox", "label", "current_item", "items", "items_count", "height_in_items"),
                                &ImGui::ListBox,
                                DEFVAL(-1));
    ClassDB::bind_static_method("ImGui", D_METHOD("PlotLines", "label", "values", "values_count"), &ImGui::PlotLines);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("PlotLinesEx",
                                         "label",
                                         "values",
                                         "values_count",
                                         "values_offset",
                                         "overlay_text",
                                         "scale_min",
                                         "scale_max",
                                         "graph_size",
                                         "stride"),
                                &ImGui::PlotLinesEx,
                                DEFVAL(0),
                                DEFVAL(String()),
                                DEFVAL(std::numeric_limits<float>::max()),
                                DEFVAL(std::numeric_limits<float>::max()),
                                DEFVAL(Vector2(0, 0)),
                                DEFVAL((uint64_t)sizeof(float)));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("PlotHistogram", "label", "values", "values_count"),
                                &ImGui::PlotHistogram);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("PlotHistogramEx",
                                         "label",
                                         "values",
                                         "values_count",
                                         "values_offset",
                                         "overlay_text",
                                         "scale_min",
                                         "scale_max",
                                         "graph_size",
                                         "stride"),
                                &ImGui::PlotHistogramEx,
                                DEFVAL(0),
                                DEFVAL(String()),
                                DEFVAL(std::numeric_limits<float>::max()),
                                DEFVAL(std::numeric_limits<float>::max()),
                                DEFVAL(Vector2(0, 0)),
                                DEFVAL((uint64_t)sizeof(float)));
    ClassDB::bind_static_method("ImGui", D_METHOD("BeginMenuBar"), &ImGui::BeginMenuBar);
    ClassDB::bind_static_method("ImGui", D_METHOD("EndMenuBar"), &ImGui::EndMenuBar);
    ClassDB::bind_static_method("ImGui", D_METHOD("BeginMainMenuBar"), &ImGui::BeginMainMenuBar);
    ClassDB::bind_static_method("ImGui", D_METHOD("EndMainMenuBar"), &ImGui::EndMainMenuBar);
    ClassDB::bind_static_method("ImGui", D_METHOD("BeginMenu", "label"), &ImGui::BeginMenu);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("BeginMenuEx", "label", "enabled"),
                                &ImGui::BeginMenuEx,
                                DEFVAL(true));
    ClassDB::bind_static_method("ImGui", D_METHOD("EndMenu"), &ImGui::EndMenu);
    ClassDB::bind_static_method("ImGui", D_METHOD("MenuItem", "label"), &ImGui::MenuItem);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("MenuItemEx", "label", "shortcut", "selected", "enabled"),
                                &ImGui::MenuItemEx,
                                DEFVAL(String()),
                                DEFVAL(false),
                                DEFVAL(true));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("MenuItemBoolPtr", "label", "shortcut", "p_selected", "enabled"),
                                &ImGui::MenuItemBoolPtr,
                                DEFVAL(true));
    ClassDB::bind_static_method("ImGui", D_METHOD("BeginTooltip"), &ImGui::BeginTooltip);
    ClassDB::bind_static_method("ImGui", D_METHOD("EndTooltip"), &ImGui::EndTooltip);
    ClassDB::bind_static_method("ImGui", D_METHOD("SetTooltip", "fmt"), &ImGui::SetTooltip);
    ClassDB::bind_static_method("ImGui", D_METHOD("BeginItemTooltip"), &ImGui::BeginItemTooltip);
    ClassDB::bind_static_method("ImGui", D_METHOD("SetItemTooltip", "fmt"), &ImGui::SetItemTooltip);
    ClassDB::bind_static_method("ImGui", D_METHOD("BeginPopup", "str_id", "flags"), &ImGui::BeginPopup, DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("BeginPopupModal", "name", "p_open", "flags"),
                                &ImGui::BeginPopupModal,
                                DEFVAL(Array()),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("EndPopup"), &ImGui::EndPopup);
    ClassDB::bind_static_method("ImGui", D_METHOD("OpenPopup", "str_id", "popup_flags"), &ImGui::OpenPopup, DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("OpenPopupID", "id", "popup_flags"), &ImGui::OpenPopupID, DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("OpenPopupOnItemClick", "str_id", "popup_flags"),
                                &ImGui::OpenPopupOnItemClick,
                                DEFVAL(StringName()),
                                DEFVAL(1));
    ClassDB::bind_static_method("ImGui", D_METHOD("CloseCurrentPopup"), &ImGui::CloseCurrentPopup);
    ClassDB::bind_static_method("ImGui", D_METHOD("BeginPopupContextItem"), &ImGui::BeginPopupContextItem);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("BeginPopupContextItemEx", "str_id", "popup_flags"),
                                &ImGui::BeginPopupContextItemEx,
                                DEFVAL(StringName()),
                                DEFVAL(1));
    ClassDB::bind_static_method("ImGui", D_METHOD("BeginPopupContextWindow"), &ImGui::BeginPopupContextWindow);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("BeginPopupContextWindowEx", "str_id", "popup_flags"),
                                &ImGui::BeginPopupContextWindowEx,
                                DEFVAL(StringName()),
                                DEFVAL(1));
    ClassDB::bind_static_method("ImGui", D_METHOD("BeginPopupContextVoid"), &ImGui::BeginPopupContextVoid);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("BeginPopupContextVoidEx", "str_id", "popup_flags"),
                                &ImGui::BeginPopupContextVoidEx,
                                DEFVAL(StringName()),
                                DEFVAL(1));
    ClassDB::bind_static_method("ImGui", D_METHOD("IsPopupOpen", "str_id", "flags"), &ImGui::IsPopupOpen, DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("BeginTable", "str_id", "columns", "flags"),
                                &ImGui::BeginTable,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("BeginTableEx", "str_id", "columns", "flags", "outer_size", "inner_width"),
                                &ImGui::BeginTableEx,
                                DEFVAL(0),
                                DEFVAL(Vector2(0.0f, 0.0f)),
                                DEFVAL(0.0f));
    ClassDB::bind_static_method("ImGui", D_METHOD("EndTable"), &ImGui::EndTable);
    ClassDB::bind_static_method("ImGui", D_METHOD("TableNextRow"), &ImGui::TableNextRow);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("TableNextRowEx", "row_flags", "min_row_height"),
                                &ImGui::TableNextRowEx,
                                DEFVAL(0),
                                DEFVAL(0.0f));
    ClassDB::bind_static_method("ImGui", D_METHOD("TableNextColumn"), &ImGui::TableNextColumn);
    ClassDB::bind_static_method("ImGui", D_METHOD("TableSetColumnIndex", "column_n"), &ImGui::TableSetColumnIndex);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("TableSetupColumn", "label", "flags"),
                                &ImGui::TableSetupColumn,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("TableSetupColumnEx", "label", "flags", "init_width_or_weight", "user_id"),
                                &ImGui::TableSetupColumnEx,
                                DEFVAL(0),
                                DEFVAL(0.0f),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("TableSetupScrollFreeze", "cols", "rows"),
                                &ImGui::TableSetupScrollFreeze);
    ClassDB::bind_static_method("ImGui", D_METHOD("TableHeader", "label"), &ImGui::TableHeader);
    ClassDB::bind_static_method("ImGui", D_METHOD("TableHeadersRow"), &ImGui::TableHeadersRow);
    ClassDB::bind_static_method("ImGui", D_METHOD("TableAngledHeadersRow"), &ImGui::TableAngledHeadersRow);
    ClassDB::bind_static_method("ImGui", D_METHOD("TableGetSortSpecs"), &ImGui::TableGetSortSpecs);
    ClassDB::bind_static_method("ImGui", D_METHOD("TableGetColumnCount"), &ImGui::TableGetColumnCount);
    ClassDB::bind_static_method("ImGui", D_METHOD("TableGetColumnIndex"), &ImGui::TableGetColumnIndex);
    ClassDB::bind_static_method("ImGui", D_METHOD("TableGetRowIndex"), &ImGui::TableGetRowIndex);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("TableGetColumnName", "column_n"),
                                &ImGui::TableGetColumnName,
                                DEFVAL(-1));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("TableGetColumnFlags", "column_n"),
                                &ImGui::TableGetColumnFlags,
                                DEFVAL(-1));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("TableSetColumnEnabled", "column_n", "v"),
                                &ImGui::TableSetColumnEnabled);
    ClassDB::bind_static_method("ImGui", D_METHOD("TableGetHoveredColumn"), &ImGui::TableGetHoveredColumn);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("TableSetBgColor", "target", "color", "column_n"),
                                &ImGui::TableSetBgColor,
                                DEFVAL(-1));
    ClassDB::bind_static_method("ImGui", D_METHOD("Columns"), &ImGui::Columns);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ColumnsEx", "count", "id", "borders"),
                                &ImGui::ColumnsEx,
                                DEFVAL(1),
                                DEFVAL(StringName()),
                                DEFVAL(true));
    ClassDB::bind_static_method("ImGui", D_METHOD("NextColumn"), &ImGui::NextColumn);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetColumnIndex"), &ImGui::GetColumnIndex);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("GetColumnWidth", "column_index"),
                                &ImGui::GetColumnWidth,
                                DEFVAL(-1));
    ClassDB::bind_static_method("ImGui", D_METHOD("SetColumnWidth", "column_index", "width"), &ImGui::SetColumnWidth);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("GetColumnOffset", "column_index"),
                                &ImGui::GetColumnOffset,
                                DEFVAL(-1));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SetColumnOffset", "column_index", "offset_x"),
                                &ImGui::SetColumnOffset);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetColumnsCount"), &ImGui::GetColumnsCount);
    ClassDB::bind_static_method("ImGui", D_METHOD("BeginTabBar", "str_id", "flags"), &ImGui::BeginTabBar, DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("EndTabBar"), &ImGui::EndTabBar);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("BeginTabItem", "label", "p_open", "flags"),
                                &ImGui::BeginTabItem,
                                DEFVAL(Array()),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("EndTabItem"), &ImGui::EndTabItem);
    ClassDB::bind_static_method("ImGui", D_METHOD("TabItemButton", "label", "flags"), &ImGui::TabItemButton, DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SetTabItemClosed", "tab_or_docked_window_label"),
                                &ImGui::SetTabItemClosed);
    ClassDB::bind_static_method("ImGui", D_METHOD("DockSpace", "dockspace_id"), &ImGui::DockSpace);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("DockSpaceEx", "dockspace_id", "size", "flags", "window_class"),
                                &ImGui::DockSpaceEx,
                                DEFVAL(Vector2(0, 0)),
                                DEFVAL(0),
                                DEFVAL(Ref<ImGuiWindowClassPtr>()));
    ClassDB::bind_static_method("ImGui", D_METHOD("DockSpaceOverViewport"), &ImGui::DockSpaceOverViewport);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SetNextWindowDockID", "dock_id", "cond"),
                                &ImGui::SetNextWindowDockID,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("SetNextWindowClass", "window_class"), &ImGui::SetNextWindowClass);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetWindowDockID"), &ImGui::GetWindowDockID);
    ClassDB::bind_static_method("ImGui", D_METHOD("IsWindowDocked"), &ImGui::IsWindowDocked);
    ClassDB::bind_static_method("ImGui", D_METHOD("LogToTTY", "auto_open_depth"), &ImGui::LogToTTY, DEFVAL(-1));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("LogToFile", "auto_open_depth", "filename"),
                                &ImGui::LogToFile,
                                DEFVAL(-1),
                                DEFVAL(String()));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("LogToClipboard", "auto_open_depth"),
                                &ImGui::LogToClipboard,
                                DEFVAL(-1));
    ClassDB::bind_static_method("ImGui", D_METHOD("LogFinish"), &ImGui::LogFinish);
    ClassDB::bind_static_method("ImGui", D_METHOD("LogButtons"), &ImGui::LogButtons);
    ClassDB::bind_static_method("ImGui", D_METHOD("LogText", "fmt"), &ImGui::LogText);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("BeginDragDropSource", "flags"),
                                &ImGui::BeginDragDropSource,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("EndDragDropSource"), &ImGui::EndDragDropSource);
    ClassDB::bind_static_method("ImGui", D_METHOD("BeginDragDropTarget"), &ImGui::BeginDragDropTarget);
    ClassDB::bind_static_method("ImGui", D_METHOD("EndDragDropTarget"), &ImGui::EndDragDropTarget);
    ClassDB::bind_static_method("ImGui", D_METHOD("BeginDisabled", "disabled"), &ImGui::BeginDisabled, DEFVAL(true));
    ClassDB::bind_static_method("ImGui", D_METHOD("EndDisabled"), &ImGui::EndDisabled);
    ClassDB::bind_static_method(
        "ImGui",
        D_METHOD("PushClipRect", "clip_rect_min", "clip_rect_max", "intersect_with_current_clip_rect"),
        &ImGui::PushClipRect);
    ClassDB::bind_static_method("ImGui", D_METHOD("PopClipRect"), &ImGui::PopClipRect);
    ClassDB::bind_static_method("ImGui", D_METHOD("SetItemDefaultFocus"), &ImGui::SetItemDefaultFocus);
    ClassDB::bind_static_method("ImGui", D_METHOD("SetKeyboardFocusHere"), &ImGui::SetKeyboardFocusHere);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SetKeyboardFocusHereEx", "offset"),
                                &ImGui::SetKeyboardFocusHereEx,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("SetNavCursorVisible", "visible"), &ImGui::SetNavCursorVisible);
    ClassDB::bind_static_method("ImGui", D_METHOD("SetNextItemAllowOverlap"), &ImGui::SetNextItemAllowOverlap);
    ClassDB::bind_static_method("ImGui", D_METHOD("IsItemHovered", "flags"), &ImGui::IsItemHovered, DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("IsItemActive"), &ImGui::IsItemActive);
    ClassDB::bind_static_method("ImGui", D_METHOD("IsItemFocused"), &ImGui::IsItemFocused);
    ClassDB::bind_static_method("ImGui", D_METHOD("IsItemClicked"), &ImGui::IsItemClicked);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("IsItemClickedEx", "mouse_button"),
                                &ImGui::IsItemClickedEx,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("IsItemVisible"), &ImGui::IsItemVisible);
    ClassDB::bind_static_method("ImGui", D_METHOD("IsItemEdited"), &ImGui::IsItemEdited);
    ClassDB::bind_static_method("ImGui", D_METHOD("IsItemActivated"), &ImGui::IsItemActivated);
    ClassDB::bind_static_method("ImGui", D_METHOD("IsItemDeactivated"), &ImGui::IsItemDeactivated);
    ClassDB::bind_static_method("ImGui", D_METHOD("IsItemDeactivatedAfterEdit"), &ImGui::IsItemDeactivatedAfterEdit);
    ClassDB::bind_static_method("ImGui", D_METHOD("IsItemToggledOpen"), &ImGui::IsItemToggledOpen);
    ClassDB::bind_static_method("ImGui", D_METHOD("IsAnyItemHovered"), &ImGui::IsAnyItemHovered);
    ClassDB::bind_static_method("ImGui", D_METHOD("IsAnyItemActive"), &ImGui::IsAnyItemActive);
    ClassDB::bind_static_method("ImGui", D_METHOD("IsAnyItemFocused"), &ImGui::IsAnyItemFocused);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetItemID"), &ImGui::GetItemID);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetItemRectMin"), &ImGui::GetItemRectMin);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetItemRectMax"), &ImGui::GetItemRectMax);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetItemRectSize"), &ImGui::GetItemRectSize);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetBackgroundDrawList"), &ImGui::GetBackgroundDrawList);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetForegroundDrawList"), &ImGui::GetForegroundDrawList);
    ClassDB::bind_static_method("ImGui", D_METHOD("IsRectVisibleBySize", "size"), &ImGui::IsRectVisibleBySize);
    ClassDB::bind_static_method("ImGui", D_METHOD("IsRectVisible", "rect_min", "rect_max"), &ImGui::IsRectVisible);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetTime"), &ImGui::GetTime);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetFrameCount"), &ImGui::GetFrameCount);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetStyleColorName", "idx"), &ImGui::GetStyleColorName);
    ClassDB::bind_static_method("ImGui", D_METHOD("CalcTextSize", "text"), &ImGui::CalcTextSize);
    ClassDB::bind_static_method(
        "ImGui",
        D_METHOD("CalcTextSizeEx", "text", "text_end", "hide_text_after_double_hash", "wrap_width"),
        &ImGui::CalcTextSizeEx,
        DEFVAL(String()),
        DEFVAL(false),
        DEFVAL(-1.0f));
    ClassDB::bind_static_method("ImGui", D_METHOD("IsKeyDown", "key"), &ImGui::IsKeyDown);
    ClassDB::bind_static_method("ImGui", D_METHOD("IsKeyPressed", "key"), &ImGui::IsKeyPressed);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("IsKeyPressedEx", "key", "repeat"),
                                &ImGui::IsKeyPressedEx,
                                DEFVAL(true));
    ClassDB::bind_static_method("ImGui", D_METHOD("IsKeyReleased", "key"), &ImGui::IsKeyReleased);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("GetKeyPressedAmount", "key", "repeat_delay", "rate"),
                                &ImGui::GetKeyPressedAmount);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetKeyName", "key"), &ImGui::GetKeyName);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SetNextFrameWantCaptureKeyboard", "want_capture_keyboard"),
                                &ImGui::SetNextFrameWantCaptureKeyboard);
    ClassDB::bind_static_method("ImGui", D_METHOD("SetItemKeyOwner", "key"), &ImGui::SetItemKeyOwner);
    ClassDB::bind_static_method("ImGui", D_METHOD("IsMouseDown", "button"), &ImGui::IsMouseDown);
    ClassDB::bind_static_method("ImGui", D_METHOD("IsMouseClicked", "button"), &ImGui::IsMouseClicked);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("IsMouseClickedEx", "button", "repeat"),
                                &ImGui::IsMouseClickedEx,
                                DEFVAL(false));
    ClassDB::bind_static_method("ImGui", D_METHOD("IsMouseReleased", "button"), &ImGui::IsMouseReleased);
    ClassDB::bind_static_method("ImGui", D_METHOD("IsMouseDoubleClicked", "button"), &ImGui::IsMouseDoubleClicked);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetMouseClickedCount", "button"), &ImGui::GetMouseClickedCount);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("IsMouseHoveringRect", "r_min", "r_max"),
                                &ImGui::IsMouseHoveringRect);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("IsMouseHoveringRectEx", "r_min", "r_max", "clip"),
                                &ImGui::IsMouseHoveringRectEx,
                                DEFVAL(true));
    ClassDB::bind_static_method("ImGui", D_METHOD("IsAnyMouseDown"), &ImGui::IsAnyMouseDown);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetMousePos"), &ImGui::GetMousePos);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("GetMousePosOnOpeningCurrentPopup"),
                                &ImGui::GetMousePosOnOpeningCurrentPopup);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("IsMouseDragging", "button", "lock_threshold"),
                                &ImGui::IsMouseDragging,
                                DEFVAL(-1.0f));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("GetMouseDragDelta", "button", "lock_threshold"),
                                &ImGui::GetMouseDragDelta,
                                DEFVAL(0),
                                DEFVAL(-1.0f));
    ClassDB::bind_static_method("ImGui", D_METHOD("ResetMouseDragDelta"), &ImGui::ResetMouseDragDelta);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ResetMouseDragDeltaEx", "button"),
                                &ImGui::ResetMouseDragDeltaEx,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("GetMouseCursor"), &ImGui::GetMouseCursor);
    ClassDB::bind_static_method("ImGui", D_METHOD("SetMouseCursor", "cursor_type"), &ImGui::SetMouseCursor);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SetNextFrameWantCaptureMouse", "want_capture_mouse"),
                                &ImGui::SetNextFrameWantCaptureMouse);
    ClassDB::bind_static_method("ImGui", D_METHOD("GetClipboardText"), &ImGui::GetClipboardText);
    ClassDB::bind_static_method("ImGui", D_METHOD("SetClipboardText", "text"), &ImGui::SetClipboardText);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("LoadIniSettingsFromDisk", "ini_filename"),
                                &ImGui::LoadIniSettingsFromDisk);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("LoadIniSettingsFromMemory", "ini_data", "ini_size"),
                                &ImGui::LoadIniSettingsFromMemory,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("SaveIniSettingsToDisk", "ini_filename"),
                                &ImGui::SaveIniSettingsToDisk);
    ClassDB::bind_static_method("ImGui", D_METHOD("DebugTextEncoding", "text"), &ImGui::DebugTextEncoding);
    ClassDB::bind_static_method("ImGui", D_METHOD("DebugFlashStyleColor", "idx"), &ImGui::DebugFlashStyleColor);
    ClassDB::bind_static_method("ImGui", D_METHOD("DebugStartItemPicker"), &ImGui::DebugStartItemPicker);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("DebugCheckVersionAndDataLayout",
                                         "version_str",
                                         "sz_io",
                                         "sz_style",
                                         "sz_vec2",
                                         "sz_vec4",
                                         "sz_drawvert",
                                         "sz_drawidx"),
                                &ImGui::DebugCheckVersionAndDataLayout);
    ClassDB::bind_static_method("ImGui", D_METHOD("DebugLog", "fmt"), &ImGui::DebugLog);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImGuiStyle_ScaleAllSizes", "self", "scale_factor"),
                                &ImGui::ImGuiStyle_ScaleAllSizes);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImGuiListClipper_Begin", "self", "items_count", "items_height"),
                                &ImGui::ImGuiListClipper_Begin,
                                DEFVAL(-1.0f));
    ClassDB::bind_static_method("ImGui", D_METHOD("ImGuiListClipper_End", "self"), &ImGui::ImGuiListClipper_End);
    ClassDB::bind_static_method("ImGui", D_METHOD("ImGuiListClipper_Step", "self"), &ImGui::ImGuiListClipper_Step);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImGuiListClipper_IncludeItemByIndex", "self", "item_index"),
                                &ImGui::ImGuiListClipper_IncludeItemByIndex);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImGuiListClipper_IncludeItemsByIndex", "self", "item_begin", "item_end"),
                                &ImGui::ImGuiListClipper_IncludeItemsByIndex);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImGuiListClipper_SeekCursorForItem", "self", "item_index"),
                                &ImGui::ImGuiListClipper_SeekCursorForItem);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_PushClipRect",
                                         "self",
                                         "clip_rect_min",
                                         "clip_rect_max",
                                         "intersect_with_current_clip_rect"),
                                &ImGui::ImDrawList_PushClipRect,
                                DEFVAL(false));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_PushClipRectFullScreen", "self"),
                                &ImGui::ImDrawList_PushClipRectFullScreen);
    ClassDB::bind_static_method("ImGui", D_METHOD("ImDrawList_PopClipRect", "self"), &ImGui::ImDrawList_PopClipRect);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_PushTextureID", "self", "texture_id"),
                                &ImGui::ImDrawList_PushTextureID);
    ClassDB::bind_static_method("ImGui", D_METHOD("ImDrawList_PopTextureID", "self"), &ImGui::ImDrawList_PopTextureID);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_AddLine", "self", "p1", "p2", "col"),
                                &ImGui::ImDrawList_AddLine);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_AddLineEx", "self", "p1", "p2", "col", "thickness"),
                                &ImGui::ImDrawList_AddLineEx,
                                DEFVAL(1.0f));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_AddRect", "self", "p_min", "p_max", "col"),
                                &ImGui::ImDrawList_AddRect);
    ClassDB::bind_static_method(
        "ImGui",
        D_METHOD("ImDrawList_AddRectEx", "self", "p_min", "p_max", "col", "rounding", "flags", "thickness"),
        &ImGui::ImDrawList_AddRectEx,
        DEFVAL(0.0f),
        DEFVAL(0),
        DEFVAL(1.0f));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_AddRectFilled", "self", "p_min", "p_max", "col"),
                                &ImGui::ImDrawList_AddRectFilled);
    ClassDB::bind_static_method(
        "ImGui",
        D_METHOD("ImDrawList_AddRectFilledEx", "self", "p_min", "p_max", "col", "rounding", "flags"),
        &ImGui::ImDrawList_AddRectFilledEx,
        DEFVAL(0.0f),
        DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_AddRectFilledMultiColor",
                                         "self",
                                         "p_min",
                                         "p_max",
                                         "col_upr_left",
                                         "col_upr_right",
                                         "col_bot_right",
                                         "col_bot_left"),
                                &ImGui::ImDrawList_AddRectFilledMultiColor);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_AddQuad", "self", "p1", "p2", "p3", "p4", "col"),
                                &ImGui::ImDrawList_AddQuad);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_AddQuadEx", "self", "p1", "p2", "p3", "p4", "col", "thickness"),
                                &ImGui::ImDrawList_AddQuadEx,
                                DEFVAL(1.0f));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_AddQuadFilled", "self", "p1", "p2", "p3", "p4", "col"),
                                &ImGui::ImDrawList_AddQuadFilled);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_AddTriangle", "self", "p1", "p2", "p3", "col"),
                                &ImGui::ImDrawList_AddTriangle);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_AddTriangleEx", "self", "p1", "p2", "p3", "col", "thickness"),
                                &ImGui::ImDrawList_AddTriangleEx,
                                DEFVAL(1.0f));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_AddTriangleFilled", "self", "p1", "p2", "p3", "col"),
                                &ImGui::ImDrawList_AddTriangleFilled);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_AddCircle", "self", "center", "radius", "col"),
                                &ImGui::ImDrawList_AddCircle);
    ClassDB::bind_static_method(
        "ImGui",
        D_METHOD("ImDrawList_AddCircleEx", "self", "center", "radius", "col", "num_segments", "thickness"),
        &ImGui::ImDrawList_AddCircleEx,
        DEFVAL(0),
        DEFVAL(1.0f));
    ClassDB::bind_static_method(
        "ImGui",
        D_METHOD("ImDrawList_AddCircleFilled", "self", "center", "radius", "col", "num_segments"),
        &ImGui::ImDrawList_AddCircleFilled,
        DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_AddNgon", "self", "center", "radius", "col", "num_segments"),
                                &ImGui::ImDrawList_AddNgon);
    ClassDB::bind_static_method(
        "ImGui",
        D_METHOD("ImDrawList_AddNgonEx", "self", "center", "radius", "col", "num_segments", "thickness"),
        &ImGui::ImDrawList_AddNgonEx,
        DEFVAL(1.0f));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_AddNgonFilled", "self", "center", "radius", "col", "num_segments"),
                                &ImGui::ImDrawList_AddNgonFilled);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_AddEllipse", "self", "center", "radius", "col"),
                                &ImGui::ImDrawList_AddEllipse);
    ClassDB::bind_static_method(
        "ImGui",
        D_METHOD("ImDrawList_AddEllipseEx", "self", "center", "radius", "col", "rot", "num_segments", "thickness"),
        &ImGui::ImDrawList_AddEllipseEx,
        DEFVAL(0.0f),
        DEFVAL(0),
        DEFVAL(1.0f));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_AddEllipseFilled", "self", "center", "radius", "col"),
                                &ImGui::ImDrawList_AddEllipseFilled);
    ClassDB::bind_static_method(
        "ImGui",
        D_METHOD("ImDrawList_AddEllipseFilledEx", "self", "center", "radius", "col", "rot", "num_segments"),
        &ImGui::ImDrawList_AddEllipseFilledEx,
        DEFVAL(0.0f),
        DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_AddText", "self", "pos", "col", "text_begin"),
                                &ImGui::ImDrawList_AddText);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_AddTextEx", "self", "pos", "col", "text_begin", "text_end"),
                                &ImGui::ImDrawList_AddTextEx,
                                DEFVAL(String()));
    ClassDB::bind_static_method(
        "ImGui",
        D_METHOD("ImDrawList_AddTextImFontPtr", "self", "font", "font_size", "pos", "col", "text_begin"),
        &ImGui::ImDrawList_AddTextImFontPtr);
    ClassDB::bind_static_method(
        "ImGui",
        D_METHOD("ImDrawList_AddBezierCubic", "self", "p1", "p2", "p3", "p4", "col", "thickness", "num_segments"),
        &ImGui::ImDrawList_AddBezierCubic,
        DEFVAL(0));
    ClassDB::bind_static_method(
        "ImGui",
        D_METHOD("ImDrawList_AddBezierQuadratic", "self", "p1", "p2", "p3", "col", "thickness", "num_segments"),
        &ImGui::ImDrawList_AddBezierQuadratic,
        DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_AddImage", "self", "user_texture_id", "p_min", "p_max"),
                                &ImGui::ImDrawList_AddImage);
    ClassDB::bind_static_method(
        "ImGui",
        D_METHOD("ImDrawList_AddImageEx", "self", "user_texture_id", "p_min", "p_max", "uv_min", "uv_max", "col"),
        &ImGui::ImDrawList_AddImageEx,
        DEFVAL(Vector2(0, 0)),
        DEFVAL(Vector2(1, 1)),
        DEFVAL(IM_COL32_WHITE));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_AddImageQuad", "self", "user_texture_id", "p1", "p2", "p3", "p4"),
                                &ImGui::ImDrawList_AddImageQuad);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_AddImageQuadEx",
                                         "self",
                                         "user_texture_id",
                                         "p1",
                                         "p2",
                                         "p3",
                                         "p4",
                                         "uv1",
                                         "uv2",
                                         "uv3",
                                         "uv4",
                                         "col"),
                                &ImGui::ImDrawList_AddImageQuadEx,
                                DEFVAL(Vector2(0, 0)),
                                DEFVAL(Vector2(1, 0)),
                                DEFVAL(Vector2(1, 1)),
                                DEFVAL(Vector2(0, 1)),
                                DEFVAL(IM_COL32_WHITE));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_AddImageRounded",
                                         "self",
                                         "user_texture_id",
                                         "p_min",
                                         "p_max",
                                         "uv_min",
                                         "uv_max",
                                         "col",
                                         "rounding",
                                         "flags"),
                                &ImGui::ImDrawList_AddImageRounded,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("ImDrawList_PathClear", "self"), &ImGui::ImDrawList_PathClear);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_PathLineTo", "self", "pos"),
                                &ImGui::ImDrawList_PathLineTo);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_PathLineToMergeDuplicate", "self", "pos"),
                                &ImGui::ImDrawList_PathLineToMergeDuplicate);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_PathFillConvex", "self", "col"),
                                &ImGui::ImDrawList_PathFillConvex);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_PathFillConcave", "self", "col"),
                                &ImGui::ImDrawList_PathFillConcave);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_PathStroke", "self", "col", "flags", "thickness"),
                                &ImGui::ImDrawList_PathStroke,
                                DEFVAL(0),
                                DEFVAL(1.0f));
    ClassDB::bind_static_method(
        "ImGui",
        D_METHOD("ImDrawList_PathArcTo", "self", "center", "radius", "a_min", "a_max", "num_segments"),
        &ImGui::ImDrawList_PathArcTo,
        DEFVAL(0));
    ClassDB::bind_static_method(
        "ImGui",
        D_METHOD("ImDrawList_PathArcToFast", "self", "center", "radius", "a_min_of_12", "a_max_of_12"),
        &ImGui::ImDrawList_PathArcToFast);
    ClassDB::bind_static_method(
        "ImGui",
        D_METHOD("ImDrawList_PathEllipticalArcTo", "self", "center", "radius", "rot", "a_min", "a_max"),
        &ImGui::ImDrawList_PathEllipticalArcTo);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_PathEllipticalArcToEx",
                                         "self",
                                         "center",
                                         "radius",
                                         "rot",
                                         "a_min",
                                         "a_max",
                                         "num_segments"),
                                &ImGui::ImDrawList_PathEllipticalArcToEx,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_PathBezierCubicCurveTo", "self", "p2", "p3", "p4", "num_segments"),
                                &ImGui::ImDrawList_PathBezierCubicCurveTo,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_PathBezierQuadraticCurveTo", "self", "p2", "p3", "num_segments"),
                                &ImGui::ImDrawList_PathBezierQuadraticCurveTo,
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_PathRect", "self", "rect_min", "rect_max", "rounding", "flags"),
                                &ImGui::ImDrawList_PathRect,
                                DEFVAL(0.0f),
                                DEFVAL(0));
    ClassDB::bind_static_method("ImGui", D_METHOD("ImDrawList_AddDrawCmd", "self"), &ImGui::ImDrawList_AddDrawCmd);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_ChannelsSplit", "self", "count"),
                                &ImGui::ImDrawList_ChannelsSplit);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_ChannelsMerge", "self"),
                                &ImGui::ImDrawList_ChannelsMerge);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_ChannelsSetCurrent", "self", "n"),
                                &ImGui::ImDrawList_ChannelsSetCurrent);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_PrimReserve", "self", "idx_count", "vtx_count"),
                                &ImGui::ImDrawList_PrimReserve);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_PrimUnreserve", "self", "idx_count", "vtx_count"),
                                &ImGui::ImDrawList_PrimUnreserve);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_PrimRect", "self", "a", "b", "col"),
                                &ImGui::ImDrawList_PrimRect);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_PrimWriteVtx", "self", "pos", "uv", "col"),
                                &ImGui::ImDrawList_PrimWriteVtx);
    ClassDB::bind_static_method("ImGui",
                                D_METHOD("ImDrawList_PrimVtx", "self", "pos", "uv", "col"),
                                &ImGui::ImDrawList_PrimVtx);
}
void ImGuiTableSortSpecsPtr::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("_GetSpecs"), &ImGuiTableSortSpecsPtr::_GetSpecs);
    ClassDB::bind_method(D_METHOD("_SetSpecs", "x"), &ImGuiTableSortSpecsPtr::_SetSpecs);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "Specs"), "_SetSpecs", "_GetSpecs");
    ClassDB::bind_method(D_METHOD("_GetSpecsCount"), &ImGuiTableSortSpecsPtr::_GetSpecsCount);
    ClassDB::bind_method(D_METHOD("_SetSpecsCount", "x"), &ImGuiTableSortSpecsPtr::_SetSpecsCount);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "SpecsCount"), "_SetSpecsCount", "_GetSpecsCount");
    ClassDB::bind_method(D_METHOD("_GetSpecsDirty"), &ImGuiTableSortSpecsPtr::_GetSpecsDirty);
    ClassDB::bind_method(D_METHOD("_SetSpecsDirty", "x"), &ImGuiTableSortSpecsPtr::_SetSpecsDirty);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "SpecsDirty"), "_SetSpecsDirty", "_GetSpecsDirty");
}
Array ImGuiTableSortSpecsPtr::_GetSpecs()
{
    if (ptr) [[likely]]
        return SpecsToArray(ptr);
    else
        return {};
}
void ImGuiTableSortSpecsPtr::_SetSpecs(Array x)
{
    ERR_FAIL_MSG("Specs is const");
}
int ImGuiTableSortSpecsPtr::_GetSpecsCount()
{
    if (ptr) [[likely]]
        return ptr->SpecsCount;
    else
        return {};
}
void ImGuiTableSortSpecsPtr::_SetSpecsCount(int x)
{
    ptr->SpecsCount = x;
}
bool ImGuiTableSortSpecsPtr::_GetSpecsDirty()
{
    if (ptr) [[likely]]
        return ptr->SpecsDirty;
    else
        return {};
}
void ImGuiTableSortSpecsPtr::_SetSpecsDirty(bool x)
{
    ptr->SpecsDirty = x;
}
void ImGuiTableColumnSortSpecsPtr::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("_GetColumnUserID"), &ImGuiTableColumnSortSpecsPtr::_GetColumnUserID);
    ClassDB::bind_method(D_METHOD("_SetColumnUserID", "x"), &ImGuiTableColumnSortSpecsPtr::_SetColumnUserID);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "ColumnUserID"), "_SetColumnUserID", "_GetColumnUserID");
    ClassDB::bind_method(D_METHOD("_GetColumnIndex"), &ImGuiTableColumnSortSpecsPtr::_GetColumnIndex);
    ClassDB::bind_method(D_METHOD("_SetColumnIndex", "x"), &ImGuiTableColumnSortSpecsPtr::_SetColumnIndex);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "ColumnIndex"), "_SetColumnIndex", "_GetColumnIndex");
    ClassDB::bind_method(D_METHOD("_GetSortOrder"), &ImGuiTableColumnSortSpecsPtr::_GetSortOrder);
    ClassDB::bind_method(D_METHOD("_SetSortOrder", "x"), &ImGuiTableColumnSortSpecsPtr::_SetSortOrder);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "SortOrder"), "_SetSortOrder", "_GetSortOrder");
    ClassDB::bind_method(D_METHOD("_GetSortDirection"), &ImGuiTableColumnSortSpecsPtr::_GetSortDirection);
    ClassDB::bind_method(D_METHOD("_SetSortDirection", "x"), &ImGuiTableColumnSortSpecsPtr::_SetSortDirection);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "SortDirection"), "_SetSortDirection", "_GetSortDirection");
}
uint32_t ImGuiTableColumnSortSpecsPtr::_GetColumnUserID()
{
    if (ptr) [[likely]]
        return ptr->ColumnUserID;
    else
        return {};
}
void ImGuiTableColumnSortSpecsPtr::_SetColumnUserID(uint32_t x)
{
    ptr->ColumnUserID = x;
}
int16_t ImGuiTableColumnSortSpecsPtr::_GetColumnIndex()
{
    if (ptr) [[likely]]
        return ptr->ColumnIndex;
    else
        return {};
}
void ImGuiTableColumnSortSpecsPtr::_SetColumnIndex(int16_t x)
{
    ptr->ColumnIndex = x;
}
int16_t ImGuiTableColumnSortSpecsPtr::_GetSortOrder()
{
    if (ptr) [[likely]]
        return ptr->SortOrder;
    else
        return {};
}
void ImGuiTableColumnSortSpecsPtr::_SetSortOrder(int16_t x)
{
    ptr->SortOrder = x;
}
ImGui::SortDirection ImGuiTableColumnSortSpecsPtr::_GetSortDirection()
{
    if (ptr) [[likely]]
        return static_cast<ImGui::SortDirection>(ptr->SortDirection);
    else
        return {};
}
void ImGuiTableColumnSortSpecsPtr::_SetSortDirection(ImGui::SortDirection x)
{
    ptr->SortDirection = static_cast<ImGuiSortDirection>(x);
}
void ImGuiStylePtr::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("_GetAlpha"), &ImGuiStylePtr::_GetAlpha);
    ClassDB::bind_method(D_METHOD("_SetAlpha", "x"), &ImGuiStylePtr::_SetAlpha);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "Alpha"), "_SetAlpha", "_GetAlpha");
    ClassDB::bind_method(D_METHOD("_GetDisabledAlpha"), &ImGuiStylePtr::_GetDisabledAlpha);
    ClassDB::bind_method(D_METHOD("_SetDisabledAlpha", "x"), &ImGuiStylePtr::_SetDisabledAlpha);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "DisabledAlpha"), "_SetDisabledAlpha", "_GetDisabledAlpha");
    ClassDB::bind_method(D_METHOD("_GetWindowPadding"), &ImGuiStylePtr::_GetWindowPadding);
    ClassDB::bind_method(D_METHOD("_SetWindowPadding", "x"), &ImGuiStylePtr::_SetWindowPadding);
    ADD_PROPERTY(PropertyInfo(Variant::VECTOR2, "WindowPadding"), "_SetWindowPadding", "_GetWindowPadding");
    ClassDB::bind_method(D_METHOD("_GetWindowRounding"), &ImGuiStylePtr::_GetWindowRounding);
    ClassDB::bind_method(D_METHOD("_SetWindowRounding", "x"), &ImGuiStylePtr::_SetWindowRounding);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "WindowRounding"), "_SetWindowRounding", "_GetWindowRounding");
    ClassDB::bind_method(D_METHOD("_GetWindowBorderSize"), &ImGuiStylePtr::_GetWindowBorderSize);
    ClassDB::bind_method(D_METHOD("_SetWindowBorderSize", "x"), &ImGuiStylePtr::_SetWindowBorderSize);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "WindowBorderSize"), "_SetWindowBorderSize", "_GetWindowBorderSize");
    ClassDB::bind_method(D_METHOD("_GetWindowMinSize"), &ImGuiStylePtr::_GetWindowMinSize);
    ClassDB::bind_method(D_METHOD("_SetWindowMinSize", "x"), &ImGuiStylePtr::_SetWindowMinSize);
    ADD_PROPERTY(PropertyInfo(Variant::VECTOR2, "WindowMinSize"), "_SetWindowMinSize", "_GetWindowMinSize");
    ClassDB::bind_method(D_METHOD("_GetWindowTitleAlign"), &ImGuiStylePtr::_GetWindowTitleAlign);
    ClassDB::bind_method(D_METHOD("_SetWindowTitleAlign", "x"), &ImGuiStylePtr::_SetWindowTitleAlign);
    ADD_PROPERTY(PropertyInfo(Variant::VECTOR2, "WindowTitleAlign"), "_SetWindowTitleAlign", "_GetWindowTitleAlign");
    ClassDB::bind_method(D_METHOD("_GetWindowMenuButtonPosition"), &ImGuiStylePtr::_GetWindowMenuButtonPosition);
    ClassDB::bind_method(D_METHOD("_SetWindowMenuButtonPosition", "x"), &ImGuiStylePtr::_SetWindowMenuButtonPosition);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "WindowMenuButtonPosition"),
                 "_SetWindowMenuButtonPosition",
                 "_GetWindowMenuButtonPosition");
    ClassDB::bind_method(D_METHOD("_GetChildRounding"), &ImGuiStylePtr::_GetChildRounding);
    ClassDB::bind_method(D_METHOD("_SetChildRounding", "x"), &ImGuiStylePtr::_SetChildRounding);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "ChildRounding"), "_SetChildRounding", "_GetChildRounding");
    ClassDB::bind_method(D_METHOD("_GetChildBorderSize"), &ImGuiStylePtr::_GetChildBorderSize);
    ClassDB::bind_method(D_METHOD("_SetChildBorderSize", "x"), &ImGuiStylePtr::_SetChildBorderSize);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "ChildBorderSize"), "_SetChildBorderSize", "_GetChildBorderSize");
    ClassDB::bind_method(D_METHOD("_GetPopupRounding"), &ImGuiStylePtr::_GetPopupRounding);
    ClassDB::bind_method(D_METHOD("_SetPopupRounding", "x"), &ImGuiStylePtr::_SetPopupRounding);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "PopupRounding"), "_SetPopupRounding", "_GetPopupRounding");
    ClassDB::bind_method(D_METHOD("_GetPopupBorderSize"), &ImGuiStylePtr::_GetPopupBorderSize);
    ClassDB::bind_method(D_METHOD("_SetPopupBorderSize", "x"), &ImGuiStylePtr::_SetPopupBorderSize);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "PopupBorderSize"), "_SetPopupBorderSize", "_GetPopupBorderSize");
    ClassDB::bind_method(D_METHOD("_GetFramePadding"), &ImGuiStylePtr::_GetFramePadding);
    ClassDB::bind_method(D_METHOD("_SetFramePadding", "x"), &ImGuiStylePtr::_SetFramePadding);
    ADD_PROPERTY(PropertyInfo(Variant::VECTOR2, "FramePadding"), "_SetFramePadding", "_GetFramePadding");
    ClassDB::bind_method(D_METHOD("_GetFrameRounding"), &ImGuiStylePtr::_GetFrameRounding);
    ClassDB::bind_method(D_METHOD("_SetFrameRounding", "x"), &ImGuiStylePtr::_SetFrameRounding);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "FrameRounding"), "_SetFrameRounding", "_GetFrameRounding");
    ClassDB::bind_method(D_METHOD("_GetFrameBorderSize"), &ImGuiStylePtr::_GetFrameBorderSize);
    ClassDB::bind_method(D_METHOD("_SetFrameBorderSize", "x"), &ImGuiStylePtr::_SetFrameBorderSize);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "FrameBorderSize"), "_SetFrameBorderSize", "_GetFrameBorderSize");
    ClassDB::bind_method(D_METHOD("_GetItemSpacing"), &ImGuiStylePtr::_GetItemSpacing);
    ClassDB::bind_method(D_METHOD("_SetItemSpacing", "x"), &ImGuiStylePtr::_SetItemSpacing);
    ADD_PROPERTY(PropertyInfo(Variant::VECTOR2, "ItemSpacing"), "_SetItemSpacing", "_GetItemSpacing");
    ClassDB::bind_method(D_METHOD("_GetItemInnerSpacing"), &ImGuiStylePtr::_GetItemInnerSpacing);
    ClassDB::bind_method(D_METHOD("_SetItemInnerSpacing", "x"), &ImGuiStylePtr::_SetItemInnerSpacing);
    ADD_PROPERTY(PropertyInfo(Variant::VECTOR2, "ItemInnerSpacing"), "_SetItemInnerSpacing", "_GetItemInnerSpacing");
    ClassDB::bind_method(D_METHOD("_GetCellPadding"), &ImGuiStylePtr::_GetCellPadding);
    ClassDB::bind_method(D_METHOD("_SetCellPadding", "x"), &ImGuiStylePtr::_SetCellPadding);
    ADD_PROPERTY(PropertyInfo(Variant::VECTOR2, "CellPadding"), "_SetCellPadding", "_GetCellPadding");
    ClassDB::bind_method(D_METHOD("_GetTouchExtraPadding"), &ImGuiStylePtr::_GetTouchExtraPadding);
    ClassDB::bind_method(D_METHOD("_SetTouchExtraPadding", "x"), &ImGuiStylePtr::_SetTouchExtraPadding);
    ADD_PROPERTY(PropertyInfo(Variant::VECTOR2, "TouchExtraPadding"), "_SetTouchExtraPadding", "_GetTouchExtraPadding");
    ClassDB::bind_method(D_METHOD("_GetIndentSpacing"), &ImGuiStylePtr::_GetIndentSpacing);
    ClassDB::bind_method(D_METHOD("_SetIndentSpacing", "x"), &ImGuiStylePtr::_SetIndentSpacing);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "IndentSpacing"), "_SetIndentSpacing", "_GetIndentSpacing");
    ClassDB::bind_method(D_METHOD("_GetColumnsMinSpacing"), &ImGuiStylePtr::_GetColumnsMinSpacing);
    ClassDB::bind_method(D_METHOD("_SetColumnsMinSpacing", "x"), &ImGuiStylePtr::_SetColumnsMinSpacing);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "ColumnsMinSpacing"), "_SetColumnsMinSpacing", "_GetColumnsMinSpacing");
    ClassDB::bind_method(D_METHOD("_GetScrollbarSize"), &ImGuiStylePtr::_GetScrollbarSize);
    ClassDB::bind_method(D_METHOD("_SetScrollbarSize", "x"), &ImGuiStylePtr::_SetScrollbarSize);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "ScrollbarSize"), "_SetScrollbarSize", "_GetScrollbarSize");
    ClassDB::bind_method(D_METHOD("_GetScrollbarRounding"), &ImGuiStylePtr::_GetScrollbarRounding);
    ClassDB::bind_method(D_METHOD("_SetScrollbarRounding", "x"), &ImGuiStylePtr::_SetScrollbarRounding);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "ScrollbarRounding"), "_SetScrollbarRounding", "_GetScrollbarRounding");
    ClassDB::bind_method(D_METHOD("_GetGrabMinSize"), &ImGuiStylePtr::_GetGrabMinSize);
    ClassDB::bind_method(D_METHOD("_SetGrabMinSize", "x"), &ImGuiStylePtr::_SetGrabMinSize);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "GrabMinSize"), "_SetGrabMinSize", "_GetGrabMinSize");
    ClassDB::bind_method(D_METHOD("_GetGrabRounding"), &ImGuiStylePtr::_GetGrabRounding);
    ClassDB::bind_method(D_METHOD("_SetGrabRounding", "x"), &ImGuiStylePtr::_SetGrabRounding);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "GrabRounding"), "_SetGrabRounding", "_GetGrabRounding");
    ClassDB::bind_method(D_METHOD("_GetLogSliderDeadzone"), &ImGuiStylePtr::_GetLogSliderDeadzone);
    ClassDB::bind_method(D_METHOD("_SetLogSliderDeadzone", "x"), &ImGuiStylePtr::_SetLogSliderDeadzone);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "LogSliderDeadzone"), "_SetLogSliderDeadzone", "_GetLogSliderDeadzone");
    ClassDB::bind_method(D_METHOD("_GetTabRounding"), &ImGuiStylePtr::_GetTabRounding);
    ClassDB::bind_method(D_METHOD("_SetTabRounding", "x"), &ImGuiStylePtr::_SetTabRounding);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "TabRounding"), "_SetTabRounding", "_GetTabRounding");
    ClassDB::bind_method(D_METHOD("_GetTabBorderSize"), &ImGuiStylePtr::_GetTabBorderSize);
    ClassDB::bind_method(D_METHOD("_SetTabBorderSize", "x"), &ImGuiStylePtr::_SetTabBorderSize);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "TabBorderSize"), "_SetTabBorderSize", "_GetTabBorderSize");
    ClassDB::bind_method(D_METHOD("_GetTabMinWidthForCloseButton"), &ImGuiStylePtr::_GetTabMinWidthForCloseButton);
    ClassDB::bind_method(D_METHOD("_SetTabMinWidthForCloseButton", "x"), &ImGuiStylePtr::_SetTabMinWidthForCloseButton);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "TabMinWidthForCloseButton"),
                 "_SetTabMinWidthForCloseButton",
                 "_GetTabMinWidthForCloseButton");
    ClassDB::bind_method(D_METHOD("_GetTabBarBorderSize"), &ImGuiStylePtr::_GetTabBarBorderSize);
    ClassDB::bind_method(D_METHOD("_SetTabBarBorderSize", "x"), &ImGuiStylePtr::_SetTabBarBorderSize);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "TabBarBorderSize"), "_SetTabBarBorderSize", "_GetTabBarBorderSize");
    ClassDB::bind_method(D_METHOD("_GetTabBarOverlineSize"), &ImGuiStylePtr::_GetTabBarOverlineSize);
    ClassDB::bind_method(D_METHOD("_SetTabBarOverlineSize", "x"), &ImGuiStylePtr::_SetTabBarOverlineSize);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "TabBarOverlineSize"), "_SetTabBarOverlineSize", "_GetTabBarOverlineSize");
    ClassDB::bind_method(D_METHOD("_GetTableAngledHeadersAngle"), &ImGuiStylePtr::_GetTableAngledHeadersAngle);
    ClassDB::bind_method(D_METHOD("_SetTableAngledHeadersAngle", "x"), &ImGuiStylePtr::_SetTableAngledHeadersAngle);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "TableAngledHeadersAngle"),
                 "_SetTableAngledHeadersAngle",
                 "_GetTableAngledHeadersAngle");
    ClassDB::bind_method(D_METHOD("_GetTableAngledHeadersTextAlign"), &ImGuiStylePtr::_GetTableAngledHeadersTextAlign);
    ClassDB::bind_method(D_METHOD("_SetTableAngledHeadersTextAlign", "x"),
                         &ImGuiStylePtr::_SetTableAngledHeadersTextAlign);
    ADD_PROPERTY(PropertyInfo(Variant::VECTOR2, "TableAngledHeadersTextAlign"),
                 "_SetTableAngledHeadersTextAlign",
                 "_GetTableAngledHeadersTextAlign");
    ClassDB::bind_method(D_METHOD("_GetColorButtonPosition"), &ImGuiStylePtr::_GetColorButtonPosition);
    ClassDB::bind_method(D_METHOD("_SetColorButtonPosition", "x"), &ImGuiStylePtr::_SetColorButtonPosition);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "ColorButtonPosition"),
                 "_SetColorButtonPosition",
                 "_GetColorButtonPosition");
    ClassDB::bind_method(D_METHOD("_GetButtonTextAlign"), &ImGuiStylePtr::_GetButtonTextAlign);
    ClassDB::bind_method(D_METHOD("_SetButtonTextAlign", "x"), &ImGuiStylePtr::_SetButtonTextAlign);
    ADD_PROPERTY(PropertyInfo(Variant::VECTOR2, "ButtonTextAlign"), "_SetButtonTextAlign", "_GetButtonTextAlign");
    ClassDB::bind_method(D_METHOD("_GetSelectableTextAlign"), &ImGuiStylePtr::_GetSelectableTextAlign);
    ClassDB::bind_method(D_METHOD("_SetSelectableTextAlign", "x"), &ImGuiStylePtr::_SetSelectableTextAlign);
    ADD_PROPERTY(PropertyInfo(Variant::VECTOR2, "SelectableTextAlign"),
                 "_SetSelectableTextAlign",
                 "_GetSelectableTextAlign");
    ClassDB::bind_method(D_METHOD("_GetSeparatorTextBorderSize"), &ImGuiStylePtr::_GetSeparatorTextBorderSize);
    ClassDB::bind_method(D_METHOD("_SetSeparatorTextBorderSize", "x"), &ImGuiStylePtr::_SetSeparatorTextBorderSize);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "SeparatorTextBorderSize"),
                 "_SetSeparatorTextBorderSize",
                 "_GetSeparatorTextBorderSize");
    ClassDB::bind_method(D_METHOD("_GetSeparatorTextAlign"), &ImGuiStylePtr::_GetSeparatorTextAlign);
    ClassDB::bind_method(D_METHOD("_SetSeparatorTextAlign", "x"), &ImGuiStylePtr::_SetSeparatorTextAlign);
    ADD_PROPERTY(PropertyInfo(Variant::VECTOR2, "SeparatorTextAlign"),
                 "_SetSeparatorTextAlign",
                 "_GetSeparatorTextAlign");
    ClassDB::bind_method(D_METHOD("_GetSeparatorTextPadding"), &ImGuiStylePtr::_GetSeparatorTextPadding);
    ClassDB::bind_method(D_METHOD("_SetSeparatorTextPadding", "x"), &ImGuiStylePtr::_SetSeparatorTextPadding);
    ADD_PROPERTY(PropertyInfo(Variant::VECTOR2, "SeparatorTextPadding"),
                 "_SetSeparatorTextPadding",
                 "_GetSeparatorTextPadding");
    ClassDB::bind_method(D_METHOD("_GetDisplayWindowPadding"), &ImGuiStylePtr::_GetDisplayWindowPadding);
    ClassDB::bind_method(D_METHOD("_SetDisplayWindowPadding", "x"), &ImGuiStylePtr::_SetDisplayWindowPadding);
    ADD_PROPERTY(PropertyInfo(Variant::VECTOR2, "DisplayWindowPadding"),
                 "_SetDisplayWindowPadding",
                 "_GetDisplayWindowPadding");
    ClassDB::bind_method(D_METHOD("_GetDisplaySafeAreaPadding"), &ImGuiStylePtr::_GetDisplaySafeAreaPadding);
    ClassDB::bind_method(D_METHOD("_SetDisplaySafeAreaPadding", "x"), &ImGuiStylePtr::_SetDisplaySafeAreaPadding);
    ADD_PROPERTY(PropertyInfo(Variant::VECTOR2, "DisplaySafeAreaPadding"),
                 "_SetDisplaySafeAreaPadding",
                 "_GetDisplaySafeAreaPadding");
    ClassDB::bind_method(D_METHOD("_GetDockingSeparatorSize"), &ImGuiStylePtr::_GetDockingSeparatorSize);
    ClassDB::bind_method(D_METHOD("_SetDockingSeparatorSize", "x"), &ImGuiStylePtr::_SetDockingSeparatorSize);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "DockingSeparatorSize"),
                 "_SetDockingSeparatorSize",
                 "_GetDockingSeparatorSize");
    ClassDB::bind_method(D_METHOD("_GetMouseCursorScale"), &ImGuiStylePtr::_GetMouseCursorScale);
    ClassDB::bind_method(D_METHOD("_SetMouseCursorScale", "x"), &ImGuiStylePtr::_SetMouseCursorScale);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "MouseCursorScale"), "_SetMouseCursorScale", "_GetMouseCursorScale");
    ClassDB::bind_method(D_METHOD("_GetAntiAliasedLines"), &ImGuiStylePtr::_GetAntiAliasedLines);
    ClassDB::bind_method(D_METHOD("_SetAntiAliasedLines", "x"), &ImGuiStylePtr::_SetAntiAliasedLines);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "AntiAliasedLines"), "_SetAntiAliasedLines", "_GetAntiAliasedLines");
    ClassDB::bind_method(D_METHOD("_GetAntiAliasedLinesUseTex"), &ImGuiStylePtr::_GetAntiAliasedLinesUseTex);
    ClassDB::bind_method(D_METHOD("_SetAntiAliasedLinesUseTex", "x"), &ImGuiStylePtr::_SetAntiAliasedLinesUseTex);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "AntiAliasedLinesUseTex"),
                 "_SetAntiAliasedLinesUseTex",
                 "_GetAntiAliasedLinesUseTex");
    ClassDB::bind_method(D_METHOD("_GetAntiAliasedFill"), &ImGuiStylePtr::_GetAntiAliasedFill);
    ClassDB::bind_method(D_METHOD("_SetAntiAliasedFill", "x"), &ImGuiStylePtr::_SetAntiAliasedFill);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "AntiAliasedFill"), "_SetAntiAliasedFill", "_GetAntiAliasedFill");
    ClassDB::bind_method(D_METHOD("_GetCurveTessellationTol"), &ImGuiStylePtr::_GetCurveTessellationTol);
    ClassDB::bind_method(D_METHOD("_SetCurveTessellationTol", "x"), &ImGuiStylePtr::_SetCurveTessellationTol);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "CurveTessellationTol"),
                 "_SetCurveTessellationTol",
                 "_GetCurveTessellationTol");
    ClassDB::bind_method(D_METHOD("_GetCircleTessellationMaxError"), &ImGuiStylePtr::_GetCircleTessellationMaxError);
    ClassDB::bind_method(D_METHOD("_SetCircleTessellationMaxError", "x"),
                         &ImGuiStylePtr::_SetCircleTessellationMaxError);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "CircleTessellationMaxError"),
                 "_SetCircleTessellationMaxError",
                 "_GetCircleTessellationMaxError");
    ClassDB::bind_method(D_METHOD("_GetColors"), &ImGuiStylePtr::_GetColors);
    ClassDB::bind_method(D_METHOD("_SetColors", "x"), &ImGuiStylePtr::_SetColors);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "Colors"), "_SetColors", "_GetColors");
    ClassDB::bind_method(D_METHOD("_GetHoverStationaryDelay"), &ImGuiStylePtr::_GetHoverStationaryDelay);
    ClassDB::bind_method(D_METHOD("_SetHoverStationaryDelay", "x"), &ImGuiStylePtr::_SetHoverStationaryDelay);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "HoverStationaryDelay"),
                 "_SetHoverStationaryDelay",
                 "_GetHoverStationaryDelay");
    ClassDB::bind_method(D_METHOD("_GetHoverDelayShort"), &ImGuiStylePtr::_GetHoverDelayShort);
    ClassDB::bind_method(D_METHOD("_SetHoverDelayShort", "x"), &ImGuiStylePtr::_SetHoverDelayShort);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "HoverDelayShort"), "_SetHoverDelayShort", "_GetHoverDelayShort");
    ClassDB::bind_method(D_METHOD("_GetHoverDelayNormal"), &ImGuiStylePtr::_GetHoverDelayNormal);
    ClassDB::bind_method(D_METHOD("_SetHoverDelayNormal", "x"), &ImGuiStylePtr::_SetHoverDelayNormal);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "HoverDelayNormal"), "_SetHoverDelayNormal", "_GetHoverDelayNormal");
    ClassDB::bind_method(D_METHOD("_GetHoverFlagsForTooltipMouse"), &ImGuiStylePtr::_GetHoverFlagsForTooltipMouse);
    ClassDB::bind_method(D_METHOD("_SetHoverFlagsForTooltipMouse", "x"), &ImGuiStylePtr::_SetHoverFlagsForTooltipMouse);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "HoverFlagsForTooltipMouse"),
                 "_SetHoverFlagsForTooltipMouse",
                 "_GetHoverFlagsForTooltipMouse");
    ClassDB::bind_method(D_METHOD("_GetHoverFlagsForTooltipNav"), &ImGuiStylePtr::_GetHoverFlagsForTooltipNav);
    ClassDB::bind_method(D_METHOD("_SetHoverFlagsForTooltipNav", "x"), &ImGuiStylePtr::_SetHoverFlagsForTooltipNav);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "HoverFlagsForTooltipNav"),
                 "_SetHoverFlagsForTooltipNav",
                 "_GetHoverFlagsForTooltipNav");
}
real_t ImGuiStylePtr::_GetAlpha()
{
    if (ptr) [[likely]]
        return ptr->Alpha;
    else
        return {};
}
void ImGuiStylePtr::_SetAlpha(real_t x)
{
    ptr->Alpha = x;
}
real_t ImGuiStylePtr::_GetDisabledAlpha()
{
    if (ptr) [[likely]]
        return ptr->DisabledAlpha;
    else
        return {};
}
void ImGuiStylePtr::_SetDisabledAlpha(real_t x)
{
    ptr->DisabledAlpha = x;
}
Vector2 ImGuiStylePtr::_GetWindowPadding()
{
    if (ptr) [[likely]]
        return ToVector2(ptr->WindowPadding);
    else
        return {};
}
void ImGuiStylePtr::_SetWindowPadding(Vector2 x)
{
    ptr->WindowPadding = {static_cast<float>(x.x), static_cast<float>(x.y)};
}
real_t ImGuiStylePtr::_GetWindowRounding()
{
    if (ptr) [[likely]]
        return ptr->WindowRounding;
    else
        return {};
}
void ImGuiStylePtr::_SetWindowRounding(real_t x)
{
    ptr->WindowRounding = x;
}
real_t ImGuiStylePtr::_GetWindowBorderSize()
{
    if (ptr) [[likely]]
        return ptr->WindowBorderSize;
    else
        return {};
}
void ImGuiStylePtr::_SetWindowBorderSize(real_t x)
{
    ptr->WindowBorderSize = x;
}
Vector2 ImGuiStylePtr::_GetWindowMinSize()
{
    if (ptr) [[likely]]
        return ToVector2(ptr->WindowMinSize);
    else
        return {};
}
void ImGuiStylePtr::_SetWindowMinSize(Vector2 x)
{
    ptr->WindowMinSize = {static_cast<float>(x.x), static_cast<float>(x.y)};
}
Vector2 ImGuiStylePtr::_GetWindowTitleAlign()
{
    if (ptr) [[likely]]
        return ToVector2(ptr->WindowTitleAlign);
    else
        return {};
}
void ImGuiStylePtr::_SetWindowTitleAlign(Vector2 x)
{
    ptr->WindowTitleAlign = {static_cast<float>(x.x), static_cast<float>(x.y)};
}
ImGui::Dir ImGuiStylePtr::_GetWindowMenuButtonPosition()
{
    if (ptr) [[likely]]
        return static_cast<ImGui::Dir>(ptr->WindowMenuButtonPosition);
    else
        return {};
}
void ImGuiStylePtr::_SetWindowMenuButtonPosition(ImGui::Dir x)
{
    ptr->WindowMenuButtonPosition = static_cast<ImGuiDir>(x);
}
real_t ImGuiStylePtr::_GetChildRounding()
{
    if (ptr) [[likely]]
        return ptr->ChildRounding;
    else
        return {};
}
void ImGuiStylePtr::_SetChildRounding(real_t x)
{
    ptr->ChildRounding = x;
}
real_t ImGuiStylePtr::_GetChildBorderSize()
{
    if (ptr) [[likely]]
        return ptr->ChildBorderSize;
    else
        return {};
}
void ImGuiStylePtr::_SetChildBorderSize(real_t x)
{
    ptr->ChildBorderSize = x;
}
real_t ImGuiStylePtr::_GetPopupRounding()
{
    if (ptr) [[likely]]
        return ptr->PopupRounding;
    else
        return {};
}
void ImGuiStylePtr::_SetPopupRounding(real_t x)
{
    ptr->PopupRounding = x;
}
real_t ImGuiStylePtr::_GetPopupBorderSize()
{
    if (ptr) [[likely]]
        return ptr->PopupBorderSize;
    else
        return {};
}
void ImGuiStylePtr::_SetPopupBorderSize(real_t x)
{
    ptr->PopupBorderSize = x;
}
Vector2 ImGuiStylePtr::_GetFramePadding()
{
    if (ptr) [[likely]]
        return ToVector2(ptr->FramePadding);
    else
        return {};
}
void ImGuiStylePtr::_SetFramePadding(Vector2 x)
{
    ptr->FramePadding = {static_cast<float>(x.x), static_cast<float>(x.y)};
}
real_t ImGuiStylePtr::_GetFrameRounding()
{
    if (ptr) [[likely]]
        return ptr->FrameRounding;
    else
        return {};
}
void ImGuiStylePtr::_SetFrameRounding(real_t x)
{
    ptr->FrameRounding = x;
}
real_t ImGuiStylePtr::_GetFrameBorderSize()
{
    if (ptr) [[likely]]
        return ptr->FrameBorderSize;
    else
        return {};
}
void ImGuiStylePtr::_SetFrameBorderSize(real_t x)
{
    ptr->FrameBorderSize = x;
}
Vector2 ImGuiStylePtr::_GetItemSpacing()
{
    if (ptr) [[likely]]
        return ToVector2(ptr->ItemSpacing);
    else
        return {};
}
void ImGuiStylePtr::_SetItemSpacing(Vector2 x)
{
    ptr->ItemSpacing = {static_cast<float>(x.x), static_cast<float>(x.y)};
}
Vector2 ImGuiStylePtr::_GetItemInnerSpacing()
{
    if (ptr) [[likely]]
        return ToVector2(ptr->ItemInnerSpacing);
    else
        return {};
}
void ImGuiStylePtr::_SetItemInnerSpacing(Vector2 x)
{
    ptr->ItemInnerSpacing = {static_cast<float>(x.x), static_cast<float>(x.y)};
}
Vector2 ImGuiStylePtr::_GetCellPadding()
{
    if (ptr) [[likely]]
        return ToVector2(ptr->CellPadding);
    else
        return {};
}
void ImGuiStylePtr::_SetCellPadding(Vector2 x)
{
    ptr->CellPadding = {static_cast<float>(x.x), static_cast<float>(x.y)};
}
Vector2 ImGuiStylePtr::_GetTouchExtraPadding()
{
    if (ptr) [[likely]]
        return ToVector2(ptr->TouchExtraPadding);
    else
        return {};
}
void ImGuiStylePtr::_SetTouchExtraPadding(Vector2 x)
{
    ptr->TouchExtraPadding = {static_cast<float>(x.x), static_cast<float>(x.y)};
}
real_t ImGuiStylePtr::_GetIndentSpacing()
{
    if (ptr) [[likely]]
        return ptr->IndentSpacing;
    else
        return {};
}
void ImGuiStylePtr::_SetIndentSpacing(real_t x)
{
    ptr->IndentSpacing = x;
}
real_t ImGuiStylePtr::_GetColumnsMinSpacing()
{
    if (ptr) [[likely]]
        return ptr->ColumnsMinSpacing;
    else
        return {};
}
void ImGuiStylePtr::_SetColumnsMinSpacing(real_t x)
{
    ptr->ColumnsMinSpacing = x;
}
real_t ImGuiStylePtr::_GetScrollbarSize()
{
    if (ptr) [[likely]]
        return ptr->ScrollbarSize;
    else
        return {};
}
void ImGuiStylePtr::_SetScrollbarSize(real_t x)
{
    ptr->ScrollbarSize = x;
}
real_t ImGuiStylePtr::_GetScrollbarRounding()
{
    if (ptr) [[likely]]
        return ptr->ScrollbarRounding;
    else
        return {};
}
void ImGuiStylePtr::_SetScrollbarRounding(real_t x)
{
    ptr->ScrollbarRounding = x;
}
real_t ImGuiStylePtr::_GetGrabMinSize()
{
    if (ptr) [[likely]]
        return ptr->GrabMinSize;
    else
        return {};
}
void ImGuiStylePtr::_SetGrabMinSize(real_t x)
{
    ptr->GrabMinSize = x;
}
real_t ImGuiStylePtr::_GetGrabRounding()
{
    if (ptr) [[likely]]
        return ptr->GrabRounding;
    else
        return {};
}
void ImGuiStylePtr::_SetGrabRounding(real_t x)
{
    ptr->GrabRounding = x;
}
real_t ImGuiStylePtr::_GetLogSliderDeadzone()
{
    if (ptr) [[likely]]
        return ptr->LogSliderDeadzone;
    else
        return {};
}
void ImGuiStylePtr::_SetLogSliderDeadzone(real_t x)
{
    ptr->LogSliderDeadzone = x;
}
real_t ImGuiStylePtr::_GetTabRounding()
{
    if (ptr) [[likely]]
        return ptr->TabRounding;
    else
        return {};
}
void ImGuiStylePtr::_SetTabRounding(real_t x)
{
    ptr->TabRounding = x;
}
real_t ImGuiStylePtr::_GetTabBorderSize()
{
    if (ptr) [[likely]]
        return ptr->TabBorderSize;
    else
        return {};
}
void ImGuiStylePtr::_SetTabBorderSize(real_t x)
{
    ptr->TabBorderSize = x;
}
real_t ImGuiStylePtr::_GetTabMinWidthForCloseButton()
{
    if (ptr) [[likely]]
        return ptr->TabMinWidthForCloseButton;
    else
        return {};
}
void ImGuiStylePtr::_SetTabMinWidthForCloseButton(real_t x)
{
    ptr->TabMinWidthForCloseButton = x;
}
real_t ImGuiStylePtr::_GetTabBarBorderSize()
{
    if (ptr) [[likely]]
        return ptr->TabBarBorderSize;
    else
        return {};
}
void ImGuiStylePtr::_SetTabBarBorderSize(real_t x)
{
    ptr->TabBarBorderSize = x;
}
real_t ImGuiStylePtr::_GetTabBarOverlineSize()
{
    if (ptr) [[likely]]
        return ptr->TabBarOverlineSize;
    else
        return {};
}
void ImGuiStylePtr::_SetTabBarOverlineSize(real_t x)
{
    ptr->TabBarOverlineSize = x;
}
real_t ImGuiStylePtr::_GetTableAngledHeadersAngle()
{
    if (ptr) [[likely]]
        return ptr->TableAngledHeadersAngle;
    else
        return {};
}
void ImGuiStylePtr::_SetTableAngledHeadersAngle(real_t x)
{
    ptr->TableAngledHeadersAngle = x;
}
Vector2 ImGuiStylePtr::_GetTableAngledHeadersTextAlign()
{
    if (ptr) [[likely]]
        return ToVector2(ptr->TableAngledHeadersTextAlign);
    else
        return {};
}
void ImGuiStylePtr::_SetTableAngledHeadersTextAlign(Vector2 x)
{
    ptr->TableAngledHeadersTextAlign = {static_cast<float>(x.x), static_cast<float>(x.y)};
}
ImGui::Dir ImGuiStylePtr::_GetColorButtonPosition()
{
    if (ptr) [[likely]]
        return static_cast<ImGui::Dir>(ptr->ColorButtonPosition);
    else
        return {};
}
void ImGuiStylePtr::_SetColorButtonPosition(ImGui::Dir x)
{
    ptr->ColorButtonPosition = static_cast<ImGuiDir>(x);
}
Vector2 ImGuiStylePtr::_GetButtonTextAlign()
{
    if (ptr) [[likely]]
        return ToVector2(ptr->ButtonTextAlign);
    else
        return {};
}
void ImGuiStylePtr::_SetButtonTextAlign(Vector2 x)
{
    ptr->ButtonTextAlign = {static_cast<float>(x.x), static_cast<float>(x.y)};
}
Vector2 ImGuiStylePtr::_GetSelectableTextAlign()
{
    if (ptr) [[likely]]
        return ToVector2(ptr->SelectableTextAlign);
    else
        return {};
}
void ImGuiStylePtr::_SetSelectableTextAlign(Vector2 x)
{
    ptr->SelectableTextAlign = {static_cast<float>(x.x), static_cast<float>(x.y)};
}
real_t ImGuiStylePtr::_GetSeparatorTextBorderSize()
{
    if (ptr) [[likely]]
        return ptr->SeparatorTextBorderSize;
    else
        return {};
}
void ImGuiStylePtr::_SetSeparatorTextBorderSize(real_t x)
{
    ptr->SeparatorTextBorderSize = x;
}
Vector2 ImGuiStylePtr::_GetSeparatorTextAlign()
{
    if (ptr) [[likely]]
        return ToVector2(ptr->SeparatorTextAlign);
    else
        return {};
}
void ImGuiStylePtr::_SetSeparatorTextAlign(Vector2 x)
{
    ptr->SeparatorTextAlign = {static_cast<float>(x.x), static_cast<float>(x.y)};
}
Vector2 ImGuiStylePtr::_GetSeparatorTextPadding()
{
    if (ptr) [[likely]]
        return ToVector2(ptr->SeparatorTextPadding);
    else
        return {};
}
void ImGuiStylePtr::_SetSeparatorTextPadding(Vector2 x)
{
    ptr->SeparatorTextPadding = {static_cast<float>(x.x), static_cast<float>(x.y)};
}
Vector2 ImGuiStylePtr::_GetDisplayWindowPadding()
{
    if (ptr) [[likely]]
        return ToVector2(ptr->DisplayWindowPadding);
    else
        return {};
}
void ImGuiStylePtr::_SetDisplayWindowPadding(Vector2 x)
{
    ptr->DisplayWindowPadding = {static_cast<float>(x.x), static_cast<float>(x.y)};
}
Vector2 ImGuiStylePtr::_GetDisplaySafeAreaPadding()
{
    if (ptr) [[likely]]
        return ToVector2(ptr->DisplaySafeAreaPadding);
    else
        return {};
}
void ImGuiStylePtr::_SetDisplaySafeAreaPadding(Vector2 x)
{
    ptr->DisplaySafeAreaPadding = {static_cast<float>(x.x), static_cast<float>(x.y)};
}
real_t ImGuiStylePtr::_GetDockingSeparatorSize()
{
    if (ptr) [[likely]]
        return ptr->DockingSeparatorSize;
    else
        return {};
}
void ImGuiStylePtr::_SetDockingSeparatorSize(real_t x)
{
    ptr->DockingSeparatorSize = x;
}
real_t ImGuiStylePtr::_GetMouseCursorScale()
{
    if (ptr) [[likely]]
        return ptr->MouseCursorScale;
    else
        return {};
}
void ImGuiStylePtr::_SetMouseCursorScale(real_t x)
{
    ptr->MouseCursorScale = x;
}
bool ImGuiStylePtr::_GetAntiAliasedLines()
{
    if (ptr) [[likely]]
        return ptr->AntiAliasedLines;
    else
        return {};
}
void ImGuiStylePtr::_SetAntiAliasedLines(bool x)
{
    ptr->AntiAliasedLines = x;
}
bool ImGuiStylePtr::_GetAntiAliasedLinesUseTex()
{
    if (ptr) [[likely]]
        return ptr->AntiAliasedLinesUseTex;
    else
        return {};
}
void ImGuiStylePtr::_SetAntiAliasedLinesUseTex(bool x)
{
    ptr->AntiAliasedLinesUseTex = x;
}
bool ImGuiStylePtr::_GetAntiAliasedFill()
{
    if (ptr) [[likely]]
        return ptr->AntiAliasedFill;
    else
        return {};
}
void ImGuiStylePtr::_SetAntiAliasedFill(bool x)
{
    ptr->AntiAliasedFill = x;
}
real_t ImGuiStylePtr::_GetCurveTessellationTol()
{
    if (ptr) [[likely]]
        return ptr->CurveTessellationTol;
    else
        return {};
}
void ImGuiStylePtr::_SetCurveTessellationTol(real_t x)
{
    ptr->CurveTessellationTol = x;
}
real_t ImGuiStylePtr::_GetCircleTessellationMaxError()
{
    if (ptr) [[likely]]
        return ptr->CircleTessellationMaxError;
    else
        return {};
}
void ImGuiStylePtr::_SetCircleTessellationMaxError(real_t x)
{
    ptr->CircleTessellationMaxError = x;
}
PackedColorArray ImGuiStylePtr::_GetColors()
{
    if (ptr) [[likely]]
        return ToPackedColorArray(ptr->Colors, ImGuiCol_COUNT);
    else
        return {};
}
void ImGuiStylePtr::_SetColors(PackedColorArray x)
{
    FromPackedColorArray(x, ptr->Colors);
}
real_t ImGuiStylePtr::_GetHoverStationaryDelay()
{
    if (ptr) [[likely]]
        return ptr->HoverStationaryDelay;
    else
        return {};
}
void ImGuiStylePtr::_SetHoverStationaryDelay(real_t x)
{
    ptr->HoverStationaryDelay = x;
}
real_t ImGuiStylePtr::_GetHoverDelayShort()
{
    if (ptr) [[likely]]
        return ptr->HoverDelayShort;
    else
        return {};
}
void ImGuiStylePtr::_SetHoverDelayShort(real_t x)
{
    ptr->HoverDelayShort = x;
}
real_t ImGuiStylePtr::_GetHoverDelayNormal()
{
    if (ptr) [[likely]]
        return ptr->HoverDelayNormal;
    else
        return {};
}
void ImGuiStylePtr::_SetHoverDelayNormal(real_t x)
{
    ptr->HoverDelayNormal = x;
}
BitField<ImGui::HoveredFlags> ImGuiStylePtr::_GetHoverFlagsForTooltipMouse()
{
    if (ptr) [[likely]]
        return ptr->HoverFlagsForTooltipMouse;
    else
        return 0;
}
void ImGuiStylePtr::_SetHoverFlagsForTooltipMouse(BitField<ImGui::HoveredFlags> x)
{
    ptr->HoverFlagsForTooltipMouse = x;
}
BitField<ImGui::HoveredFlags> ImGuiStylePtr::_GetHoverFlagsForTooltipNav()
{
    if (ptr) [[likely]]
        return ptr->HoverFlagsForTooltipNav;
    else
        return 0;
}
void ImGuiStylePtr::_SetHoverFlagsForTooltipNav(BitField<ImGui::HoveredFlags> x)
{
    ptr->HoverFlagsForTooltipNav = x;
}
void ImGuiIOPtr::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("_GetConfigFlags"), &ImGuiIOPtr::_GetConfigFlags);
    ClassDB::bind_method(D_METHOD("_SetConfigFlags", "x"), &ImGuiIOPtr::_SetConfigFlags);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "ConfigFlags"), "_SetConfigFlags", "_GetConfigFlags");
    ClassDB::bind_method(D_METHOD("_GetBackendFlags"), &ImGuiIOPtr::_GetBackendFlags);
    ClassDB::bind_method(D_METHOD("_SetBackendFlags", "x"), &ImGuiIOPtr::_SetBackendFlags);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "BackendFlags"), "_SetBackendFlags", "_GetBackendFlags");
    ClassDB::bind_method(D_METHOD("_GetDisplaySize"), &ImGuiIOPtr::_GetDisplaySize);
    ClassDB::bind_method(D_METHOD("_SetDisplaySize", "x"), &ImGuiIOPtr::_SetDisplaySize);
    ADD_PROPERTY(PropertyInfo(Variant::VECTOR2, "DisplaySize"), "_SetDisplaySize", "_GetDisplaySize");
    ClassDB::bind_method(D_METHOD("_GetDeltaTime"), &ImGuiIOPtr::_GetDeltaTime);
    ClassDB::bind_method(D_METHOD("_SetDeltaTime", "x"), &ImGuiIOPtr::_SetDeltaTime);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "DeltaTime"), "_SetDeltaTime", "_GetDeltaTime");
    ClassDB::bind_method(D_METHOD("_GetIniSavingRate"), &ImGuiIOPtr::_GetIniSavingRate);
    ClassDB::bind_method(D_METHOD("_SetIniSavingRate", "x"), &ImGuiIOPtr::_SetIniSavingRate);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "IniSavingRate"), "_SetIniSavingRate", "_GetIniSavingRate");
    ClassDB::bind_method(D_METHOD("_GetFontGlobalScale"), &ImGuiIOPtr::_GetFontGlobalScale);
    ClassDB::bind_method(D_METHOD("_SetFontGlobalScale", "x"), &ImGuiIOPtr::_SetFontGlobalScale);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "FontGlobalScale"), "_SetFontGlobalScale", "_GetFontGlobalScale");
    ClassDB::bind_method(D_METHOD("_GetFontAllowUserScaling"), &ImGuiIOPtr::_GetFontAllowUserScaling);
    ClassDB::bind_method(D_METHOD("_SetFontAllowUserScaling", "x"), &ImGuiIOPtr::_SetFontAllowUserScaling);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "FontAllowUserScaling"),
                 "_SetFontAllowUserScaling",
                 "_GetFontAllowUserScaling");
    ClassDB::bind_method(D_METHOD("_GetFontDefault"), &ImGuiIOPtr::_GetFontDefault);
    ClassDB::bind_method(D_METHOD("_SetFontDefault", "x"), &ImGuiIOPtr::_SetFontDefault);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "FontDefault"), "_SetFontDefault", "_GetFontDefault");
    ClassDB::bind_method(D_METHOD("_GetDisplayFramebufferScale"), &ImGuiIOPtr::_GetDisplayFramebufferScale);
    ClassDB::bind_method(D_METHOD("_SetDisplayFramebufferScale", "x"), &ImGuiIOPtr::_SetDisplayFramebufferScale);
    ADD_PROPERTY(PropertyInfo(Variant::VECTOR2, "DisplayFramebufferScale"),
                 "_SetDisplayFramebufferScale",
                 "_GetDisplayFramebufferScale");
    ClassDB::bind_method(D_METHOD("_GetConfigNavSwapGamepadButtons"), &ImGuiIOPtr::_GetConfigNavSwapGamepadButtons);
    ClassDB::bind_method(D_METHOD("_SetConfigNavSwapGamepadButtons", "x"),
                         &ImGuiIOPtr::_SetConfigNavSwapGamepadButtons);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigNavSwapGamepadButtons"),
                 "_SetConfigNavSwapGamepadButtons",
                 "_GetConfigNavSwapGamepadButtons");
    ClassDB::bind_method(D_METHOD("_GetConfigNavMoveSetMousePos"), &ImGuiIOPtr::_GetConfigNavMoveSetMousePos);
    ClassDB::bind_method(D_METHOD("_SetConfigNavMoveSetMousePos", "x"), &ImGuiIOPtr::_SetConfigNavMoveSetMousePos);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigNavMoveSetMousePos"),
                 "_SetConfigNavMoveSetMousePos",
                 "_GetConfigNavMoveSetMousePos");
    ClassDB::bind_method(D_METHOD("_GetConfigNavCaptureKeyboard"), &ImGuiIOPtr::_GetConfigNavCaptureKeyboard);
    ClassDB::bind_method(D_METHOD("_SetConfigNavCaptureKeyboard", "x"), &ImGuiIOPtr::_SetConfigNavCaptureKeyboard);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigNavCaptureKeyboard"),
                 "_SetConfigNavCaptureKeyboard",
                 "_GetConfigNavCaptureKeyboard");
    ClassDB::bind_method(D_METHOD("_GetConfigNavEscapeClearFocusItem"), &ImGuiIOPtr::_GetConfigNavEscapeClearFocusItem);
    ClassDB::bind_method(D_METHOD("_SetConfigNavEscapeClearFocusItem", "x"),
                         &ImGuiIOPtr::_SetConfigNavEscapeClearFocusItem);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigNavEscapeClearFocusItem"),
                 "_SetConfigNavEscapeClearFocusItem",
                 "_GetConfigNavEscapeClearFocusItem");
    ClassDB::bind_method(D_METHOD("_GetConfigNavEscapeClearFocusWindow"),
                         &ImGuiIOPtr::_GetConfigNavEscapeClearFocusWindow);
    ClassDB::bind_method(D_METHOD("_SetConfigNavEscapeClearFocusWindow", "x"),
                         &ImGuiIOPtr::_SetConfigNavEscapeClearFocusWindow);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigNavEscapeClearFocusWindow"),
                 "_SetConfigNavEscapeClearFocusWindow",
                 "_GetConfigNavEscapeClearFocusWindow");
    ClassDB::bind_method(D_METHOD("_GetConfigNavCursorVisibleAuto"), &ImGuiIOPtr::_GetConfigNavCursorVisibleAuto);
    ClassDB::bind_method(D_METHOD("_SetConfigNavCursorVisibleAuto", "x"), &ImGuiIOPtr::_SetConfigNavCursorVisibleAuto);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigNavCursorVisibleAuto"),
                 "_SetConfigNavCursorVisibleAuto",
                 "_GetConfigNavCursorVisibleAuto");
    ClassDB::bind_method(D_METHOD("_GetConfigNavCursorVisibleAlways"), &ImGuiIOPtr::_GetConfigNavCursorVisibleAlways);
    ClassDB::bind_method(D_METHOD("_SetConfigNavCursorVisibleAlways", "x"),
                         &ImGuiIOPtr::_SetConfigNavCursorVisibleAlways);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigNavCursorVisibleAlways"),
                 "_SetConfigNavCursorVisibleAlways",
                 "_GetConfigNavCursorVisibleAlways");
    ClassDB::bind_method(D_METHOD("_GetConfigDockingNoSplit"), &ImGuiIOPtr::_GetConfigDockingNoSplit);
    ClassDB::bind_method(D_METHOD("_SetConfigDockingNoSplit", "x"), &ImGuiIOPtr::_SetConfigDockingNoSplit);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigDockingNoSplit"),
                 "_SetConfigDockingNoSplit",
                 "_GetConfigDockingNoSplit");
    ClassDB::bind_method(D_METHOD("_GetConfigDockingWithShift"), &ImGuiIOPtr::_GetConfigDockingWithShift);
    ClassDB::bind_method(D_METHOD("_SetConfigDockingWithShift", "x"), &ImGuiIOPtr::_SetConfigDockingWithShift);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigDockingWithShift"),
                 "_SetConfigDockingWithShift",
                 "_GetConfigDockingWithShift");
    ClassDB::bind_method(D_METHOD("_GetConfigDockingAlwaysTabBar"), &ImGuiIOPtr::_GetConfigDockingAlwaysTabBar);
    ClassDB::bind_method(D_METHOD("_SetConfigDockingAlwaysTabBar", "x"), &ImGuiIOPtr::_SetConfigDockingAlwaysTabBar);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigDockingAlwaysTabBar"),
                 "_SetConfigDockingAlwaysTabBar",
                 "_GetConfigDockingAlwaysTabBar");
    ClassDB::bind_method(D_METHOD("_GetConfigDockingTransparentPayload"),
                         &ImGuiIOPtr::_GetConfigDockingTransparentPayload);
    ClassDB::bind_method(D_METHOD("_SetConfigDockingTransparentPayload", "x"),
                         &ImGuiIOPtr::_SetConfigDockingTransparentPayload);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigDockingTransparentPayload"),
                 "_SetConfigDockingTransparentPayload",
                 "_GetConfigDockingTransparentPayload");
    ClassDB::bind_method(D_METHOD("_GetConfigViewportsNoAutoMerge"), &ImGuiIOPtr::_GetConfigViewportsNoAutoMerge);
    ClassDB::bind_method(D_METHOD("_SetConfigViewportsNoAutoMerge", "x"), &ImGuiIOPtr::_SetConfigViewportsNoAutoMerge);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigViewportsNoAutoMerge"),
                 "_SetConfigViewportsNoAutoMerge",
                 "_GetConfigViewportsNoAutoMerge");
    ClassDB::bind_method(D_METHOD("_GetConfigViewportsNoTaskBarIcon"), &ImGuiIOPtr::_GetConfigViewportsNoTaskBarIcon);
    ClassDB::bind_method(D_METHOD("_SetConfigViewportsNoTaskBarIcon", "x"),
                         &ImGuiIOPtr::_SetConfigViewportsNoTaskBarIcon);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigViewportsNoTaskBarIcon"),
                 "_SetConfigViewportsNoTaskBarIcon",
                 "_GetConfigViewportsNoTaskBarIcon");
    ClassDB::bind_method(D_METHOD("_GetConfigViewportsNoDecoration"), &ImGuiIOPtr::_GetConfigViewportsNoDecoration);
    ClassDB::bind_method(D_METHOD("_SetConfigViewportsNoDecoration", "x"),
                         &ImGuiIOPtr::_SetConfigViewportsNoDecoration);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigViewportsNoDecoration"),
                 "_SetConfigViewportsNoDecoration",
                 "_GetConfigViewportsNoDecoration");
    ClassDB::bind_method(D_METHOD("_GetConfigViewportsNoDefaultParent"),
                         &ImGuiIOPtr::_GetConfigViewportsNoDefaultParent);
    ClassDB::bind_method(D_METHOD("_SetConfigViewportsNoDefaultParent", "x"),
                         &ImGuiIOPtr::_SetConfigViewportsNoDefaultParent);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigViewportsNoDefaultParent"),
                 "_SetConfigViewportsNoDefaultParent",
                 "_GetConfigViewportsNoDefaultParent");
    ClassDB::bind_method(D_METHOD("_GetMouseDrawCursor"), &ImGuiIOPtr::_GetMouseDrawCursor);
    ClassDB::bind_method(D_METHOD("_SetMouseDrawCursor", "x"), &ImGuiIOPtr::_SetMouseDrawCursor);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "MouseDrawCursor"), "_SetMouseDrawCursor", "_GetMouseDrawCursor");
    ClassDB::bind_method(D_METHOD("_GetConfigMacOSXBehaviors"), &ImGuiIOPtr::_GetConfigMacOSXBehaviors);
    ClassDB::bind_method(D_METHOD("_SetConfigMacOSXBehaviors", "x"), &ImGuiIOPtr::_SetConfigMacOSXBehaviors);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigMacOSXBehaviors"),
                 "_SetConfigMacOSXBehaviors",
                 "_GetConfigMacOSXBehaviors");
    ClassDB::bind_method(D_METHOD("_GetConfigInputTrickleEventQueue"), &ImGuiIOPtr::_GetConfigInputTrickleEventQueue);
    ClassDB::bind_method(D_METHOD("_SetConfigInputTrickleEventQueue", "x"),
                         &ImGuiIOPtr::_SetConfigInputTrickleEventQueue);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigInputTrickleEventQueue"),
                 "_SetConfigInputTrickleEventQueue",
                 "_GetConfigInputTrickleEventQueue");
    ClassDB::bind_method(D_METHOD("_GetConfigInputTextCursorBlink"), &ImGuiIOPtr::_GetConfigInputTextCursorBlink);
    ClassDB::bind_method(D_METHOD("_SetConfigInputTextCursorBlink", "x"), &ImGuiIOPtr::_SetConfigInputTextCursorBlink);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigInputTextCursorBlink"),
                 "_SetConfigInputTextCursorBlink",
                 "_GetConfigInputTextCursorBlink");
    ClassDB::bind_method(D_METHOD("_GetConfigInputTextEnterKeepActive"),
                         &ImGuiIOPtr::_GetConfigInputTextEnterKeepActive);
    ClassDB::bind_method(D_METHOD("_SetConfigInputTextEnterKeepActive", "x"),
                         &ImGuiIOPtr::_SetConfigInputTextEnterKeepActive);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigInputTextEnterKeepActive"),
                 "_SetConfigInputTextEnterKeepActive",
                 "_GetConfigInputTextEnterKeepActive");
    ClassDB::bind_method(D_METHOD("_GetConfigDragClickToInputText"), &ImGuiIOPtr::_GetConfigDragClickToInputText);
    ClassDB::bind_method(D_METHOD("_SetConfigDragClickToInputText", "x"), &ImGuiIOPtr::_SetConfigDragClickToInputText);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigDragClickToInputText"),
                 "_SetConfigDragClickToInputText",
                 "_GetConfigDragClickToInputText");
    ClassDB::bind_method(D_METHOD("_GetConfigWindowsResizeFromEdges"), &ImGuiIOPtr::_GetConfigWindowsResizeFromEdges);
    ClassDB::bind_method(D_METHOD("_SetConfigWindowsResizeFromEdges", "x"),
                         &ImGuiIOPtr::_SetConfigWindowsResizeFromEdges);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigWindowsResizeFromEdges"),
                 "_SetConfigWindowsResizeFromEdges",
                 "_GetConfigWindowsResizeFromEdges");
    ClassDB::bind_method(D_METHOD("_GetConfigWindowsMoveFromTitleBarOnly"),
                         &ImGuiIOPtr::_GetConfigWindowsMoveFromTitleBarOnly);
    ClassDB::bind_method(D_METHOD("_SetConfigWindowsMoveFromTitleBarOnly", "x"),
                         &ImGuiIOPtr::_SetConfigWindowsMoveFromTitleBarOnly);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigWindowsMoveFromTitleBarOnly"),
                 "_SetConfigWindowsMoveFromTitleBarOnly",
                 "_GetConfigWindowsMoveFromTitleBarOnly");
    ClassDB::bind_method(D_METHOD("_GetConfigWindowsCopyContentsWithCtrlC"),
                         &ImGuiIOPtr::_GetConfigWindowsCopyContentsWithCtrlC);
    ClassDB::bind_method(D_METHOD("_SetConfigWindowsCopyContentsWithCtrlC", "x"),
                         &ImGuiIOPtr::_SetConfigWindowsCopyContentsWithCtrlC);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigWindowsCopyContentsWithCtrlC"),
                 "_SetConfigWindowsCopyContentsWithCtrlC",
                 "_GetConfigWindowsCopyContentsWithCtrlC");
    ClassDB::bind_method(D_METHOD("_GetConfigScrollbarScrollByPage"), &ImGuiIOPtr::_GetConfigScrollbarScrollByPage);
    ClassDB::bind_method(D_METHOD("_SetConfigScrollbarScrollByPage", "x"),
                         &ImGuiIOPtr::_SetConfigScrollbarScrollByPage);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigScrollbarScrollByPage"),
                 "_SetConfigScrollbarScrollByPage",
                 "_GetConfigScrollbarScrollByPage");
    ClassDB::bind_method(D_METHOD("_GetConfigMemoryCompactTimer"), &ImGuiIOPtr::_GetConfigMemoryCompactTimer);
    ClassDB::bind_method(D_METHOD("_SetConfigMemoryCompactTimer", "x"), &ImGuiIOPtr::_SetConfigMemoryCompactTimer);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "ConfigMemoryCompactTimer"),
                 "_SetConfigMemoryCompactTimer",
                 "_GetConfigMemoryCompactTimer");
    ClassDB::bind_method(D_METHOD("_GetMouseDoubleClickTime"), &ImGuiIOPtr::_GetMouseDoubleClickTime);
    ClassDB::bind_method(D_METHOD("_SetMouseDoubleClickTime", "x"), &ImGuiIOPtr::_SetMouseDoubleClickTime);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "MouseDoubleClickTime"),
                 "_SetMouseDoubleClickTime",
                 "_GetMouseDoubleClickTime");
    ClassDB::bind_method(D_METHOD("_GetMouseDoubleClickMaxDist"), &ImGuiIOPtr::_GetMouseDoubleClickMaxDist);
    ClassDB::bind_method(D_METHOD("_SetMouseDoubleClickMaxDist", "x"), &ImGuiIOPtr::_SetMouseDoubleClickMaxDist);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "MouseDoubleClickMaxDist"),
                 "_SetMouseDoubleClickMaxDist",
                 "_GetMouseDoubleClickMaxDist");
    ClassDB::bind_method(D_METHOD("_GetMouseDragThreshold"), &ImGuiIOPtr::_GetMouseDragThreshold);
    ClassDB::bind_method(D_METHOD("_SetMouseDragThreshold", "x"), &ImGuiIOPtr::_SetMouseDragThreshold);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "MouseDragThreshold"), "_SetMouseDragThreshold", "_GetMouseDragThreshold");
    ClassDB::bind_method(D_METHOD("_GetKeyRepeatDelay"), &ImGuiIOPtr::_GetKeyRepeatDelay);
    ClassDB::bind_method(D_METHOD("_SetKeyRepeatDelay", "x"), &ImGuiIOPtr::_SetKeyRepeatDelay);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "KeyRepeatDelay"), "_SetKeyRepeatDelay", "_GetKeyRepeatDelay");
    ClassDB::bind_method(D_METHOD("_GetKeyRepeatRate"), &ImGuiIOPtr::_GetKeyRepeatRate);
    ClassDB::bind_method(D_METHOD("_SetKeyRepeatRate", "x"), &ImGuiIOPtr::_SetKeyRepeatRate);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "KeyRepeatRate"), "_SetKeyRepeatRate", "_GetKeyRepeatRate");
    ClassDB::bind_method(D_METHOD("_GetConfigErrorRecovery"), &ImGuiIOPtr::_GetConfigErrorRecovery);
    ClassDB::bind_method(D_METHOD("_SetConfigErrorRecovery", "x"), &ImGuiIOPtr::_SetConfigErrorRecovery);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigErrorRecovery"),
                 "_SetConfigErrorRecovery",
                 "_GetConfigErrorRecovery");
    ClassDB::bind_method(D_METHOD("_GetConfigErrorRecoveryEnableAssert"),
                         &ImGuiIOPtr::_GetConfigErrorRecoveryEnableAssert);
    ClassDB::bind_method(D_METHOD("_SetConfigErrorRecoveryEnableAssert", "x"),
                         &ImGuiIOPtr::_SetConfigErrorRecoveryEnableAssert);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigErrorRecoveryEnableAssert"),
                 "_SetConfigErrorRecoveryEnableAssert",
                 "_GetConfigErrorRecoveryEnableAssert");
    ClassDB::bind_method(D_METHOD("_GetConfigErrorRecoveryEnableDebugLog"),
                         &ImGuiIOPtr::_GetConfigErrorRecoveryEnableDebugLog);
    ClassDB::bind_method(D_METHOD("_SetConfigErrorRecoveryEnableDebugLog", "x"),
                         &ImGuiIOPtr::_SetConfigErrorRecoveryEnableDebugLog);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigErrorRecoveryEnableDebugLog"),
                 "_SetConfigErrorRecoveryEnableDebugLog",
                 "_GetConfigErrorRecoveryEnableDebugLog");
    ClassDB::bind_method(D_METHOD("_GetConfigErrorRecoveryEnableTooltip"),
                         &ImGuiIOPtr::_GetConfigErrorRecoveryEnableTooltip);
    ClassDB::bind_method(D_METHOD("_SetConfigErrorRecoveryEnableTooltip", "x"),
                         &ImGuiIOPtr::_SetConfigErrorRecoveryEnableTooltip);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigErrorRecoveryEnableTooltip"),
                 "_SetConfigErrorRecoveryEnableTooltip",
                 "_GetConfigErrorRecoveryEnableTooltip");
    ClassDB::bind_method(D_METHOD("_GetConfigDebugIsDebuggerPresent"), &ImGuiIOPtr::_GetConfigDebugIsDebuggerPresent);
    ClassDB::bind_method(D_METHOD("_SetConfigDebugIsDebuggerPresent", "x"),
                         &ImGuiIOPtr::_SetConfigDebugIsDebuggerPresent);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigDebugIsDebuggerPresent"),
                 "_SetConfigDebugIsDebuggerPresent",
                 "_GetConfigDebugIsDebuggerPresent");
    ClassDB::bind_method(D_METHOD("_GetConfigDebugHighlightIdConflicts"),
                         &ImGuiIOPtr::_GetConfigDebugHighlightIdConflicts);
    ClassDB::bind_method(D_METHOD("_SetConfigDebugHighlightIdConflicts", "x"),
                         &ImGuiIOPtr::_SetConfigDebugHighlightIdConflicts);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigDebugHighlightIdConflicts"),
                 "_SetConfigDebugHighlightIdConflicts",
                 "_GetConfigDebugHighlightIdConflicts");
    ClassDB::bind_method(D_METHOD("_GetConfigDebugBeginReturnValueOnce"),
                         &ImGuiIOPtr::_GetConfigDebugBeginReturnValueOnce);
    ClassDB::bind_method(D_METHOD("_SetConfigDebugBeginReturnValueOnce", "x"),
                         &ImGuiIOPtr::_SetConfigDebugBeginReturnValueOnce);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigDebugBeginReturnValueOnce"),
                 "_SetConfigDebugBeginReturnValueOnce",
                 "_GetConfigDebugBeginReturnValueOnce");
    ClassDB::bind_method(D_METHOD("_GetConfigDebugBeginReturnValueLoop"),
                         &ImGuiIOPtr::_GetConfigDebugBeginReturnValueLoop);
    ClassDB::bind_method(D_METHOD("_SetConfigDebugBeginReturnValueLoop", "x"),
                         &ImGuiIOPtr::_SetConfigDebugBeginReturnValueLoop);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigDebugBeginReturnValueLoop"),
                 "_SetConfigDebugBeginReturnValueLoop",
                 "_GetConfigDebugBeginReturnValueLoop");
    ClassDB::bind_method(D_METHOD("_GetConfigDebugIgnoreFocusLoss"), &ImGuiIOPtr::_GetConfigDebugIgnoreFocusLoss);
    ClassDB::bind_method(D_METHOD("_SetConfigDebugIgnoreFocusLoss", "x"), &ImGuiIOPtr::_SetConfigDebugIgnoreFocusLoss);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigDebugIgnoreFocusLoss"),
                 "_SetConfigDebugIgnoreFocusLoss",
                 "_GetConfigDebugIgnoreFocusLoss");
    ClassDB::bind_method(D_METHOD("_GetConfigDebugIniSettings"), &ImGuiIOPtr::_GetConfigDebugIniSettings);
    ClassDB::bind_method(D_METHOD("_SetConfigDebugIniSettings", "x"), &ImGuiIOPtr::_SetConfigDebugIniSettings);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "ConfigDebugIniSettings"),
                 "_SetConfigDebugIniSettings",
                 "_GetConfigDebugIniSettings");
    ClassDB::bind_method(D_METHOD("_GetWantCaptureMouse"), &ImGuiIOPtr::_GetWantCaptureMouse);
    ClassDB::bind_method(D_METHOD("_SetWantCaptureMouse", "x"), &ImGuiIOPtr::_SetWantCaptureMouse);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "WantCaptureMouse"), "_SetWantCaptureMouse", "_GetWantCaptureMouse");
    ClassDB::bind_method(D_METHOD("_GetWantCaptureKeyboard"), &ImGuiIOPtr::_GetWantCaptureKeyboard);
    ClassDB::bind_method(D_METHOD("_SetWantCaptureKeyboard", "x"), &ImGuiIOPtr::_SetWantCaptureKeyboard);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "WantCaptureKeyboard"),
                 "_SetWantCaptureKeyboard",
                 "_GetWantCaptureKeyboard");
    ClassDB::bind_method(D_METHOD("_GetWantTextInput"), &ImGuiIOPtr::_GetWantTextInput);
    ClassDB::bind_method(D_METHOD("_SetWantTextInput", "x"), &ImGuiIOPtr::_SetWantTextInput);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "WantTextInput"), "_SetWantTextInput", "_GetWantTextInput");
    ClassDB::bind_method(D_METHOD("_GetWantSetMousePos"), &ImGuiIOPtr::_GetWantSetMousePos);
    ClassDB::bind_method(D_METHOD("_SetWantSetMousePos", "x"), &ImGuiIOPtr::_SetWantSetMousePos);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "WantSetMousePos"), "_SetWantSetMousePos", "_GetWantSetMousePos");
    ClassDB::bind_method(D_METHOD("_GetWantSaveIniSettings"), &ImGuiIOPtr::_GetWantSaveIniSettings);
    ClassDB::bind_method(D_METHOD("_SetWantSaveIniSettings", "x"), &ImGuiIOPtr::_SetWantSaveIniSettings);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "WantSaveIniSettings"),
                 "_SetWantSaveIniSettings",
                 "_GetWantSaveIniSettings");
    ClassDB::bind_method(D_METHOD("_GetNavActive"), &ImGuiIOPtr::_GetNavActive);
    ClassDB::bind_method(D_METHOD("_SetNavActive", "x"), &ImGuiIOPtr::_SetNavActive);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "NavActive"), "_SetNavActive", "_GetNavActive");
    ClassDB::bind_method(D_METHOD("_GetNavVisible"), &ImGuiIOPtr::_GetNavVisible);
    ClassDB::bind_method(D_METHOD("_SetNavVisible", "x"), &ImGuiIOPtr::_SetNavVisible);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "NavVisible"), "_SetNavVisible", "_GetNavVisible");
    ClassDB::bind_method(D_METHOD("_GetFramerate"), &ImGuiIOPtr::_GetFramerate);
    ClassDB::bind_method(D_METHOD("_SetFramerate", "x"), &ImGuiIOPtr::_SetFramerate);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "Framerate"), "_SetFramerate", "_GetFramerate");
    ClassDB::bind_method(D_METHOD("_GetMetricsRenderVertices"), &ImGuiIOPtr::_GetMetricsRenderVertices);
    ClassDB::bind_method(D_METHOD("_SetMetricsRenderVertices", "x"), &ImGuiIOPtr::_SetMetricsRenderVertices);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "MetricsRenderVertices"),
                 "_SetMetricsRenderVertices",
                 "_GetMetricsRenderVertices");
    ClassDB::bind_method(D_METHOD("_GetMetricsRenderIndices"), &ImGuiIOPtr::_GetMetricsRenderIndices);
    ClassDB::bind_method(D_METHOD("_SetMetricsRenderIndices", "x"), &ImGuiIOPtr::_SetMetricsRenderIndices);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "MetricsRenderIndices"),
                 "_SetMetricsRenderIndices",
                 "_GetMetricsRenderIndices");
    ClassDB::bind_method(D_METHOD("_GetMetricsRenderWindows"), &ImGuiIOPtr::_GetMetricsRenderWindows);
    ClassDB::bind_method(D_METHOD("_SetMetricsRenderWindows", "x"), &ImGuiIOPtr::_SetMetricsRenderWindows);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "MetricsRenderWindows"),
                 "_SetMetricsRenderWindows",
                 "_GetMetricsRenderWindows");
    ClassDB::bind_method(D_METHOD("_GetMetricsActiveWindows"), &ImGuiIOPtr::_GetMetricsActiveWindows);
    ClassDB::bind_method(D_METHOD("_SetMetricsActiveWindows", "x"), &ImGuiIOPtr::_SetMetricsActiveWindows);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "MetricsActiveWindows"),
                 "_SetMetricsActiveWindows",
                 "_GetMetricsActiveWindows");
    ClassDB::bind_method(D_METHOD("_GetMouseDelta"), &ImGuiIOPtr::_GetMouseDelta);
    ClassDB::bind_method(D_METHOD("_SetMouseDelta", "x"), &ImGuiIOPtr::_SetMouseDelta);
    ADD_PROPERTY(PropertyInfo(Variant::VECTOR2, "MouseDelta"), "_SetMouseDelta", "_GetMouseDelta");
    ClassDB::bind_method(D_METHOD("_GetMousePos"), &ImGuiIOPtr::_GetMousePos);
    ClassDB::bind_method(D_METHOD("_SetMousePos", "x"), &ImGuiIOPtr::_SetMousePos);
    ADD_PROPERTY(PropertyInfo(Variant::VECTOR2, "MousePos"), "_SetMousePos", "_GetMousePos");
    ClassDB::bind_method(D_METHOD("_GetMouseWheel"), &ImGuiIOPtr::_GetMouseWheel);
    ClassDB::bind_method(D_METHOD("_SetMouseWheel", "x"), &ImGuiIOPtr::_SetMouseWheel);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "MouseWheel"), "_SetMouseWheel", "_GetMouseWheel");
    ClassDB::bind_method(D_METHOD("_GetMouseWheelH"), &ImGuiIOPtr::_GetMouseWheelH);
    ClassDB::bind_method(D_METHOD("_SetMouseWheelH", "x"), &ImGuiIOPtr::_SetMouseWheelH);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "MouseWheelH"), "_SetMouseWheelH", "_GetMouseWheelH");
    ClassDB::bind_method(D_METHOD("_GetMouseSource"), &ImGuiIOPtr::_GetMouseSource);
    ClassDB::bind_method(D_METHOD("_SetMouseSource", "x"), &ImGuiIOPtr::_SetMouseSource);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "MouseSource"), "_SetMouseSource", "_GetMouseSource");
    ClassDB::bind_method(D_METHOD("_GetMouseHoveredViewport"), &ImGuiIOPtr::_GetMouseHoveredViewport);
    ClassDB::bind_method(D_METHOD("_SetMouseHoveredViewport", "x"), &ImGuiIOPtr::_SetMouseHoveredViewport);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "MouseHoveredViewport"),
                 "_SetMouseHoveredViewport",
                 "_GetMouseHoveredViewport");
    ClassDB::bind_method(D_METHOD("_GetKeyCtrl"), &ImGuiIOPtr::_GetKeyCtrl);
    ClassDB::bind_method(D_METHOD("_SetKeyCtrl", "x"), &ImGuiIOPtr::_SetKeyCtrl);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "KeyCtrl"), "_SetKeyCtrl", "_GetKeyCtrl");
    ClassDB::bind_method(D_METHOD("_GetKeyShift"), &ImGuiIOPtr::_GetKeyShift);
    ClassDB::bind_method(D_METHOD("_SetKeyShift", "x"), &ImGuiIOPtr::_SetKeyShift);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "KeyShift"), "_SetKeyShift", "_GetKeyShift");
    ClassDB::bind_method(D_METHOD("_GetKeyAlt"), &ImGuiIOPtr::_GetKeyAlt);
    ClassDB::bind_method(D_METHOD("_SetKeyAlt", "x"), &ImGuiIOPtr::_SetKeyAlt);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "KeyAlt"), "_SetKeyAlt", "_GetKeyAlt");
    ClassDB::bind_method(D_METHOD("_GetKeySuper"), &ImGuiIOPtr::_GetKeySuper);
    ClassDB::bind_method(D_METHOD("_SetKeySuper", "x"), &ImGuiIOPtr::_SetKeySuper);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "KeySuper"), "_SetKeySuper", "_GetKeySuper");
    ClassDB::bind_method(D_METHOD("_GetWantCaptureMouseUnlessPopupClose"),
                         &ImGuiIOPtr::_GetWantCaptureMouseUnlessPopupClose);
    ClassDB::bind_method(D_METHOD("_SetWantCaptureMouseUnlessPopupClose", "x"),
                         &ImGuiIOPtr::_SetWantCaptureMouseUnlessPopupClose);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "WantCaptureMouseUnlessPopupClose"),
                 "_SetWantCaptureMouseUnlessPopupClose",
                 "_GetWantCaptureMouseUnlessPopupClose");
    ClassDB::bind_method(D_METHOD("_GetMousePosPrev"), &ImGuiIOPtr::_GetMousePosPrev);
    ClassDB::bind_method(D_METHOD("_SetMousePosPrev", "x"), &ImGuiIOPtr::_SetMousePosPrev);
    ADD_PROPERTY(PropertyInfo(Variant::VECTOR2, "MousePosPrev"), "_SetMousePosPrev", "_GetMousePosPrev");
    ClassDB::bind_method(D_METHOD("_GetMouseWheelRequestAxisSwap"), &ImGuiIOPtr::_GetMouseWheelRequestAxisSwap);
    ClassDB::bind_method(D_METHOD("_SetMouseWheelRequestAxisSwap", "x"), &ImGuiIOPtr::_SetMouseWheelRequestAxisSwap);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "MouseWheelRequestAxisSwap"),
                 "_SetMouseWheelRequestAxisSwap",
                 "_GetMouseWheelRequestAxisSwap");
    ClassDB::bind_method(D_METHOD("_GetMouseCtrlLeftAsRightClick"), &ImGuiIOPtr::_GetMouseCtrlLeftAsRightClick);
    ClassDB::bind_method(D_METHOD("_SetMouseCtrlLeftAsRightClick", "x"), &ImGuiIOPtr::_SetMouseCtrlLeftAsRightClick);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "MouseCtrlLeftAsRightClick"),
                 "_SetMouseCtrlLeftAsRightClick",
                 "_GetMouseCtrlLeftAsRightClick");
    ClassDB::bind_method(D_METHOD("_GetPenPressure"), &ImGuiIOPtr::_GetPenPressure);
    ClassDB::bind_method(D_METHOD("_SetPenPressure", "x"), &ImGuiIOPtr::_SetPenPressure);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "PenPressure"), "_SetPenPressure", "_GetPenPressure");
    ClassDB::bind_method(D_METHOD("_GetAppFocusLost"), &ImGuiIOPtr::_GetAppFocusLost);
    ClassDB::bind_method(D_METHOD("_SetAppFocusLost", "x"), &ImGuiIOPtr::_SetAppFocusLost);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "AppFocusLost"), "_SetAppFocusLost", "_GetAppFocusLost");
    ClassDB::bind_method(D_METHOD("_GetAppAcceptingEvents"), &ImGuiIOPtr::_GetAppAcceptingEvents);
    ClassDB::bind_method(D_METHOD("_SetAppAcceptingEvents", "x"), &ImGuiIOPtr::_SetAppAcceptingEvents);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "AppAcceptingEvents"), "_SetAppAcceptingEvents", "_GetAppAcceptingEvents");
}
BitField<ImGui::ConfigFlags> ImGuiIOPtr::_GetConfigFlags()
{
    if (ptr) [[likely]]
        return ptr->ConfigFlags;
    else
        return 0;
}
void ImGuiIOPtr::_SetConfigFlags(BitField<ImGui::ConfigFlags> x)
{
    ptr->ConfigFlags = x;
}
BitField<ImGui::BackendFlags> ImGuiIOPtr::_GetBackendFlags()
{
    if (ptr) [[likely]]
        return ptr->BackendFlags;
    else
        return 0;
}
void ImGuiIOPtr::_SetBackendFlags(BitField<ImGui::BackendFlags> x)
{
    ptr->BackendFlags = x;
}
Vector2 ImGuiIOPtr::_GetDisplaySize()
{
    if (ptr) [[likely]]
        return ToVector2(ptr->DisplaySize);
    else
        return {};
}
void ImGuiIOPtr::_SetDisplaySize(Vector2 x)
{
    ptr->DisplaySize = {static_cast<float>(x.x), static_cast<float>(x.y)};
}
real_t ImGuiIOPtr::_GetDeltaTime()
{
    if (ptr) [[likely]]
        return ptr->DeltaTime;
    else
        return {};
}
void ImGuiIOPtr::_SetDeltaTime(real_t x)
{
    ptr->DeltaTime = x;
}
real_t ImGuiIOPtr::_GetIniSavingRate()
{
    if (ptr) [[likely]]
        return ptr->IniSavingRate;
    else
        return {};
}
void ImGuiIOPtr::_SetIniSavingRate(real_t x)
{
    ptr->IniSavingRate = x;
}
real_t ImGuiIOPtr::_GetFontGlobalScale()
{
    if (ptr) [[likely]]
        return ptr->FontGlobalScale;
    else
        return {};
}
void ImGuiIOPtr::_SetFontGlobalScale(real_t x)
{
    ptr->FontGlobalScale = x;
}
bool ImGuiIOPtr::_GetFontAllowUserScaling()
{
    if (ptr) [[likely]]
        return ptr->FontAllowUserScaling;
    else
        return {};
}
void ImGuiIOPtr::_SetFontAllowUserScaling(bool x)
{
    ptr->FontAllowUserScaling = x;
}
int64_t ImGuiIOPtr::_GetFontDefault()
{
    if (ptr) [[likely]]
        return (int64_t)ptr->FontDefault;
    else
        return {};
}
void ImGuiIOPtr::_SetFontDefault(int64_t x)
{
    ptr->FontDefault = (ImFont*)x;
}
Vector2 ImGuiIOPtr::_GetDisplayFramebufferScale()
{
    if (ptr) [[likely]]
        return ToVector2(ptr->DisplayFramebufferScale);
    else
        return {};
}
void ImGuiIOPtr::_SetDisplayFramebufferScale(Vector2 x)
{
    ptr->DisplayFramebufferScale = {static_cast<float>(x.x), static_cast<float>(x.y)};
}
bool ImGuiIOPtr::_GetConfigNavSwapGamepadButtons()
{
    if (ptr) [[likely]]
        return ptr->ConfigNavSwapGamepadButtons;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigNavSwapGamepadButtons(bool x)
{
    ptr->ConfigNavSwapGamepadButtons = x;
}
bool ImGuiIOPtr::_GetConfigNavMoveSetMousePos()
{
    if (ptr) [[likely]]
        return ptr->ConfigNavMoveSetMousePos;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigNavMoveSetMousePos(bool x)
{
    ptr->ConfigNavMoveSetMousePos = x;
}
bool ImGuiIOPtr::_GetConfigNavCaptureKeyboard()
{
    if (ptr) [[likely]]
        return ptr->ConfigNavCaptureKeyboard;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigNavCaptureKeyboard(bool x)
{
    ptr->ConfigNavCaptureKeyboard = x;
}
bool ImGuiIOPtr::_GetConfigNavEscapeClearFocusItem()
{
    if (ptr) [[likely]]
        return ptr->ConfigNavEscapeClearFocusItem;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigNavEscapeClearFocusItem(bool x)
{
    ptr->ConfigNavEscapeClearFocusItem = x;
}
bool ImGuiIOPtr::_GetConfigNavEscapeClearFocusWindow()
{
    if (ptr) [[likely]]
        return ptr->ConfigNavEscapeClearFocusWindow;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigNavEscapeClearFocusWindow(bool x)
{
    ptr->ConfigNavEscapeClearFocusWindow = x;
}
bool ImGuiIOPtr::_GetConfigNavCursorVisibleAuto()
{
    if (ptr) [[likely]]
        return ptr->ConfigNavCursorVisibleAuto;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigNavCursorVisibleAuto(bool x)
{
    ptr->ConfigNavCursorVisibleAuto = x;
}
bool ImGuiIOPtr::_GetConfigNavCursorVisibleAlways()
{
    if (ptr) [[likely]]
        return ptr->ConfigNavCursorVisibleAlways;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigNavCursorVisibleAlways(bool x)
{
    ptr->ConfigNavCursorVisibleAlways = x;
}
bool ImGuiIOPtr::_GetConfigDockingNoSplit()
{
    if (ptr) [[likely]]
        return ptr->ConfigDockingNoSplit;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigDockingNoSplit(bool x)
{
    ptr->ConfigDockingNoSplit = x;
}
bool ImGuiIOPtr::_GetConfigDockingWithShift()
{
    if (ptr) [[likely]]
        return ptr->ConfigDockingWithShift;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigDockingWithShift(bool x)
{
    ptr->ConfigDockingWithShift = x;
}
bool ImGuiIOPtr::_GetConfigDockingAlwaysTabBar()
{
    if (ptr) [[likely]]
        return ptr->ConfigDockingAlwaysTabBar;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigDockingAlwaysTabBar(bool x)
{
    ptr->ConfigDockingAlwaysTabBar = x;
}
bool ImGuiIOPtr::_GetConfigDockingTransparentPayload()
{
    if (ptr) [[likely]]
        return ptr->ConfigDockingTransparentPayload;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigDockingTransparentPayload(bool x)
{
    ptr->ConfigDockingTransparentPayload = x;
}
bool ImGuiIOPtr::_GetConfigViewportsNoAutoMerge()
{
    if (ptr) [[likely]]
        return ptr->ConfigViewportsNoAutoMerge;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigViewportsNoAutoMerge(bool x)
{
    ptr->ConfigViewportsNoAutoMerge = x;
}
bool ImGuiIOPtr::_GetConfigViewportsNoTaskBarIcon()
{
    if (ptr) [[likely]]
        return ptr->ConfigViewportsNoTaskBarIcon;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigViewportsNoTaskBarIcon(bool x)
{
    ptr->ConfigViewportsNoTaskBarIcon = x;
}
bool ImGuiIOPtr::_GetConfigViewportsNoDecoration()
{
    if (ptr) [[likely]]
        return ptr->ConfigViewportsNoDecoration;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigViewportsNoDecoration(bool x)
{
    ptr->ConfigViewportsNoDecoration = x;
}
bool ImGuiIOPtr::_GetConfigViewportsNoDefaultParent()
{
    if (ptr) [[likely]]
        return ptr->ConfigViewportsNoDefaultParent;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigViewportsNoDefaultParent(bool x)
{
    ptr->ConfigViewportsNoDefaultParent = x;
}
bool ImGuiIOPtr::_GetMouseDrawCursor()
{
    if (ptr) [[likely]]
        return ptr->MouseDrawCursor;
    else
        return {};
}
void ImGuiIOPtr::_SetMouseDrawCursor(bool x)
{
    ptr->MouseDrawCursor = x;
}
bool ImGuiIOPtr::_GetConfigMacOSXBehaviors()
{
    if (ptr) [[likely]]
        return ptr->ConfigMacOSXBehaviors;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigMacOSXBehaviors(bool x)
{
    ptr->ConfigMacOSXBehaviors = x;
}
bool ImGuiIOPtr::_GetConfigInputTrickleEventQueue()
{
    if (ptr) [[likely]]
        return ptr->ConfigInputTrickleEventQueue;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigInputTrickleEventQueue(bool x)
{
    ptr->ConfigInputTrickleEventQueue = x;
}
bool ImGuiIOPtr::_GetConfigInputTextCursorBlink()
{
    if (ptr) [[likely]]
        return ptr->ConfigInputTextCursorBlink;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigInputTextCursorBlink(bool x)
{
    ptr->ConfigInputTextCursorBlink = x;
}
bool ImGuiIOPtr::_GetConfigInputTextEnterKeepActive()
{
    if (ptr) [[likely]]
        return ptr->ConfigInputTextEnterKeepActive;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigInputTextEnterKeepActive(bool x)
{
    ptr->ConfigInputTextEnterKeepActive = x;
}
bool ImGuiIOPtr::_GetConfigDragClickToInputText()
{
    if (ptr) [[likely]]
        return ptr->ConfigDragClickToInputText;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigDragClickToInputText(bool x)
{
    ptr->ConfigDragClickToInputText = x;
}
bool ImGuiIOPtr::_GetConfigWindowsResizeFromEdges()
{
    if (ptr) [[likely]]
        return ptr->ConfigWindowsResizeFromEdges;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigWindowsResizeFromEdges(bool x)
{
    ptr->ConfigWindowsResizeFromEdges = x;
}
bool ImGuiIOPtr::_GetConfigWindowsMoveFromTitleBarOnly()
{
    if (ptr) [[likely]]
        return ptr->ConfigWindowsMoveFromTitleBarOnly;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigWindowsMoveFromTitleBarOnly(bool x)
{
    ptr->ConfigWindowsMoveFromTitleBarOnly = x;
}
bool ImGuiIOPtr::_GetConfigWindowsCopyContentsWithCtrlC()
{
    if (ptr) [[likely]]
        return ptr->ConfigWindowsCopyContentsWithCtrlC;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigWindowsCopyContentsWithCtrlC(bool x)
{
    ptr->ConfigWindowsCopyContentsWithCtrlC = x;
}
bool ImGuiIOPtr::_GetConfigScrollbarScrollByPage()
{
    if (ptr) [[likely]]
        return ptr->ConfigScrollbarScrollByPage;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigScrollbarScrollByPage(bool x)
{
    ptr->ConfigScrollbarScrollByPage = x;
}
real_t ImGuiIOPtr::_GetConfigMemoryCompactTimer()
{
    if (ptr) [[likely]]
        return ptr->ConfigMemoryCompactTimer;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigMemoryCompactTimer(real_t x)
{
    ptr->ConfigMemoryCompactTimer = x;
}
real_t ImGuiIOPtr::_GetMouseDoubleClickTime()
{
    if (ptr) [[likely]]
        return ptr->MouseDoubleClickTime;
    else
        return {};
}
void ImGuiIOPtr::_SetMouseDoubleClickTime(real_t x)
{
    ptr->MouseDoubleClickTime = x;
}
real_t ImGuiIOPtr::_GetMouseDoubleClickMaxDist()
{
    if (ptr) [[likely]]
        return ptr->MouseDoubleClickMaxDist;
    else
        return {};
}
void ImGuiIOPtr::_SetMouseDoubleClickMaxDist(real_t x)
{
    ptr->MouseDoubleClickMaxDist = x;
}
real_t ImGuiIOPtr::_GetMouseDragThreshold()
{
    if (ptr) [[likely]]
        return ptr->MouseDragThreshold;
    else
        return {};
}
void ImGuiIOPtr::_SetMouseDragThreshold(real_t x)
{
    ptr->MouseDragThreshold = x;
}
real_t ImGuiIOPtr::_GetKeyRepeatDelay()
{
    if (ptr) [[likely]]
        return ptr->KeyRepeatDelay;
    else
        return {};
}
void ImGuiIOPtr::_SetKeyRepeatDelay(real_t x)
{
    ptr->KeyRepeatDelay = x;
}
real_t ImGuiIOPtr::_GetKeyRepeatRate()
{
    if (ptr) [[likely]]
        return ptr->KeyRepeatRate;
    else
        return {};
}
void ImGuiIOPtr::_SetKeyRepeatRate(real_t x)
{
    ptr->KeyRepeatRate = x;
}
bool ImGuiIOPtr::_GetConfigErrorRecovery()
{
    if (ptr) [[likely]]
        return ptr->ConfigErrorRecovery;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigErrorRecovery(bool x)
{
    ptr->ConfigErrorRecovery = x;
}
bool ImGuiIOPtr::_GetConfigErrorRecoveryEnableAssert()
{
    if (ptr) [[likely]]
        return ptr->ConfigErrorRecoveryEnableAssert;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigErrorRecoveryEnableAssert(bool x)
{
    ptr->ConfigErrorRecoveryEnableAssert = x;
}
bool ImGuiIOPtr::_GetConfigErrorRecoveryEnableDebugLog()
{
    if (ptr) [[likely]]
        return ptr->ConfigErrorRecoveryEnableDebugLog;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigErrorRecoveryEnableDebugLog(bool x)
{
    ptr->ConfigErrorRecoveryEnableDebugLog = x;
}
bool ImGuiIOPtr::_GetConfigErrorRecoveryEnableTooltip()
{
    if (ptr) [[likely]]
        return ptr->ConfigErrorRecoveryEnableTooltip;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigErrorRecoveryEnableTooltip(bool x)
{
    ptr->ConfigErrorRecoveryEnableTooltip = x;
}
bool ImGuiIOPtr::_GetConfigDebugIsDebuggerPresent()
{
    if (ptr) [[likely]]
        return ptr->ConfigDebugIsDebuggerPresent;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigDebugIsDebuggerPresent(bool x)
{
    ptr->ConfigDebugIsDebuggerPresent = x;
}
bool ImGuiIOPtr::_GetConfigDebugHighlightIdConflicts()
{
    if (ptr) [[likely]]
        return ptr->ConfigDebugHighlightIdConflicts;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigDebugHighlightIdConflicts(bool x)
{
    ptr->ConfigDebugHighlightIdConflicts = x;
}
bool ImGuiIOPtr::_GetConfigDebugBeginReturnValueOnce()
{
    if (ptr) [[likely]]
        return ptr->ConfigDebugBeginReturnValueOnce;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigDebugBeginReturnValueOnce(bool x)
{
    ptr->ConfigDebugBeginReturnValueOnce = x;
}
bool ImGuiIOPtr::_GetConfigDebugBeginReturnValueLoop()
{
    if (ptr) [[likely]]
        return ptr->ConfigDebugBeginReturnValueLoop;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigDebugBeginReturnValueLoop(bool x)
{
    ptr->ConfigDebugBeginReturnValueLoop = x;
}
bool ImGuiIOPtr::_GetConfigDebugIgnoreFocusLoss()
{
    if (ptr) [[likely]]
        return ptr->ConfigDebugIgnoreFocusLoss;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigDebugIgnoreFocusLoss(bool x)
{
    ptr->ConfigDebugIgnoreFocusLoss = x;
}
bool ImGuiIOPtr::_GetConfigDebugIniSettings()
{
    if (ptr) [[likely]]
        return ptr->ConfigDebugIniSettings;
    else
        return {};
}
void ImGuiIOPtr::_SetConfigDebugIniSettings(bool x)
{
    ptr->ConfigDebugIniSettings = x;
}
bool ImGuiIOPtr::_GetWantCaptureMouse()
{
    if (ptr) [[likely]]
        return ptr->WantCaptureMouse;
    else
        return {};
}
void ImGuiIOPtr::_SetWantCaptureMouse(bool x)
{
    ptr->WantCaptureMouse = x;
}
bool ImGuiIOPtr::_GetWantCaptureKeyboard()
{
    if (ptr) [[likely]]
        return ptr->WantCaptureKeyboard;
    else
        return {};
}
void ImGuiIOPtr::_SetWantCaptureKeyboard(bool x)
{
    ptr->WantCaptureKeyboard = x;
}
bool ImGuiIOPtr::_GetWantTextInput()
{
    if (ptr) [[likely]]
        return ptr->WantTextInput;
    else
        return {};
}
void ImGuiIOPtr::_SetWantTextInput(bool x)
{
    ptr->WantTextInput = x;
}
bool ImGuiIOPtr::_GetWantSetMousePos()
{
    if (ptr) [[likely]]
        return ptr->WantSetMousePos;
    else
        return {};
}
void ImGuiIOPtr::_SetWantSetMousePos(bool x)
{
    ptr->WantSetMousePos = x;
}
bool ImGuiIOPtr::_GetWantSaveIniSettings()
{
    if (ptr) [[likely]]
        return ptr->WantSaveIniSettings;
    else
        return {};
}
void ImGuiIOPtr::_SetWantSaveIniSettings(bool x)
{
    ptr->WantSaveIniSettings = x;
}
bool ImGuiIOPtr::_GetNavActive()
{
    if (ptr) [[likely]]
        return ptr->NavActive;
    else
        return {};
}
void ImGuiIOPtr::_SetNavActive(bool x)
{
    ptr->NavActive = x;
}
bool ImGuiIOPtr::_GetNavVisible()
{
    if (ptr) [[likely]]
        return ptr->NavVisible;
    else
        return {};
}
void ImGuiIOPtr::_SetNavVisible(bool x)
{
    ptr->NavVisible = x;
}
real_t ImGuiIOPtr::_GetFramerate()
{
    if (ptr) [[likely]]
        return ptr->Framerate;
    else
        return {};
}
void ImGuiIOPtr::_SetFramerate(real_t x)
{
    ptr->Framerate = x;
}
int ImGuiIOPtr::_GetMetricsRenderVertices()
{
    if (ptr) [[likely]]
        return ptr->MetricsRenderVertices;
    else
        return {};
}
void ImGuiIOPtr::_SetMetricsRenderVertices(int x)
{
    ptr->MetricsRenderVertices = x;
}
int ImGuiIOPtr::_GetMetricsRenderIndices()
{
    if (ptr) [[likely]]
        return ptr->MetricsRenderIndices;
    else
        return {};
}
void ImGuiIOPtr::_SetMetricsRenderIndices(int x)
{
    ptr->MetricsRenderIndices = x;
}
int ImGuiIOPtr::_GetMetricsRenderWindows()
{
    if (ptr) [[likely]]
        return ptr->MetricsRenderWindows;
    else
        return {};
}
void ImGuiIOPtr::_SetMetricsRenderWindows(int x)
{
    ptr->MetricsRenderWindows = x;
}
int ImGuiIOPtr::_GetMetricsActiveWindows()
{
    if (ptr) [[likely]]
        return ptr->MetricsActiveWindows;
    else
        return {};
}
void ImGuiIOPtr::_SetMetricsActiveWindows(int x)
{
    ptr->MetricsActiveWindows = x;
}
Vector2 ImGuiIOPtr::_GetMouseDelta()
{
    if (ptr) [[likely]]
        return ToVector2(ptr->MouseDelta);
    else
        return {};
}
void ImGuiIOPtr::_SetMouseDelta(Vector2 x)
{
    ptr->MouseDelta = {static_cast<float>(x.x), static_cast<float>(x.y)};
}
Vector2 ImGuiIOPtr::_GetMousePos()
{
    if (ptr) [[likely]]
        return ToVector2(ptr->MousePos);
    else
        return {};
}
void ImGuiIOPtr::_SetMousePos(Vector2 x)
{
    ptr->MousePos = {static_cast<float>(x.x), static_cast<float>(x.y)};
}
real_t ImGuiIOPtr::_GetMouseWheel()
{
    if (ptr) [[likely]]
        return ptr->MouseWheel;
    else
        return {};
}
void ImGuiIOPtr::_SetMouseWheel(real_t x)
{
    ptr->MouseWheel = x;
}
real_t ImGuiIOPtr::_GetMouseWheelH()
{
    if (ptr) [[likely]]
        return ptr->MouseWheelH;
    else
        return {};
}
void ImGuiIOPtr::_SetMouseWheelH(real_t x)
{
    ptr->MouseWheelH = x;
}
ImGui::MouseSource ImGuiIOPtr::_GetMouseSource()
{
    if (ptr) [[likely]]
        return static_cast<ImGui::MouseSource>(ptr->MouseSource);
    else
        return {};
}
void ImGuiIOPtr::_SetMouseSource(ImGui::MouseSource x)
{
    ptr->MouseSource = static_cast<ImGuiMouseSource>(x);
}
uint32_t ImGuiIOPtr::_GetMouseHoveredViewport()
{
    if (ptr) [[likely]]
        return ptr->MouseHoveredViewport;
    else
        return {};
}
void ImGuiIOPtr::_SetMouseHoveredViewport(uint32_t x)
{
    ptr->MouseHoveredViewport = x;
}
bool ImGuiIOPtr::_GetKeyCtrl()
{
    if (ptr) [[likely]]
        return ptr->KeyCtrl;
    else
        return {};
}
void ImGuiIOPtr::_SetKeyCtrl(bool x)
{
    ptr->KeyCtrl = x;
}
bool ImGuiIOPtr::_GetKeyShift()
{
    if (ptr) [[likely]]
        return ptr->KeyShift;
    else
        return {};
}
void ImGuiIOPtr::_SetKeyShift(bool x)
{
    ptr->KeyShift = x;
}
bool ImGuiIOPtr::_GetKeyAlt()
{
    if (ptr) [[likely]]
        return ptr->KeyAlt;
    else
        return {};
}
void ImGuiIOPtr::_SetKeyAlt(bool x)
{
    ptr->KeyAlt = x;
}
bool ImGuiIOPtr::_GetKeySuper()
{
    if (ptr) [[likely]]
        return ptr->KeySuper;
    else
        return {};
}
void ImGuiIOPtr::_SetKeySuper(bool x)
{
    ptr->KeySuper = x;
}
bool ImGuiIOPtr::_GetWantCaptureMouseUnlessPopupClose()
{
    if (ptr) [[likely]]
        return ptr->WantCaptureMouseUnlessPopupClose;
    else
        return {};
}
void ImGuiIOPtr::_SetWantCaptureMouseUnlessPopupClose(bool x)
{
    ptr->WantCaptureMouseUnlessPopupClose = x;
}
Vector2 ImGuiIOPtr::_GetMousePosPrev()
{
    if (ptr) [[likely]]
        return ToVector2(ptr->MousePosPrev);
    else
        return {};
}
void ImGuiIOPtr::_SetMousePosPrev(Vector2 x)
{
    ptr->MousePosPrev = {static_cast<float>(x.x), static_cast<float>(x.y)};
}
bool ImGuiIOPtr::_GetMouseWheelRequestAxisSwap()
{
    if (ptr) [[likely]]
        return ptr->MouseWheelRequestAxisSwap;
    else
        return {};
}
void ImGuiIOPtr::_SetMouseWheelRequestAxisSwap(bool x)
{
    ptr->MouseWheelRequestAxisSwap = x;
}
bool ImGuiIOPtr::_GetMouseCtrlLeftAsRightClick()
{
    if (ptr) [[likely]]
        return ptr->MouseCtrlLeftAsRightClick;
    else
        return {};
}
void ImGuiIOPtr::_SetMouseCtrlLeftAsRightClick(bool x)
{
    ptr->MouseCtrlLeftAsRightClick = x;
}
real_t ImGuiIOPtr::_GetPenPressure()
{
    if (ptr) [[likely]]
        return ptr->PenPressure;
    else
        return {};
}
void ImGuiIOPtr::_SetPenPressure(real_t x)
{
    ptr->PenPressure = x;
}
bool ImGuiIOPtr::_GetAppFocusLost()
{
    if (ptr) [[likely]]
        return ptr->AppFocusLost;
    else
        return {};
}
void ImGuiIOPtr::_SetAppFocusLost(bool x)
{
    ptr->AppFocusLost = x;
}
bool ImGuiIOPtr::_GetAppAcceptingEvents()
{
    if (ptr) [[likely]]
        return ptr->AppAcceptingEvents;
    else
        return {};
}
void ImGuiIOPtr::_SetAppAcceptingEvents(bool x)
{
    ptr->AppAcceptingEvents = x;
}
void ImGuiWindowClassPtr::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("_GetClassId"), &ImGuiWindowClassPtr::_GetClassId);
    ClassDB::bind_method(D_METHOD("_SetClassId", "x"), &ImGuiWindowClassPtr::_SetClassId);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "ClassId"), "_SetClassId", "_GetClassId");
    ClassDB::bind_method(D_METHOD("_GetParentViewportId"), &ImGuiWindowClassPtr::_GetParentViewportId);
    ClassDB::bind_method(D_METHOD("_SetParentViewportId", "x"), &ImGuiWindowClassPtr::_SetParentViewportId);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "ParentViewportId"), "_SetParentViewportId", "_GetParentViewportId");
    ClassDB::bind_method(D_METHOD("_GetFocusRouteParentWindowId"), &ImGuiWindowClassPtr::_GetFocusRouteParentWindowId);
    ClassDB::bind_method(D_METHOD("_SetFocusRouteParentWindowId", "x"),
                         &ImGuiWindowClassPtr::_SetFocusRouteParentWindowId);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "FocusRouteParentWindowId"),
                 "_SetFocusRouteParentWindowId",
                 "_GetFocusRouteParentWindowId");
    ClassDB::bind_method(D_METHOD("_GetViewportFlagsOverrideSet"), &ImGuiWindowClassPtr::_GetViewportFlagsOverrideSet);
    ClassDB::bind_method(D_METHOD("_SetViewportFlagsOverrideSet", "x"),
                         &ImGuiWindowClassPtr::_SetViewportFlagsOverrideSet);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "ViewportFlagsOverrideSet"),
                 "_SetViewportFlagsOverrideSet",
                 "_GetViewportFlagsOverrideSet");
    ClassDB::bind_method(D_METHOD("_GetViewportFlagsOverrideClear"),
                         &ImGuiWindowClassPtr::_GetViewportFlagsOverrideClear);
    ClassDB::bind_method(D_METHOD("_SetViewportFlagsOverrideClear", "x"),
                         &ImGuiWindowClassPtr::_SetViewportFlagsOverrideClear);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "ViewportFlagsOverrideClear"),
                 "_SetViewportFlagsOverrideClear",
                 "_GetViewportFlagsOverrideClear");
    ClassDB::bind_method(D_METHOD("_GetTabItemFlagsOverrideSet"), &ImGuiWindowClassPtr::_GetTabItemFlagsOverrideSet);
    ClassDB::bind_method(D_METHOD("_SetTabItemFlagsOverrideSet", "x"),
                         &ImGuiWindowClassPtr::_SetTabItemFlagsOverrideSet);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "TabItemFlagsOverrideSet"),
                 "_SetTabItemFlagsOverrideSet",
                 "_GetTabItemFlagsOverrideSet");
    ClassDB::bind_method(D_METHOD("_GetDockNodeFlagsOverrideSet"), &ImGuiWindowClassPtr::_GetDockNodeFlagsOverrideSet);
    ClassDB::bind_method(D_METHOD("_SetDockNodeFlagsOverrideSet", "x"),
                         &ImGuiWindowClassPtr::_SetDockNodeFlagsOverrideSet);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "DockNodeFlagsOverrideSet"),
                 "_SetDockNodeFlagsOverrideSet",
                 "_GetDockNodeFlagsOverrideSet");
    ClassDB::bind_method(D_METHOD("_GetDockingAlwaysTabBar"), &ImGuiWindowClassPtr::_GetDockingAlwaysTabBar);
    ClassDB::bind_method(D_METHOD("_SetDockingAlwaysTabBar", "x"), &ImGuiWindowClassPtr::_SetDockingAlwaysTabBar);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "DockingAlwaysTabBar"),
                 "_SetDockingAlwaysTabBar",
                 "_GetDockingAlwaysTabBar");
    ClassDB::bind_method(D_METHOD("_GetDockingAllowUnclassed"), &ImGuiWindowClassPtr::_GetDockingAllowUnclassed);
    ClassDB::bind_method(D_METHOD("_SetDockingAllowUnclassed", "x"), &ImGuiWindowClassPtr::_SetDockingAllowUnclassed);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "DockingAllowUnclassed"),
                 "_SetDockingAllowUnclassed",
                 "_GetDockingAllowUnclassed");
}
uint32_t ImGuiWindowClassPtr::_GetClassId()
{
    if (ptr) [[likely]]
        return ptr->ClassId;
    else
        return {};
}
void ImGuiWindowClassPtr::_SetClassId(uint32_t x)
{
    ptr->ClassId = x;
}
uint32_t ImGuiWindowClassPtr::_GetParentViewportId()
{
    if (ptr) [[likely]]
        return ptr->ParentViewportId;
    else
        return {};
}
void ImGuiWindowClassPtr::_SetParentViewportId(uint32_t x)
{
    ptr->ParentViewportId = x;
}
uint32_t ImGuiWindowClassPtr::_GetFocusRouteParentWindowId()
{
    if (ptr) [[likely]]
        return ptr->FocusRouteParentWindowId;
    else
        return {};
}
void ImGuiWindowClassPtr::_SetFocusRouteParentWindowId(uint32_t x)
{
    ptr->FocusRouteParentWindowId = x;
}
BitField<ImGui::ViewportFlags> ImGuiWindowClassPtr::_GetViewportFlagsOverrideSet()
{
    if (ptr) [[likely]]
        return ptr->ViewportFlagsOverrideSet;
    else
        return 0;
}
void ImGuiWindowClassPtr::_SetViewportFlagsOverrideSet(BitField<ImGui::ViewportFlags> x)
{
    ptr->ViewportFlagsOverrideSet = x;
}
BitField<ImGui::ViewportFlags> ImGuiWindowClassPtr::_GetViewportFlagsOverrideClear()
{
    if (ptr) [[likely]]
        return ptr->ViewportFlagsOverrideClear;
    else
        return 0;
}
void ImGuiWindowClassPtr::_SetViewportFlagsOverrideClear(BitField<ImGui::ViewportFlags> x)
{
    ptr->ViewportFlagsOverrideClear = x;
}
BitField<ImGui::TabItemFlags> ImGuiWindowClassPtr::_GetTabItemFlagsOverrideSet()
{
    if (ptr) [[likely]]
        return ptr->TabItemFlagsOverrideSet;
    else
        return 0;
}
void ImGuiWindowClassPtr::_SetTabItemFlagsOverrideSet(BitField<ImGui::TabItemFlags> x)
{
    ptr->TabItemFlagsOverrideSet = x;
}
BitField<ImGui::DockNodeFlags> ImGuiWindowClassPtr::_GetDockNodeFlagsOverrideSet()
{
    if (ptr) [[likely]]
        return ptr->DockNodeFlagsOverrideSet;
    else
        return 0;
}
void ImGuiWindowClassPtr::_SetDockNodeFlagsOverrideSet(BitField<ImGui::DockNodeFlags> x)
{
    ptr->DockNodeFlagsOverrideSet = x;
}
bool ImGuiWindowClassPtr::_GetDockingAlwaysTabBar()
{
    if (ptr) [[likely]]
        return ptr->DockingAlwaysTabBar;
    else
        return {};
}
void ImGuiWindowClassPtr::_SetDockingAlwaysTabBar(bool x)
{
    ptr->DockingAlwaysTabBar = x;
}
bool ImGuiWindowClassPtr::_GetDockingAllowUnclassed()
{
    if (ptr) [[likely]]
        return ptr->DockingAllowUnclassed;
    else
        return {};
}
void ImGuiWindowClassPtr::_SetDockingAllowUnclassed(bool x)
{
    ptr->DockingAllowUnclassed = x;
}
void ImGuiListClipperPtr::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("_GetDisplayStart"), &ImGuiListClipperPtr::_GetDisplayStart);
    ClassDB::bind_method(D_METHOD("_SetDisplayStart", "x"), &ImGuiListClipperPtr::_SetDisplayStart);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "DisplayStart"), "_SetDisplayStart", "_GetDisplayStart");
    ClassDB::bind_method(D_METHOD("_GetDisplayEnd"), &ImGuiListClipperPtr::_GetDisplayEnd);
    ClassDB::bind_method(D_METHOD("_SetDisplayEnd", "x"), &ImGuiListClipperPtr::_SetDisplayEnd);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "DisplayEnd"), "_SetDisplayEnd", "_GetDisplayEnd");
    ClassDB::bind_method(D_METHOD("_GetItemsCount"), &ImGuiListClipperPtr::_GetItemsCount);
    ClassDB::bind_method(D_METHOD("_SetItemsCount", "x"), &ImGuiListClipperPtr::_SetItemsCount);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "ItemsCount"), "_SetItemsCount", "_GetItemsCount");
    ClassDB::bind_method(D_METHOD("_GetItemsHeight"), &ImGuiListClipperPtr::_GetItemsHeight);
    ClassDB::bind_method(D_METHOD("_SetItemsHeight", "x"), &ImGuiListClipperPtr::_SetItemsHeight);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "ItemsHeight"), "_SetItemsHeight", "_GetItemsHeight");
    ClassDB::bind_method(D_METHOD("_GetStartPosY"), &ImGuiListClipperPtr::_GetStartPosY);
    ClassDB::bind_method(D_METHOD("_SetStartPosY", "x"), &ImGuiListClipperPtr::_SetStartPosY);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "StartPosY"), "_SetStartPosY", "_GetStartPosY");
    ClassDB::bind_method(D_METHOD("_GetStartSeekOffsetY"), &ImGuiListClipperPtr::_GetStartSeekOffsetY);
    ClassDB::bind_method(D_METHOD("_SetStartSeekOffsetY", "x"), &ImGuiListClipperPtr::_SetStartSeekOffsetY);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "StartSeekOffsetY"), "_SetStartSeekOffsetY", "_GetStartSeekOffsetY");
}
int ImGuiListClipperPtr::_GetDisplayStart()
{
    if (ptr) [[likely]]
        return ptr->DisplayStart;
    else
        return {};
}
void ImGuiListClipperPtr::_SetDisplayStart(int x)
{
    ptr->DisplayStart = x;
}
int ImGuiListClipperPtr::_GetDisplayEnd()
{
    if (ptr) [[likely]]
        return ptr->DisplayEnd;
    else
        return {};
}
void ImGuiListClipperPtr::_SetDisplayEnd(int x)
{
    ptr->DisplayEnd = x;
}
int ImGuiListClipperPtr::_GetItemsCount()
{
    if (ptr) [[likely]]
        return ptr->ItemsCount;
    else
        return {};
}
void ImGuiListClipperPtr::_SetItemsCount(int x)
{
    ptr->ItemsCount = x;
}
real_t ImGuiListClipperPtr::_GetItemsHeight()
{
    if (ptr) [[likely]]
        return ptr->ItemsHeight;
    else
        return {};
}
void ImGuiListClipperPtr::_SetItemsHeight(real_t x)
{
    ptr->ItemsHeight = x;
}
real_t ImGuiListClipperPtr::_GetStartPosY()
{
    if (ptr) [[likely]]
        return ptr->StartPosY;
    else
        return {};
}
void ImGuiListClipperPtr::_SetStartPosY(real_t x)
{
    ptr->StartPosY = x;
}
double ImGuiListClipperPtr::_GetStartSeekOffsetY()
{
    if (ptr) [[likely]]
        return ptr->StartSeekOffsetY;
    else
        return {};
}
void ImGuiListClipperPtr::_SetStartSeekOffsetY(double x)
{
    ptr->StartSeekOffsetY = x;
}
void ImGuiMultiSelectIOPtr::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("_GetRequests"), &ImGuiMultiSelectIOPtr::_GetRequests);
    ClassDB::bind_method(D_METHOD("_SetRequests", "x"), &ImGuiMultiSelectIOPtr::_SetRequests);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "Requests"), "_SetRequests", "_GetRequests");
    ClassDB::bind_method(D_METHOD("_GetRangeSrcItem"), &ImGuiMultiSelectIOPtr::_GetRangeSrcItem);
    ClassDB::bind_method(D_METHOD("_SetRangeSrcItem", "x"), &ImGuiMultiSelectIOPtr::_SetRangeSrcItem);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "RangeSrcItem"), "_SetRangeSrcItem", "_GetRangeSrcItem");
    ClassDB::bind_method(D_METHOD("_GetNavIdItem"), &ImGuiMultiSelectIOPtr::_GetNavIdItem);
    ClassDB::bind_method(D_METHOD("_SetNavIdItem", "x"), &ImGuiMultiSelectIOPtr::_SetNavIdItem);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "NavIdItem"), "_SetNavIdItem", "_GetNavIdItem");
    ClassDB::bind_method(D_METHOD("_GetNavIdSelected"), &ImGuiMultiSelectIOPtr::_GetNavIdSelected);
    ClassDB::bind_method(D_METHOD("_SetNavIdSelected", "x"), &ImGuiMultiSelectIOPtr::_SetNavIdSelected);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "NavIdSelected"), "_SetNavIdSelected", "_GetNavIdSelected");
    ClassDB::bind_method(D_METHOD("_GetRangeSrcReset"), &ImGuiMultiSelectIOPtr::_GetRangeSrcReset);
    ClassDB::bind_method(D_METHOD("_SetRangeSrcReset", "x"), &ImGuiMultiSelectIOPtr::_SetRangeSrcReset);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "RangeSrcReset"), "_SetRangeSrcReset", "_GetRangeSrcReset");
    ClassDB::bind_method(D_METHOD("_GetItemsCount"), &ImGuiMultiSelectIOPtr::_GetItemsCount);
    ClassDB::bind_method(D_METHOD("_SetItemsCount", "x"), &ImGuiMultiSelectIOPtr::_SetItemsCount);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "ItemsCount"), "_SetItemsCount", "_GetItemsCount");
}
Array ImGuiMultiSelectIOPtr::_GetRequests()
{
    if (ptr) [[likely]]
        return FromImVector(ptr->Requests);
    else
        return {};
}
void ImGuiMultiSelectIOPtr::_SetRequests(Array x)
{
    ptr->Requests = ToImVector(x);
}
int64_t ImGuiMultiSelectIOPtr::_GetRangeSrcItem()
{
    if (ptr) [[likely]]
        return ptr->RangeSrcItem;
    else
        return {};
}
void ImGuiMultiSelectIOPtr::_SetRangeSrcItem(int64_t x)
{
    ptr->RangeSrcItem = x;
}
int64_t ImGuiMultiSelectIOPtr::_GetNavIdItem()
{
    if (ptr) [[likely]]
        return ptr->NavIdItem;
    else
        return {};
}
void ImGuiMultiSelectIOPtr::_SetNavIdItem(int64_t x)
{
    ptr->NavIdItem = x;
}
bool ImGuiMultiSelectIOPtr::_GetNavIdSelected()
{
    if (ptr) [[likely]]
        return ptr->NavIdSelected;
    else
        return {};
}
void ImGuiMultiSelectIOPtr::_SetNavIdSelected(bool x)
{
    ptr->NavIdSelected = x;
}
bool ImGuiMultiSelectIOPtr::_GetRangeSrcReset()
{
    if (ptr) [[likely]]
        return ptr->RangeSrcReset;
    else
        return {};
}
void ImGuiMultiSelectIOPtr::_SetRangeSrcReset(bool x)
{
    ptr->RangeSrcReset = x;
}
int ImGuiMultiSelectIOPtr::_GetItemsCount()
{
    if (ptr) [[likely]]
        return ptr->ItemsCount;
    else
        return {};
}
void ImGuiMultiSelectIOPtr::_SetItemsCount(int x)
{
    ptr->ItemsCount = x;
}
void ImGuiSelectionRequestPtr::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("_GetType"), &ImGuiSelectionRequestPtr::_GetType);
    ClassDB::bind_method(D_METHOD("_SetType", "x"), &ImGuiSelectionRequestPtr::_SetType);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "Type"), "_SetType", "_GetType");
    ClassDB::bind_method(D_METHOD("_GetSelected"), &ImGuiSelectionRequestPtr::_GetSelected);
    ClassDB::bind_method(D_METHOD("_SetSelected", "x"), &ImGuiSelectionRequestPtr::_SetSelected);
    ADD_PROPERTY(PropertyInfo(Variant::BOOL, "Selected"), "_SetSelected", "_GetSelected");
    ClassDB::bind_method(D_METHOD("_GetRangeDirection"), &ImGuiSelectionRequestPtr::_GetRangeDirection);
    ClassDB::bind_method(D_METHOD("_SetRangeDirection", "x"), &ImGuiSelectionRequestPtr::_SetRangeDirection);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "RangeDirection"), "_SetRangeDirection", "_GetRangeDirection");
    ClassDB::bind_method(D_METHOD("_GetRangeFirstItem"), &ImGuiSelectionRequestPtr::_GetRangeFirstItem);
    ClassDB::bind_method(D_METHOD("_SetRangeFirstItem", "x"), &ImGuiSelectionRequestPtr::_SetRangeFirstItem);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "RangeFirstItem"), "_SetRangeFirstItem", "_GetRangeFirstItem");
    ClassDB::bind_method(D_METHOD("_GetRangeLastItem"), &ImGuiSelectionRequestPtr::_GetRangeLastItem);
    ClassDB::bind_method(D_METHOD("_SetRangeLastItem", "x"), &ImGuiSelectionRequestPtr::_SetRangeLastItem);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "RangeLastItem"), "_SetRangeLastItem", "_GetRangeLastItem");
}
ImGui::SelectionRequestType ImGuiSelectionRequestPtr::_GetType()
{
    if (ptr) [[likely]]
        return static_cast<ImGui::SelectionRequestType>(ptr->Type);
    else
        return {};
}
void ImGuiSelectionRequestPtr::_SetType(ImGui::SelectionRequestType x)
{
    ptr->Type = static_cast<ImGuiSelectionRequestType>(x);
}
bool ImGuiSelectionRequestPtr::_GetSelected()
{
    if (ptr) [[likely]]
        return ptr->Selected;
    else
        return {};
}
void ImGuiSelectionRequestPtr::_SetSelected(bool x)
{
    ptr->Selected = x;
}
int8_t ImGuiSelectionRequestPtr::_GetRangeDirection()
{
    if (ptr) [[likely]]
        return ptr->RangeDirection;
    else
        return {};
}
void ImGuiSelectionRequestPtr::_SetRangeDirection(int8_t x)
{
    ptr->RangeDirection = x;
}
int64_t ImGuiSelectionRequestPtr::_GetRangeFirstItem()
{
    if (ptr) [[likely]]
        return ptr->RangeFirstItem;
    else
        return {};
}
void ImGuiSelectionRequestPtr::_SetRangeFirstItem(int64_t x)
{
    ptr->RangeFirstItem = x;
}
int64_t ImGuiSelectionRequestPtr::_GetRangeLastItem()
{
    if (ptr) [[likely]]
        return ptr->RangeLastItem;
    else
        return {};
}
void ImGuiSelectionRequestPtr::_SetRangeLastItem(int64_t x)
{
    ptr->RangeLastItem = x;
}
void ImDrawListPtr::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("_GetFlags"), &ImDrawListPtr::_GetFlags);
    ClassDB::bind_method(D_METHOD("_SetFlags", "x"), &ImDrawListPtr::_SetFlags);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "Flags"), "_SetFlags", "_GetFlags");
    ClassDB::bind_method(D_METHOD("_Get_FringeScale"), &ImDrawListPtr::_Get_FringeScale);
    ClassDB::bind_method(D_METHOD("_Set_FringeScale", "x"), &ImDrawListPtr::_Set_FringeScale);
    ADD_PROPERTY(PropertyInfo(Variant::INT, "_FringeScale"), "_Set_FringeScale", "_Get_FringeScale");
}
BitField<ImGui::DrawListFlags> ImDrawListPtr::_GetFlags()
{
    if (ptr) [[likely]]
        return ptr->Flags;
    else
        return 0;
}
void ImDrawListPtr::_SetFlags(BitField<ImGui::DrawListFlags> x)
{
    ptr->Flags = x;
}
real_t ImDrawListPtr::_Get_FringeScale()
{
    if (ptr) [[likely]]
        return ptr->_FringeScale;
    else
        return {};
}
void ImDrawListPtr::_Set_FringeScale(real_t x)
{
    ptr->_FringeScale = x;
}
Ref<ImGuiIOPtr> ImGui::GetIO()
{
    Ref<ImGuiIOPtr> rv;
    rv.instantiate();
    rv->_SetPtr(::ImGui_GetIO());
    return rv;
}
Ref<ImGuiStylePtr> ImGui::GetStyle()
{
    Ref<ImGuiStylePtr> rv;
    rv.instantiate();
    rv->_SetPtr(::ImGui_GetStyle());
    return rv;
}
void ImGui::ShowDemoWindow(Array p_open)
{
    ::ImGui_ShowDemoWindow(p_open.size() == 0 ? nullptr : (bool*)GdsPtr<bool>(p_open));
}
void ImGui::ShowMetricsWindow(Array p_open)
{
    ::ImGui_ShowMetricsWindow(p_open.size() == 0 ? nullptr : (bool*)GdsPtr<bool>(p_open));
}
void ImGui::ShowDebugLogWindow(Array p_open)
{
    ::ImGui_ShowDebugLogWindow(p_open.size() == 0 ? nullptr : (bool*)GdsPtr<bool>(p_open));
}
void ImGui::ShowIDStackToolWindow()
{
    ::ImGui_ShowIDStackToolWindow();
}
void ImGui::ShowIDStackToolWindowEx(Array p_open)
{
    ::ImGui_ShowIDStackToolWindowEx(p_open.size() == 0 ? nullptr : (bool*)GdsPtr<bool>(p_open));
}
void ImGui::ShowAboutWindow(Array p_open)
{
    ::ImGui_ShowAboutWindow(p_open.size() == 0 ? nullptr : (bool*)GdsPtr<bool>(p_open));
}
void ImGui::ShowStyleEditor(Ref<ImGuiStylePtr> ref)
{
    ::ImGui_ShowStyleEditor(ref->_GetPtr());
}
bool ImGui::ShowStyleSelector(StringName label)
{
    return ::ImGui_ShowStyleSelector(sn_to_cstr(label));
}
void ImGui::ShowFontSelector(StringName label)
{
    ::ImGui_ShowFontSelector(sn_to_cstr(label));
}
void ImGui::ShowUserGuide()
{
    ::ImGui_ShowUserGuide();
}
String ImGui::GetVersion()
{
    return ::ImGui_GetVersion();
}
void ImGui::StyleColorsDark(Ref<ImGuiStylePtr> dst)
{
    ::ImGui_StyleColorsDark(dst->_GetPtr());
}
void ImGui::StyleColorsLight(Ref<ImGuiStylePtr> dst)
{
    ::ImGui_StyleColorsLight(dst->_GetPtr());
}
void ImGui::StyleColorsClassic(Ref<ImGuiStylePtr> dst)
{
    ::ImGui_StyleColorsClassic(dst->_GetPtr());
}
bool ImGui::Begin(StringName name, Array p_open, BitField<ImGui::WindowFlags> flags)
{
    return ::ImGui_Begin(sn_to_cstr(name), p_open.size() == 0 ? nullptr : (bool*)GdsPtr<bool>(p_open), flags);
}
void ImGui::End()
{
    ::ImGui_End();
}
bool ImGui::BeginChild(StringName str_id, Vector2 size, BitField<ImGui::ChildFlags> child_flags,
                       BitField<ImGui::WindowFlags> window_flags)
{
    return ::ImGui_BeginChild(sn_to_cstr(str_id),
                              {static_cast<float>(size.x), static_cast<float>(size.y)},
                              child_flags,
                              window_flags);
}
bool ImGui::BeginChildID(uint32_t id, Vector2 size, BitField<ImGui::ChildFlags> child_flags,
                         BitField<ImGui::WindowFlags> window_flags)
{
    return ::ImGui_BeginChildID(id,
                                {static_cast<float>(size.x), static_cast<float>(size.y)},
                                child_flags,
                                window_flags);
}
void ImGui::EndChild()
{
    ::ImGui_EndChild();
}
bool ImGui::IsWindowAppearing()
{
    return ::ImGui_IsWindowAppearing();
}
bool ImGui::IsWindowCollapsed()
{
    return ::ImGui_IsWindowCollapsed();
}
bool ImGui::IsWindowFocused(BitField<ImGui::FocusedFlags> flags)
{
    return ::ImGui_IsWindowFocused(flags);
}
bool ImGui::IsWindowHovered(BitField<ImGui::HoveredFlags> flags)
{
    return ::ImGui_IsWindowHovered(flags);
}
Ref<ImDrawListPtr> ImGui::GetWindowDrawList()
{
    Ref<ImDrawListPtr> rv;
    rv.instantiate();
    rv->_SetPtr(::ImGui_GetWindowDrawList());
    return rv;
}
real_t ImGui::GetWindowDpiScale()
{
    return ::ImGui_GetWindowDpiScale();
}
Vector2 ImGui::GetWindowPos()
{
    return ToVector2(::ImGui_GetWindowPos());
}
Vector2 ImGui::GetWindowSize()
{
    return ToVector2(::ImGui_GetWindowSize());
}
real_t ImGui::GetWindowWidth()
{
    return ::ImGui_GetWindowWidth();
}
real_t ImGui::GetWindowHeight()
{
    return ::ImGui_GetWindowHeight();
}
void ImGui::SetNextWindowPos(Vector2 pos, ImGui::Cond cond)
{
    ::ImGui_SetNextWindowPos({static_cast<float>(pos.x), static_cast<float>(pos.y)}, cond);
}
void ImGui::SetNextWindowPosEx(Vector2 pos, ImGui::Cond cond, Vector2 pivot)
{
    ::ImGui_SetNextWindowPosEx({static_cast<float>(pos.x), static_cast<float>(pos.y)},
                               cond,
                               {static_cast<float>(pivot.x), static_cast<float>(pivot.y)});
}
void ImGui::SetNextWindowSize(Vector2 size, ImGui::Cond cond)
{
    ::ImGui_SetNextWindowSize({static_cast<float>(size.x), static_cast<float>(size.y)}, cond);
}
void ImGui::SetNextWindowContentSize(Vector2 size)
{
    ::ImGui_SetNextWindowContentSize({static_cast<float>(size.x), static_cast<float>(size.y)});
}
void ImGui::SetNextWindowCollapsed(bool collapsed, ImGui::Cond cond)
{
    ::ImGui_SetNextWindowCollapsed(collapsed, cond);
}
void ImGui::SetNextWindowFocus()
{
    ::ImGui_SetNextWindowFocus();
}
void ImGui::SetNextWindowScroll(Vector2 scroll)
{
    ::ImGui_SetNextWindowScroll({static_cast<float>(scroll.x), static_cast<float>(scroll.y)});
}
void ImGui::SetNextWindowBgAlpha(real_t alpha)
{
    ::ImGui_SetNextWindowBgAlpha(alpha);
}
void ImGui::SetNextWindowViewport(uint32_t viewport_id)
{
    ::ImGui_SetNextWindowViewport(viewport_id);
}
void ImGui::SetWindowPos(Vector2 pos, ImGui::Cond cond)
{
    ::ImGui_SetWindowPos({static_cast<float>(pos.x), static_cast<float>(pos.y)}, cond);
}
void ImGui::SetWindowSize(Vector2 size, ImGui::Cond cond)
{
    ::ImGui_SetWindowSize({static_cast<float>(size.x), static_cast<float>(size.y)}, cond);
}
void ImGui::SetWindowCollapsed(bool collapsed, ImGui::Cond cond)
{
    ::ImGui_SetWindowCollapsed(collapsed, cond);
}
void ImGui::SetWindowFocus()
{
    ::ImGui_SetWindowFocus();
}
void ImGui::SetWindowFontScale(real_t scale)
{
    ::ImGui_SetWindowFontScale(scale);
}
void ImGui::SetWindowPosStr(StringName name, Vector2 pos, ImGui::Cond cond)
{
    ::ImGui_SetWindowPosStr(sn_to_cstr(name), {static_cast<float>(pos.x), static_cast<float>(pos.y)}, cond);
}
void ImGui::SetWindowSizeStr(StringName name, Vector2 size, ImGui::Cond cond)
{
    ::ImGui_SetWindowSizeStr(sn_to_cstr(name), {static_cast<float>(size.x), static_cast<float>(size.y)}, cond);
}
void ImGui::SetWindowCollapsedStr(StringName name, bool collapsed, ImGui::Cond cond)
{
    ::ImGui_SetWindowCollapsedStr(sn_to_cstr(name), collapsed, cond);
}
void ImGui::SetWindowFocusStr(StringName name)
{
    ::ImGui_SetWindowFocusStr(sn_to_cstr(name));
}
real_t ImGui::GetScrollX()
{
    return ::ImGui_GetScrollX();
}
real_t ImGui::GetScrollY()
{
    return ::ImGui_GetScrollY();
}
void ImGui::SetScrollX(real_t scroll_x)
{
    ::ImGui_SetScrollX(scroll_x);
}
void ImGui::SetScrollY(real_t scroll_y)
{
    ::ImGui_SetScrollY(scroll_y);
}
real_t ImGui::GetScrollMaxX()
{
    return ::ImGui_GetScrollMaxX();
}
real_t ImGui::GetScrollMaxY()
{
    return ::ImGui_GetScrollMaxY();
}
void ImGui::SetScrollHereX(real_t center_x_ratio)
{
    ::ImGui_SetScrollHereX(center_x_ratio);
}
void ImGui::SetScrollHereY(real_t center_y_ratio)
{
    ::ImGui_SetScrollHereY(center_y_ratio);
}
void ImGui::SetScrollFromPosX(real_t local_x, real_t center_x_ratio)
{
    ::ImGui_SetScrollFromPosX(local_x, center_x_ratio);
}
void ImGui::SetScrollFromPosY(real_t local_y, real_t center_y_ratio)
{
    ::ImGui_SetScrollFromPosY(local_y, center_y_ratio);
}
void ImGui::PushFont(int64_t font)
{
    ::ImGui_PushFont((ImFont*)font);
}
void ImGui::PopFont()
{
    ::ImGui_PopFont();
}
void ImGui::PushStyleColor(ImGui::Col idx, Color col)
{
    ::ImGui_PushStyleColor(idx, col.to_abgr32());
}
void ImGui::PushStyleColorImVec4(ImGui::Col idx, Color col)
{
    ::ImGui_PushStyleColorImVec4(idx, {col.r, col.g, col.b, col.a});
}
void ImGui::PopStyleColor()
{
    ::ImGui_PopStyleColor();
}
void ImGui::PopStyleColorEx(int count)
{
    ::ImGui_PopStyleColorEx(count);
}
void ImGui::PushStyleVar(ImGui::StyleVar idx, real_t val)
{
    ::ImGui_PushStyleVar(idx, val);
}
void ImGui::PushStyleVarImVec2(ImGui::StyleVar idx, Vector2 val)
{
    ::ImGui_PushStyleVarImVec2(idx, {static_cast<float>(val.x), static_cast<float>(val.y)});
}
void ImGui::PushStyleVarX(ImGui::StyleVar idx, real_t val_x)
{
    ::ImGui_PushStyleVarX(idx, val_x);
}
void ImGui::PushStyleVarY(ImGui::StyleVar idx, real_t val_y)
{
    ::ImGui_PushStyleVarY(idx, val_y);
}
void ImGui::PopStyleVar()
{
    ::ImGui_PopStyleVar();
}
void ImGui::PopStyleVarEx(int count)
{
    ::ImGui_PopStyleVarEx(count);
}
void ImGui::PushItemFlag(BitField<ImGui::ItemFlags> option, bool enabled)
{
    ::ImGui_PushItemFlag(option, enabled);
}
void ImGui::PopItemFlag()
{
    ::ImGui_PopItemFlag();
}
void ImGui::PushItemWidth(real_t item_width)
{
    ::ImGui_PushItemWidth(item_width);
}
void ImGui::PopItemWidth()
{
    ::ImGui_PopItemWidth();
}
void ImGui::SetNextItemWidth(real_t item_width)
{
    ::ImGui_SetNextItemWidth(item_width);
}
real_t ImGui::CalcItemWidth()
{
    return ::ImGui_CalcItemWidth();
}
void ImGui::PushTextWrapPos(real_t wrap_local_pos_x)
{
    ::ImGui_PushTextWrapPos(wrap_local_pos_x);
}
void ImGui::PopTextWrapPos()
{
    ::ImGui_PopTextWrapPos();
}
int64_t ImGui::GetFont()
{
    return (int64_t)::ImGui_GetFont();
}
real_t ImGui::GetFontSize()
{
    return ::ImGui_GetFontSize();
}
Vector2 ImGui::GetFontTexUvWhitePixel()
{
    return ToVector2(::ImGui_GetFontTexUvWhitePixel());
}
Vector2 ImGui::GetCursorScreenPos()
{
    return ToVector2(::ImGui_GetCursorScreenPos());
}
void ImGui::SetCursorScreenPos(Vector2 pos)
{
    ::ImGui_SetCursorScreenPos({static_cast<float>(pos.x), static_cast<float>(pos.y)});
}
Vector2 ImGui::GetContentRegionAvail()
{
    return ToVector2(::ImGui_GetContentRegionAvail());
}
Vector2 ImGui::GetCursorPos()
{
    return ToVector2(::ImGui_GetCursorPos());
}
real_t ImGui::GetCursorPosX()
{
    return ::ImGui_GetCursorPosX();
}
real_t ImGui::GetCursorPosY()
{
    return ::ImGui_GetCursorPosY();
}
void ImGui::SetCursorPos(Vector2 local_pos)
{
    ::ImGui_SetCursorPos({static_cast<float>(local_pos.x), static_cast<float>(local_pos.y)});
}
void ImGui::SetCursorPosX(real_t local_x)
{
    ::ImGui_SetCursorPosX(local_x);
}
void ImGui::SetCursorPosY(real_t local_y)
{
    ::ImGui_SetCursorPosY(local_y);
}
Vector2 ImGui::GetCursorStartPos()
{
    return ToVector2(::ImGui_GetCursorStartPos());
}
void ImGui::Separator()
{
    ::ImGui_Separator();
}
void ImGui::SameLine()
{
    ::ImGui_SameLine();
}
void ImGui::SameLineEx(real_t offset_from_start_x, real_t spacing)
{
    ::ImGui_SameLineEx(offset_from_start_x, spacing);
}
void ImGui::NewLine()
{
    ::ImGui_NewLine();
}
void ImGui::Spacing()
{
    ::ImGui_Spacing();
}
void ImGui::Dummy(Vector2 size)
{
    ::ImGui_Dummy({static_cast<float>(size.x), static_cast<float>(size.y)});
}
void ImGui::Indent()
{
    ::ImGui_Indent();
}
void ImGui::IndentEx(real_t indent_w)
{
    ::ImGui_IndentEx(indent_w);
}
void ImGui::Unindent()
{
    ::ImGui_Unindent();
}
void ImGui::UnindentEx(real_t indent_w)
{
    ::ImGui_UnindentEx(indent_w);
}
void ImGui::BeginGroup()
{
    ::ImGui_BeginGroup();
}
void ImGui::EndGroup()
{
    ::ImGui_EndGroup();
}
void ImGui::AlignTextToFramePadding()
{
    ::ImGui_AlignTextToFramePadding();
}
real_t ImGui::GetTextLineHeight()
{
    return ::ImGui_GetTextLineHeight();
}
real_t ImGui::GetTextLineHeightWithSpacing()
{
    return ::ImGui_GetTextLineHeightWithSpacing();
}
real_t ImGui::GetFrameHeight()
{
    return ::ImGui_GetFrameHeight();
}
real_t ImGui::GetFrameHeightWithSpacing()
{
    return ::ImGui_GetFrameHeightWithSpacing();
}
void ImGui::PushID(StringName str_id)
{
    ::ImGui_PushID(sn_to_cstr(str_id));
}
void ImGui::PushIDStr(StringName str_id_begin, StringName str_id_end)
{
    ::ImGui_PushIDStr(sn_to_cstr(str_id_begin), sn_to_cstr(str_id_end));
}
void ImGui::PushIDInt(int int_id)
{
    ::ImGui_PushIDInt(int_id);
}
void ImGui::PopID()
{
    ::ImGui_PopID();
}
uint32_t ImGui::GetID(StringName str_id)
{
    return ::ImGui_GetID(sn_to_cstr(str_id));
}
uint32_t ImGui::GetIDInt(int int_id)
{
    return ::ImGui_GetIDInt(int_id);
}
void ImGui::Text(String fmt)
{
    ::ImGui_TextUnformatted(fmt.utf8().get_data());
}
void ImGui::TextColored(Color col, String fmt)
{
    ::ImGui_TextColored({col.r, col.g, col.b, col.a}, "%s", fmt.utf8().get_data());
}
void ImGui::TextDisabled(String fmt)
{
    ::ImGui_TextDisabled("%s", fmt.utf8().get_data());
}
void ImGui::TextWrapped(String fmt)
{
    ::ImGui_TextWrapped("%s", fmt.utf8().get_data());
}
void ImGui::LabelText(StringName label, String fmt)
{
    ::ImGui_LabelText(sn_to_cstr(label), "%s", fmt.utf8().get_data());
}
void ImGui::BulletText(String fmt)
{
    ::ImGui_BulletText("%s", fmt.utf8().get_data());
}
void ImGui::SeparatorText(StringName label)
{
    ::ImGui_SeparatorText(sn_to_cstr(label));
}
bool ImGui::Button(StringName label)
{
    return ::ImGui_Button(sn_to_cstr(label));
}
bool ImGui::ButtonEx(StringName label, Vector2 size)
{
    return ::ImGui_ButtonEx(sn_to_cstr(label), {static_cast<float>(size.x), static_cast<float>(size.y)});
}
bool ImGui::SmallButton(StringName label)
{
    return ::ImGui_SmallButton(sn_to_cstr(label));
}
bool ImGui::InvisibleButton(StringName str_id, Vector2 size, BitField<ImGui::ButtonFlags> flags)
{
    return ::ImGui_InvisibleButton(sn_to_cstr(str_id), {static_cast<float>(size.x), static_cast<float>(size.y)}, flags);
}
bool ImGui::ArrowButton(StringName str_id, ImGui::Dir dir)
{
    return ::ImGui_ArrowButton(sn_to_cstr(str_id), dir);
}
bool ImGui::Checkbox(StringName label, Array v)
{
    return ::ImGui_Checkbox(sn_to_cstr(label), (bool*)GdsPtr<bool>(v));
}
bool ImGui::CheckboxFlagsIntPtr(StringName label, Array flags, int flags_value)
{
    return ::ImGui_CheckboxFlagsIntPtr(sn_to_cstr(label), (int*)GdsPtr<int>(flags), flags_value);
}
bool ImGui::RadioButton(StringName label, bool active)
{
    return ::ImGui_RadioButton(sn_to_cstr(label), active);
}
bool ImGui::RadioButtonIntPtr(StringName label, Array v, int v_button)
{
    return ::ImGui_RadioButtonIntPtr(sn_to_cstr(label), (int*)GdsPtr<int>(v), v_button);
}
void ImGui::ProgressBar(real_t fraction, Vector2 size_arg, String overlay)
{
    ::ImGui_ProgressBar(fraction,
                        {static_cast<float>(size_arg.x), static_cast<float>(size_arg.y)},
                        overlay.ptr() ? overlay.utf8().get_data() : nullptr);
}
void ImGui::Bullet()
{
    ::ImGui_Bullet();
}
bool ImGui::TextLink(StringName label)
{
    return ::ImGui_TextLink(sn_to_cstr(label));
}
void ImGui::TextLinkOpenURL(StringName label)
{
    ::ImGui_TextLinkOpenURL(sn_to_cstr(label));
}
void ImGui::TextLinkOpenURLEx(StringName label, String url)
{
    ::ImGui_TextLinkOpenURLEx(sn_to_cstr(label), url.ptr() ? url.utf8().get_data() : nullptr);
}
void ImGui::Image(Ref<Texture2D> user_texture_id, Vector2 image_size)
{
    ::ImGui_Image((ImTextureID)user_texture_id->get_rid().get_id(),
                  {static_cast<float>(image_size.x), static_cast<float>(image_size.y)});
}
void ImGui::ImageEx(Ref<Texture2D> user_texture_id, Vector2 image_size, Vector2 uv0, Vector2 uv1, Color tint_col,
                    Color border_col)
{
    ::ImGui_ImageEx((ImTextureID)user_texture_id->get_rid().get_id(),
                    {static_cast<float>(image_size.x), static_cast<float>(image_size.y)},
                    {static_cast<float>(uv0.x), static_cast<float>(uv0.y)},
                    {static_cast<float>(uv1.x), static_cast<float>(uv1.y)},
                    {tint_col.r, tint_col.g, tint_col.b, tint_col.a},
                    {border_col.r, border_col.g, border_col.b, border_col.a});
}
bool ImGui::ImageButton(StringName str_id, Ref<Texture2D> user_texture_id, Vector2 image_size)
{
    return ::ImGui_ImageButton(sn_to_cstr(str_id),
                               (ImTextureID)user_texture_id->get_rid().get_id(),
                               {static_cast<float>(image_size.x), static_cast<float>(image_size.y)});
}
bool ImGui::ImageButtonEx(StringName str_id, Ref<Texture2D> user_texture_id, Vector2 image_size, Vector2 uv0,
                          Vector2 uv1, Color bg_col, Color tint_col)
{
    return ::ImGui_ImageButtonEx(sn_to_cstr(str_id),
                                 (ImTextureID)user_texture_id->get_rid().get_id(),
                                 {static_cast<float>(image_size.x), static_cast<float>(image_size.y)},
                                 {static_cast<float>(uv0.x), static_cast<float>(uv0.y)},
                                 {static_cast<float>(uv1.x), static_cast<float>(uv1.y)},
                                 {bg_col.r, bg_col.g, bg_col.b, bg_col.a},
                                 {tint_col.r, tint_col.g, tint_col.b, tint_col.a});
}
bool ImGui::BeginCombo(StringName label, String preview_value, BitField<ImGui::ComboFlags> flags)
{
    return ::ImGui_BeginCombo(sn_to_cstr(label), preview_value.utf8().get_data(), flags);
}
void ImGui::EndCombo()
{
    ::ImGui_EndCombo();
}
bool ImGui::ComboChar(StringName label, Array current_item, Array items, int items_count)
{
    return ::ImGui_ComboChar(sn_to_cstr(label),
                             (int*)GdsPtr<int>(current_item),
                             (const char* const*)GdsArray<const char* const>(items),
                             items_count);
}
bool ImGui::ComboCharEx(StringName label, Array current_item, Array items, int items_count,
                        int popup_max_height_in_items)
{
    return ::ImGui_ComboCharEx(sn_to_cstr(label),
                               (int*)GdsPtr<int>(current_item),
                               (const char* const*)GdsArray<const char* const>(items),
                               items_count,
                               popup_max_height_in_items);
}
bool ImGui::Combo(StringName label, Array current_item, Array items_separated_by_zeros)
{
    return ::ImGui_Combo(sn_to_cstr(label),
                         (int*)GdsPtr<int>(current_item),
                         (const char*)GdsZeroArray(items_separated_by_zeros));
}
bool ImGui::ComboEx(StringName label, Array current_item, Array items_separated_by_zeros, int popup_max_height_in_items)
{
    return ::ImGui_ComboEx(sn_to_cstr(label),
                           (int*)GdsPtr<int>(current_item),
                           (const char*)GdsZeroArray(items_separated_by_zeros),
                           popup_max_height_in_items);
}
bool ImGui::DragFloat(StringName label, Array v)
{
    return ::ImGui_DragFloat(sn_to_cstr(label), (float*)GdsPtr<float>(v));
}
bool ImGui::DragFloatEx(StringName label, Array v, real_t v_speed, real_t v_min, real_t v_max, String format,
                        BitField<ImGui::SliderFlags> flags)
{
    return ::ImGui_DragFloatEx(sn_to_cstr(label),
                               (float*)GdsPtr<float>(v),
                               v_speed,
                               v_min,
                               v_max,
                               format.ptr() ? format.utf8().get_data() : nullptr,
                               flags);
}
bool ImGui::DragFloat2(StringName label, Array v)
{
    return ::ImGui_DragFloat2(sn_to_cstr(label), (float*)GdsArray<float>(v));
}
bool ImGui::DragFloat2Ex(StringName label, Array v, real_t v_speed, real_t v_min, real_t v_max, String format,
                         BitField<ImGui::SliderFlags> flags)
{
    return ::ImGui_DragFloat2Ex(sn_to_cstr(label),
                                (float*)GdsArray<float>(v),
                                v_speed,
                                v_min,
                                v_max,
                                format.ptr() ? format.utf8().get_data() : nullptr,
                                flags);
}
bool ImGui::DragFloat3(StringName label, Array v)
{
    return ::ImGui_DragFloat3(sn_to_cstr(label), (float*)GdsArray<float>(v));
}
bool ImGui::DragFloat3Ex(StringName label, Array v, real_t v_speed, real_t v_min, real_t v_max, String format,
                         BitField<ImGui::SliderFlags> flags)
{
    return ::ImGui_DragFloat3Ex(sn_to_cstr(label),
                                (float*)GdsArray<float>(v),
                                v_speed,
                                v_min,
                                v_max,
                                format.ptr() ? format.utf8().get_data() : nullptr,
                                flags);
}
bool ImGui::DragFloat4(StringName label, Array v)
{
    return ::ImGui_DragFloat4(sn_to_cstr(label), (float*)GdsArray<float>(v));
}
bool ImGui::DragFloat4Ex(StringName label, Array v, real_t v_speed, real_t v_min, real_t v_max, String format,
                         BitField<ImGui::SliderFlags> flags)
{
    return ::ImGui_DragFloat4Ex(sn_to_cstr(label),
                                (float*)GdsArray<float>(v),
                                v_speed,
                                v_min,
                                v_max,
                                format.ptr() ? format.utf8().get_data() : nullptr,
                                flags);
}
bool ImGui::DragFloatRange2(StringName label, Array v_current_min, Array v_current_max)
{
    return ::ImGui_DragFloatRange2(sn_to_cstr(label),
                                   (float*)GdsPtr<float>(v_current_min),
                                   (float*)GdsPtr<float>(v_current_max));
}
bool ImGui::DragFloatRange2Ex(StringName label, Array v_current_min, Array v_current_max, real_t v_speed, real_t v_min,
                              real_t v_max, String format, String format_max, BitField<ImGui::SliderFlags> flags)
{
    return ::ImGui_DragFloatRange2Ex(sn_to_cstr(label),
                                     (float*)GdsPtr<float>(v_current_min),
                                     (float*)GdsPtr<float>(v_current_max),
                                     v_speed,
                                     v_min,
                                     v_max,
                                     format.ptr() ? format.utf8().get_data() : nullptr,
                                     format_max.ptr() ? format_max.utf8().get_data() : nullptr,
                                     flags);
}
bool ImGui::DragInt(StringName label, Array v)
{
    return ::ImGui_DragInt(sn_to_cstr(label), (int*)GdsPtr<int>(v));
}
bool ImGui::DragIntEx(StringName label, Array v, real_t v_speed, int v_min, int v_max, String format,
                      BitField<ImGui::SliderFlags> flags)
{
    return ::ImGui_DragIntEx(sn_to_cstr(label),
                             (int*)GdsPtr<int>(v),
                             v_speed,
                             v_min,
                             v_max,
                             format.ptr() ? format.utf8().get_data() : nullptr,
                             flags);
}
bool ImGui::DragInt2(StringName label, Array v)
{
    return ::ImGui_DragInt2(sn_to_cstr(label), (int*)GdsArray<int>(v));
}
bool ImGui::DragInt2Ex(StringName label, Array v, real_t v_speed, int v_min, int v_max, String format,
                       BitField<ImGui::SliderFlags> flags)
{
    return ::ImGui_DragInt2Ex(sn_to_cstr(label),
                              (int*)GdsArray<int>(v),
                              v_speed,
                              v_min,
                              v_max,
                              format.ptr() ? format.utf8().get_data() : nullptr,
                              flags);
}
bool ImGui::DragInt3(StringName label, Array v)
{
    return ::ImGui_DragInt3(sn_to_cstr(label), (int*)GdsArray<int>(v));
}
bool ImGui::DragInt3Ex(StringName label, Array v, real_t v_speed, int v_min, int v_max, String format,
                       BitField<ImGui::SliderFlags> flags)
{
    return ::ImGui_DragInt3Ex(sn_to_cstr(label),
                              (int*)GdsArray<int>(v),
                              v_speed,
                              v_min,
                              v_max,
                              format.ptr() ? format.utf8().get_data() : nullptr,
                              flags);
}
bool ImGui::DragInt4(StringName label, Array v)
{
    return ::ImGui_DragInt4(sn_to_cstr(label), (int*)GdsArray<int>(v));
}
bool ImGui::DragInt4Ex(StringName label, Array v, real_t v_speed, int v_min, int v_max, String format,
                       BitField<ImGui::SliderFlags> flags)
{
    return ::ImGui_DragInt4Ex(sn_to_cstr(label),
                              (int*)GdsArray<int>(v),
                              v_speed,
                              v_min,
                              v_max,
                              format.ptr() ? format.utf8().get_data() : nullptr,
                              flags);
}
bool ImGui::DragIntRange2(StringName label, Array v_current_min, Array v_current_max)
{
    return ::ImGui_DragIntRange2(sn_to_cstr(label), (int*)GdsPtr<int>(v_current_min), (int*)GdsPtr<int>(v_current_max));
}
bool ImGui::DragIntRange2Ex(StringName label, Array v_current_min, Array v_current_max, real_t v_speed, int v_min,
                            int v_max, String format, String format_max, BitField<ImGui::SliderFlags> flags)
{
    return ::ImGui_DragIntRange2Ex(sn_to_cstr(label),
                                   (int*)GdsPtr<int>(v_current_min),
                                   (int*)GdsPtr<int>(v_current_max),
                                   v_speed,
                                   v_min,
                                   v_max,
                                   format.ptr() ? format.utf8().get_data() : nullptr,
                                   format_max.ptr() ? format_max.utf8().get_data() : nullptr,
                                   flags);
}
bool ImGui::SliderFloat(StringName label, Array v, real_t v_min, real_t v_max)
{
    return ::ImGui_SliderFloat(sn_to_cstr(label), (float*)GdsPtr<float>(v), v_min, v_max);
}
bool ImGui::SliderFloatEx(StringName label, Array v, real_t v_min, real_t v_max, String format,
                          BitField<ImGui::SliderFlags> flags)
{
    return ::ImGui_SliderFloatEx(sn_to_cstr(label),
                                 (float*)GdsPtr<float>(v),
                                 v_min,
                                 v_max,
                                 format.ptr() ? format.utf8().get_data() : nullptr,
                                 flags);
}
bool ImGui::SliderFloat2(StringName label, Array v, real_t v_min, real_t v_max)
{
    return ::ImGui_SliderFloat2(sn_to_cstr(label), (float*)GdsArray<float>(v), v_min, v_max);
}
bool ImGui::SliderFloat2Ex(StringName label, Array v, real_t v_min, real_t v_max, String format,
                           BitField<ImGui::SliderFlags> flags)
{
    return ::ImGui_SliderFloat2Ex(sn_to_cstr(label),
                                  (float*)GdsArray<float>(v),
                                  v_min,
                                  v_max,
                                  format.ptr() ? format.utf8().get_data() : nullptr,
                                  flags);
}
bool ImGui::SliderFloat3(StringName label, Array v, real_t v_min, real_t v_max)
{
    return ::ImGui_SliderFloat3(sn_to_cstr(label), (float*)GdsArray<float>(v), v_min, v_max);
}
bool ImGui::SliderFloat3Ex(StringName label, Array v, real_t v_min, real_t v_max, String format,
                           BitField<ImGui::SliderFlags> flags)
{
    return ::ImGui_SliderFloat3Ex(sn_to_cstr(label),
                                  (float*)GdsArray<float>(v),
                                  v_min,
                                  v_max,
                                  format.ptr() ? format.utf8().get_data() : nullptr,
                                  flags);
}
bool ImGui::SliderFloat4(StringName label, Array v, real_t v_min, real_t v_max)
{
    return ::ImGui_SliderFloat4(sn_to_cstr(label), (float*)GdsArray<float>(v), v_min, v_max);
}
bool ImGui::SliderFloat4Ex(StringName label, Array v, real_t v_min, real_t v_max, String format,
                           BitField<ImGui::SliderFlags> flags)
{
    return ::ImGui_SliderFloat4Ex(sn_to_cstr(label),
                                  (float*)GdsArray<float>(v),
                                  v_min,
                                  v_max,
                                  format.ptr() ? format.utf8().get_data() : nullptr,
                                  flags);
}
bool ImGui::SliderAngle(StringName label, Array v_rad)
{
    return ::ImGui_SliderAngle(sn_to_cstr(label), (float*)GdsPtr<float>(v_rad));
}
bool ImGui::SliderAngleEx(StringName label, Array v_rad, real_t v_degrees_min, real_t v_degrees_max, String format,
                          BitField<ImGui::SliderFlags> flags)
{
    return ::ImGui_SliderAngleEx(sn_to_cstr(label),
                                 (float*)GdsPtr<float>(v_rad),
                                 v_degrees_min,
                                 v_degrees_max,
                                 format.ptr() ? format.utf8().get_data() : nullptr,
                                 flags);
}
bool ImGui::SliderInt(StringName label, Array v, int v_min, int v_max)
{
    return ::ImGui_SliderInt(sn_to_cstr(label), (int*)GdsPtr<int>(v), v_min, v_max);
}
bool ImGui::SliderIntEx(StringName label, Array v, int v_min, int v_max, String format,
                        BitField<ImGui::SliderFlags> flags)
{
    return ::ImGui_SliderIntEx(sn_to_cstr(label),
                               (int*)GdsPtr<int>(v),
                               v_min,
                               v_max,
                               format.ptr() ? format.utf8().get_data() : nullptr,
                               flags);
}
bool ImGui::SliderInt2(StringName label, Array v, int v_min, int v_max)
{
    return ::ImGui_SliderInt2(sn_to_cstr(label), (int*)GdsArray<int>(v), v_min, v_max);
}
bool ImGui::SliderInt2Ex(StringName label, Array v, int v_min, int v_max, String format,
                         BitField<ImGui::SliderFlags> flags)
{
    return ::ImGui_SliderInt2Ex(sn_to_cstr(label),
                                (int*)GdsArray<int>(v),
                                v_min,
                                v_max,
                                format.ptr() ? format.utf8().get_data() : nullptr,
                                flags);
}
bool ImGui::SliderInt3(StringName label, Array v, int v_min, int v_max)
{
    return ::ImGui_SliderInt3(sn_to_cstr(label), (int*)GdsArray<int>(v), v_min, v_max);
}
bool ImGui::SliderInt3Ex(StringName label, Array v, int v_min, int v_max, String format,
                         BitField<ImGui::SliderFlags> flags)
{
    return ::ImGui_SliderInt3Ex(sn_to_cstr(label),
                                (int*)GdsArray<int>(v),
                                v_min,
                                v_max,
                                format.ptr() ? format.utf8().get_data() : nullptr,
                                flags);
}
bool ImGui::SliderInt4(StringName label, Array v, int v_min, int v_max)
{
    return ::ImGui_SliderInt4(sn_to_cstr(label), (int*)GdsArray<int>(v), v_min, v_max);
}
bool ImGui::SliderInt4Ex(StringName label, Array v, int v_min, int v_max, String format,
                         BitField<ImGui::SliderFlags> flags)
{
    return ::ImGui_SliderInt4Ex(sn_to_cstr(label),
                                (int*)GdsArray<int>(v),
                                v_min,
                                v_max,
                                format.ptr() ? format.utf8().get_data() : nullptr,
                                flags);
}
bool ImGui::VSliderFloat(StringName label, Vector2 size, Array v, real_t v_min, real_t v_max)
{
    return ::ImGui_VSliderFloat(sn_to_cstr(label),
                                {static_cast<float>(size.x), static_cast<float>(size.y)},
                                (float*)GdsPtr<float>(v),
                                v_min,
                                v_max);
}
bool ImGui::VSliderFloatEx(StringName label, Vector2 size, Array v, real_t v_min, real_t v_max, String format,
                           BitField<ImGui::SliderFlags> flags)
{
    return ::ImGui_VSliderFloatEx(sn_to_cstr(label),
                                  {static_cast<float>(size.x), static_cast<float>(size.y)},
                                  (float*)GdsPtr<float>(v),
                                  v_min,
                                  v_max,
                                  format.ptr() ? format.utf8().get_data() : nullptr,
                                  flags);
}
bool ImGui::VSliderInt(StringName label, Vector2 size, Array v, int v_min, int v_max)
{
    return ::ImGui_VSliderInt(sn_to_cstr(label),
                              {static_cast<float>(size.x), static_cast<float>(size.y)},
                              (int*)GdsPtr<int>(v),
                              v_min,
                              v_max);
}
bool ImGui::VSliderIntEx(StringName label, Vector2 size, Array v, int v_min, int v_max, String format,
                         BitField<ImGui::SliderFlags> flags)
{
    return ::ImGui_VSliderIntEx(sn_to_cstr(label),
                                {static_cast<float>(size.x), static_cast<float>(size.y)},
                                (int*)GdsPtr<int>(v),
                                v_min,
                                v_max,
                                format.ptr() ? format.utf8().get_data() : nullptr,
                                flags);
}
bool ImGui::InputText(StringName label, Array buf, int64_t buf_size, BitField<ImGui::InputTextFlags> flags)
{
    return ::ImGui_InputText(sn_to_cstr(label), (char*)GdsPtr<String>(buf, buf_size, label), buf_size, flags);
}
bool ImGui::InputTextMultiline(StringName label, Array buf, int64_t buf_size)
{
    return ::ImGui_InputTextMultiline(sn_to_cstr(label), (char*)GdsPtr<String>(buf, buf_size, label), buf_size);
}
bool ImGui::InputTextWithHint(StringName label, String hint, Array buf, int64_t buf_size,
                              BitField<ImGui::InputTextFlags> flags)
{
    return ::ImGui_InputTextWithHint(sn_to_cstr(label),
                                     hint.utf8().get_data(),
                                     (char*)GdsPtr<String>(buf, buf_size, label),
                                     buf_size,
                                     flags);
}
bool ImGui::InputFloat(StringName label, Array v)
{
    return ::ImGui_InputFloat(sn_to_cstr(label), (float*)GdsPtr<float>(v));
}
bool ImGui::InputFloatEx(StringName label, Array v, real_t step, real_t step_fast, String format,
                         BitField<ImGui::InputTextFlags> flags)
{
    return ::ImGui_InputFloatEx(sn_to_cstr(label),
                                (float*)GdsPtr<float>(v),
                                step,
                                step_fast,
                                format.ptr() ? format.utf8().get_data() : nullptr,
                                flags);
}
bool ImGui::InputFloat2(StringName label, Array v)
{
    return ::ImGui_InputFloat2(sn_to_cstr(label), (float*)GdsArray<float>(v));
}
bool ImGui::InputFloat2Ex(StringName label, Array v, String format, BitField<ImGui::InputTextFlags> flags)
{
    return ::ImGui_InputFloat2Ex(sn_to_cstr(label),
                                 (float*)GdsArray<float>(v),
                                 format.ptr() ? format.utf8().get_data() : nullptr,
                                 flags);
}
bool ImGui::InputFloat3(StringName label, Array v)
{
    return ::ImGui_InputFloat3(sn_to_cstr(label), (float*)GdsArray<float>(v));
}
bool ImGui::InputFloat3Ex(StringName label, Array v, String format, BitField<ImGui::InputTextFlags> flags)
{
    return ::ImGui_InputFloat3Ex(sn_to_cstr(label),
                                 (float*)GdsArray<float>(v),
                                 format.ptr() ? format.utf8().get_data() : nullptr,
                                 flags);
}
bool ImGui::InputFloat4(StringName label, Array v)
{
    return ::ImGui_InputFloat4(sn_to_cstr(label), (float*)GdsArray<float>(v));
}
bool ImGui::InputFloat4Ex(StringName label, Array v, String format, BitField<ImGui::InputTextFlags> flags)
{
    return ::ImGui_InputFloat4Ex(sn_to_cstr(label),
                                 (float*)GdsArray<float>(v),
                                 format.ptr() ? format.utf8().get_data() : nullptr,
                                 flags);
}
bool ImGui::InputInt(StringName label, Array v)
{
    return ::ImGui_InputInt(sn_to_cstr(label), (int*)GdsPtr<int>(v));
}
bool ImGui::InputIntEx(StringName label, Array v, int step, int step_fast, BitField<ImGui::InputTextFlags> flags)
{
    return ::ImGui_InputIntEx(sn_to_cstr(label), (int*)GdsPtr<int>(v), step, step_fast, flags);
}
bool ImGui::InputInt2(StringName label, Array v, BitField<ImGui::InputTextFlags> flags)
{
    return ::ImGui_InputInt2(sn_to_cstr(label), (int*)GdsArray<int>(v), flags);
}
bool ImGui::InputInt3(StringName label, Array v, BitField<ImGui::InputTextFlags> flags)
{
    return ::ImGui_InputInt3(sn_to_cstr(label), (int*)GdsArray<int>(v), flags);
}
bool ImGui::InputInt4(StringName label, Array v, BitField<ImGui::InputTextFlags> flags)
{
    return ::ImGui_InputInt4(sn_to_cstr(label), (int*)GdsArray<int>(v), flags);
}
bool ImGui::InputDouble(StringName label, Array v)
{
    return ::ImGui_InputDouble(sn_to_cstr(label), (double*)GdsPtr<double>(v));
}
bool ImGui::InputDoubleEx(StringName label, Array v, double step, double step_fast, String format,
                          BitField<ImGui::InputTextFlags> flags)
{
    return ::ImGui_InputDoubleEx(sn_to_cstr(label),
                                 (double*)GdsPtr<double>(v),
                                 step,
                                 step_fast,
                                 format.ptr() ? format.utf8().get_data() : nullptr,
                                 flags);
}
bool ImGui::ColorEdit3(StringName label, Array col, BitField<ImGui::ColorEditFlags> flags)
{
    return ::ImGui_ColorEdit3(sn_to_cstr(label), (float*)GdsArray<float>(col), flags);
}
bool ImGui::ColorEdit4(StringName label, Array col, BitField<ImGui::ColorEditFlags> flags)
{
    return ::ImGui_ColorEdit4(sn_to_cstr(label), (float*)GdsArray<float>(col), flags);
}
bool ImGui::ColorPicker3(StringName label, Array col, BitField<ImGui::ColorEditFlags> flags)
{
    return ::ImGui_ColorPicker3(sn_to_cstr(label), (float*)GdsArray<float>(col), flags);
}
bool ImGui::ColorPicker4(StringName label, Array col, BitField<ImGui::ColorEditFlags> flags, Array ref_col)
{
    return ::ImGui_ColorPicker4(sn_to_cstr(label),
                                (float*)GdsArray<float>(col),
                                flags,
                                ref_col.size() == 0 ? nullptr : (const float*)GdsPtr<float>(ref_col));
}
bool ImGui::ColorButton(StringName desc_id, Color col, BitField<ImGui::ColorEditFlags> flags)
{
    return ::ImGui_ColorButton(sn_to_cstr(desc_id), {col.r, col.g, col.b, col.a}, flags);
}
bool ImGui::ColorButtonEx(StringName desc_id, Color col, BitField<ImGui::ColorEditFlags> flags, Vector2 size)
{
    return ::ImGui_ColorButtonEx(sn_to_cstr(desc_id),
                                 {col.r, col.g, col.b, col.a},
                                 flags,
                                 {static_cast<float>(size.x), static_cast<float>(size.y)});
}
void ImGui::SetColorEditOptions(BitField<ImGui::ColorEditFlags> flags)
{
    ::ImGui_SetColorEditOptions(flags);
}
bool ImGui::TreeNode(StringName label)
{
    return ::ImGui_TreeNode(sn_to_cstr(label));
}
bool ImGui::TreeNodeStr(StringName str_id, String fmt)
{
    return ::ImGui_TreeNodeStr(sn_to_cstr(str_id), "%s", fmt.utf8().get_data());
}
bool ImGui::TreeNodeEx(StringName label, BitField<ImGui::TreeNodeFlags> flags)
{
    return ::ImGui_TreeNodeEx(sn_to_cstr(label), flags);
}
bool ImGui::TreeNodeExStr(StringName str_id, BitField<ImGui::TreeNodeFlags> flags, String fmt)
{
    return ::ImGui_TreeNodeExStr(sn_to_cstr(str_id), flags, "%s", fmt.utf8().get_data());
}
void ImGui::TreePush(StringName str_id)
{
    ::ImGui_TreePush(sn_to_cstr(str_id));
}
void ImGui::TreePop()
{
    ::ImGui_TreePop();
}
real_t ImGui::GetTreeNodeToLabelSpacing()
{
    return ::ImGui_GetTreeNodeToLabelSpacing();
}
bool ImGui::CollapsingHeader(StringName label, BitField<ImGui::TreeNodeFlags> flags)
{
    return ::ImGui_CollapsingHeader(sn_to_cstr(label), flags);
}
bool ImGui::CollapsingHeaderBoolPtr(StringName label, Array p_visible, BitField<ImGui::TreeNodeFlags> flags)
{
    return ::ImGui_CollapsingHeaderBoolPtr(sn_to_cstr(label), (bool*)GdsPtr<bool>(p_visible), flags);
}
void ImGui::SetNextItemOpen(bool is_open, ImGui::Cond cond)
{
    ::ImGui_SetNextItemOpen(is_open, cond);
}
void ImGui::SetNextItemStorageID(uint32_t storage_id)
{
    ::ImGui_SetNextItemStorageID(storage_id);
}
bool ImGui::Selectable(StringName label)
{
    return ::ImGui_Selectable(sn_to_cstr(label));
}
bool ImGui::SelectableEx(StringName label, bool selected, BitField<ImGui::SelectableFlags> flags, Vector2 size)
{
    return ::ImGui_SelectableEx(sn_to_cstr(label),
                                selected,
                                flags,
                                {static_cast<float>(size.x), static_cast<float>(size.y)});
}
bool ImGui::SelectableBoolPtr(StringName label, Array p_selected, BitField<ImGui::SelectableFlags> flags)
{
    return ::ImGui_SelectableBoolPtr(sn_to_cstr(label), (bool*)GdsPtr<bool>(p_selected), flags);
}
bool ImGui::SelectableBoolPtrEx(StringName label, Array p_selected, BitField<ImGui::SelectableFlags> flags,
                                Vector2 size)
{
    return ::ImGui_SelectableBoolPtrEx(sn_to_cstr(label),
                                       (bool*)GdsPtr<bool>(p_selected),
                                       flags,
                                       {static_cast<float>(size.x), static_cast<float>(size.y)});
}
Ref<ImGuiMultiSelectIOPtr> ImGui::BeginMultiSelect(BitField<ImGui::MultiSelectFlags> flags)
{
    Ref<ImGuiMultiSelectIOPtr> rv;
    rv.instantiate();
    rv->_SetPtr(::ImGui_BeginMultiSelect(flags));
    return rv;
}
Ref<ImGuiMultiSelectIOPtr> ImGui::BeginMultiSelectEx(BitField<ImGui::MultiSelectFlags> flags, int selection_size,
                                                     int items_count)
{
    Ref<ImGuiMultiSelectIOPtr> rv;
    rv.instantiate();
    rv->_SetPtr(::ImGui_BeginMultiSelectEx(flags, selection_size, items_count));
    return rv;
}
Ref<ImGuiMultiSelectIOPtr> ImGui::EndMultiSelect()
{
    Ref<ImGuiMultiSelectIOPtr> rv;
    rv.instantiate();
    rv->_SetPtr(::ImGui_EndMultiSelect());
    return rv;
}
void ImGui::SetNextItemSelectionUserData(int64_t selection_user_data)
{
    ::ImGui_SetNextItemSelectionUserData(selection_user_data);
}
bool ImGui::IsItemToggledSelection()
{
    return ::ImGui_IsItemToggledSelection();
}
bool ImGui::BeginListBox(StringName label, Vector2 size)
{
    return ::ImGui_BeginListBox(sn_to_cstr(label), {static_cast<float>(size.x), static_cast<float>(size.y)});
}
void ImGui::EndListBox()
{
    ::ImGui_EndListBox();
}
bool ImGui::ListBox(StringName label, Array current_item, Array items, int items_count, int height_in_items)
{
    return ::ImGui_ListBox(sn_to_cstr(label),
                           (int*)GdsPtr<int>(current_item),
                           (const char* const*)GdsArray<const char* const>(items),
                           items_count,
                           height_in_items);
}
void ImGui::PlotLines(StringName label, Array values, int values_count)
{
    ::ImGui_PlotLines(sn_to_cstr(label), (const float*)GdsArray<const float>(values), values_count);
}
void ImGui::PlotLinesEx(StringName label, Array values, int values_count, int values_offset, String overlay_text,
                        real_t scale_min, real_t scale_max, Vector2 graph_size, int stride)
{
    ::ImGui_PlotLinesEx(sn_to_cstr(label),
                        (const float*)GdsArray<const float>(values),
                        values_count,
                        values_offset,
                        overlay_text.ptr() ? overlay_text.utf8().get_data() : nullptr,
                        scale_min,
                        scale_max,
                        {static_cast<float>(graph_size.x), static_cast<float>(graph_size.y)},
                        stride);
}
void ImGui::PlotHistogram(StringName label, Array values, int values_count)
{
    ::ImGui_PlotHistogram(sn_to_cstr(label), (const float*)GdsArray<const float>(values), values_count);
}
void ImGui::PlotHistogramEx(StringName label, Array values, int values_count, int values_offset, String overlay_text,
                            real_t scale_min, real_t scale_max, Vector2 graph_size, int stride)
{
    ::ImGui_PlotHistogramEx(sn_to_cstr(label),
                            (const float*)GdsArray<const float>(values),
                            values_count,
                            values_offset,
                            overlay_text.ptr() ? overlay_text.utf8().get_data() : nullptr,
                            scale_min,
                            scale_max,
                            {static_cast<float>(graph_size.x), static_cast<float>(graph_size.y)},
                            stride);
}
bool ImGui::BeginMenuBar()
{
    return ::ImGui_BeginMenuBar();
}
void ImGui::EndMenuBar()
{
    ::ImGui_EndMenuBar();
}
bool ImGui::BeginMainMenuBar()
{
    return ::ImGui_BeginMainMenuBar();
}
void ImGui::EndMainMenuBar()
{
    ::ImGui_EndMainMenuBar();
}
bool ImGui::BeginMenu(StringName label)
{
    return ::ImGui_BeginMenu(sn_to_cstr(label));
}
bool ImGui::BeginMenuEx(StringName label, bool enabled)
{
    return ::ImGui_BeginMenuEx(sn_to_cstr(label), enabled);
}
void ImGui::EndMenu()
{
    ::ImGui_EndMenu();
}
bool ImGui::MenuItem(StringName label)
{
    return ::ImGui_MenuItem(sn_to_cstr(label));
}
bool ImGui::MenuItemEx(StringName label, String shortcut, bool selected, bool enabled)
{
    return ::ImGui_MenuItemEx(sn_to_cstr(label),
                              shortcut.ptr() ? shortcut.utf8().get_data() : nullptr,
                              selected,
                              enabled);
}
bool ImGui::MenuItemBoolPtr(StringName label, String shortcut, Array p_selected, bool enabled)
{
    return ::ImGui_MenuItemBoolPtr(sn_to_cstr(label),
                                   shortcut.utf8().get_data(),
                                   (bool*)GdsPtr<bool>(p_selected),
                                   enabled);
}
bool ImGui::BeginTooltip()
{
    return ::ImGui_BeginTooltip();
}
void ImGui::EndTooltip()
{
    ::ImGui_EndTooltip();
}
void ImGui::SetTooltip(String fmt)
{
    ::ImGui_SetTooltip("%s", fmt.utf8().get_data());
}
bool ImGui::BeginItemTooltip()
{
    return ::ImGui_BeginItemTooltip();
}
void ImGui::SetItemTooltip(String fmt)
{
    ::ImGui_SetItemTooltip("%s", fmt.utf8().get_data());
}
bool ImGui::BeginPopup(StringName str_id, BitField<ImGui::WindowFlags> flags)
{
    return ::ImGui_BeginPopup(sn_to_cstr(str_id), flags);
}
bool ImGui::BeginPopupModal(StringName name, Array p_open, BitField<ImGui::WindowFlags> flags)
{
    return ::ImGui_BeginPopupModal(sn_to_cstr(name), p_open.size() == 0 ? nullptr : (bool*)GdsPtr<bool>(p_open), flags);
}
void ImGui::EndPopup()
{
    ::ImGui_EndPopup();
}
void ImGui::OpenPopup(StringName str_id, BitField<ImGui::PopupFlags> popup_flags)
{
    ::ImGui_OpenPopup(sn_to_cstr(str_id), popup_flags);
}
void ImGui::OpenPopupID(uint32_t id, BitField<ImGui::PopupFlags> popup_flags)
{
    ::ImGui_OpenPopupID(id, popup_flags);
}
void ImGui::OpenPopupOnItemClick(StringName str_id, BitField<ImGui::PopupFlags> popup_flags)
{
    ::ImGui_OpenPopupOnItemClick(sn_to_cstr(str_id), popup_flags);
}
void ImGui::CloseCurrentPopup()
{
    ::ImGui_CloseCurrentPopup();
}
bool ImGui::BeginPopupContextItem()
{
    return ::ImGui_BeginPopupContextItem();
}
bool ImGui::BeginPopupContextItemEx(StringName str_id, BitField<ImGui::PopupFlags> popup_flags)
{
    return ::ImGui_BeginPopupContextItemEx(sn_to_cstr(str_id), popup_flags);
}
bool ImGui::BeginPopupContextWindow()
{
    return ::ImGui_BeginPopupContextWindow();
}
bool ImGui::BeginPopupContextWindowEx(StringName str_id, BitField<ImGui::PopupFlags> popup_flags)
{
    return ::ImGui_BeginPopupContextWindowEx(sn_to_cstr(str_id), popup_flags);
}
bool ImGui::BeginPopupContextVoid()
{
    return ::ImGui_BeginPopupContextVoid();
}
bool ImGui::BeginPopupContextVoidEx(StringName str_id, BitField<ImGui::PopupFlags> popup_flags)
{
    return ::ImGui_BeginPopupContextVoidEx(sn_to_cstr(str_id), popup_flags);
}
bool ImGui::IsPopupOpen(StringName str_id, BitField<ImGui::PopupFlags> flags)
{
    return ::ImGui_IsPopupOpen(sn_to_cstr(str_id), flags);
}
bool ImGui::BeginTable(StringName str_id, int columns, BitField<ImGui::TableFlags> flags)
{
    return ::ImGui_BeginTable(sn_to_cstr(str_id), columns, flags);
}
bool ImGui::BeginTableEx(StringName str_id, int columns, BitField<ImGui::TableFlags> flags, Vector2 outer_size,
                         real_t inner_width)
{
    return ::ImGui_BeginTableEx(sn_to_cstr(str_id),
                                columns,
                                flags,
                                {static_cast<float>(outer_size.x), static_cast<float>(outer_size.y)},
                                inner_width);
}
void ImGui::EndTable()
{
    ::ImGui_EndTable();
}
void ImGui::TableNextRow()
{
    ::ImGui_TableNextRow();
}
void ImGui::TableNextRowEx(BitField<ImGui::TableRowFlags> row_flags, real_t min_row_height)
{
    ::ImGui_TableNextRowEx(row_flags, min_row_height);
}
bool ImGui::TableNextColumn()
{
    return ::ImGui_TableNextColumn();
}
bool ImGui::TableSetColumnIndex(int column_n)
{
    return ::ImGui_TableSetColumnIndex(column_n);
}
void ImGui::TableSetupColumn(StringName label, BitField<ImGui::TableColumnFlags> flags)
{
    ::ImGui_TableSetupColumn(sn_to_cstr(label), flags);
}
void ImGui::TableSetupColumnEx(StringName label, BitField<ImGui::TableColumnFlags> flags, real_t init_width_or_weight,
                               uint32_t user_id)
{
    ::ImGui_TableSetupColumnEx(sn_to_cstr(label), flags, init_width_or_weight, user_id);
}
void ImGui::TableSetupScrollFreeze(int cols, int rows)
{
    ::ImGui_TableSetupScrollFreeze(cols, rows);
}
void ImGui::TableHeader(StringName label)
{
    ::ImGui_TableHeader(sn_to_cstr(label));
}
void ImGui::TableHeadersRow()
{
    ::ImGui_TableHeadersRow();
}
void ImGui::TableAngledHeadersRow()
{
    ::ImGui_TableAngledHeadersRow();
}
Ref<ImGuiTableSortSpecsPtr> ImGui::TableGetSortSpecs()
{
    Ref<ImGuiTableSortSpecsPtr> rv;
    rv.instantiate();
    rv->_SetPtr(::ImGui_TableGetSortSpecs());
    return rv;
}
int ImGui::TableGetColumnCount()
{
    return ::ImGui_TableGetColumnCount();
}
int ImGui::TableGetColumnIndex()
{
    return ::ImGui_TableGetColumnIndex();
}
int ImGui::TableGetRowIndex()
{
    return ::ImGui_TableGetRowIndex();
}
String ImGui::TableGetColumnName(int column_n)
{
    return ::ImGui_TableGetColumnName(column_n);
}
BitField<ImGui::TableColumnFlags> ImGui::TableGetColumnFlags(int column_n)
{
    return ::ImGui_TableGetColumnFlags(column_n);
}
void ImGui::TableSetColumnEnabled(int column_n, bool v)
{
    ::ImGui_TableSetColumnEnabled(column_n, v);
}
int ImGui::TableGetHoveredColumn()
{
    return ::ImGui_TableGetHoveredColumn();
}
void ImGui::TableSetBgColor(ImGui::TableBgTarget target, Color color, int column_n)
{
    ::ImGui_TableSetBgColor(target, color.to_abgr32(), column_n);
}
void ImGui::Columns()
{
    ::ImGui_Columns();
}
void ImGui::ColumnsEx(int count, StringName id, bool borders)
{
    ::ImGui_ColumnsEx(count, sn_to_cstr(id), borders);
}
void ImGui::NextColumn()
{
    ::ImGui_NextColumn();
}
int ImGui::GetColumnIndex()
{
    return ::ImGui_GetColumnIndex();
}
real_t ImGui::GetColumnWidth(int column_index)
{
    return ::ImGui_GetColumnWidth(column_index);
}
void ImGui::SetColumnWidth(int column_index, real_t width)
{
    ::ImGui_SetColumnWidth(column_index, width);
}
real_t ImGui::GetColumnOffset(int column_index)
{
    return ::ImGui_GetColumnOffset(column_index);
}
void ImGui::SetColumnOffset(int column_index, real_t offset_x)
{
    ::ImGui_SetColumnOffset(column_index, offset_x);
}
int ImGui::GetColumnsCount()
{
    return ::ImGui_GetColumnsCount();
}
bool ImGui::BeginTabBar(StringName str_id, BitField<ImGui::TabBarFlags> flags)
{
    return ::ImGui_BeginTabBar(sn_to_cstr(str_id), flags);
}
void ImGui::EndTabBar()
{
    ::ImGui_EndTabBar();
}
bool ImGui::BeginTabItem(StringName label, Array p_open, BitField<ImGui::TabItemFlags> flags)
{
    return ::ImGui_BeginTabItem(sn_to_cstr(label), p_open.size() == 0 ? nullptr : (bool*)GdsPtr<bool>(p_open), flags);
}
void ImGui::EndTabItem()
{
    ::ImGui_EndTabItem();
}
bool ImGui::TabItemButton(StringName label, BitField<ImGui::TabItemFlags> flags)
{
    return ::ImGui_TabItemButton(sn_to_cstr(label), flags);
}
void ImGui::SetTabItemClosed(StringName tab_or_docked_window_label)
{
    ::ImGui_SetTabItemClosed(sn_to_cstr(tab_or_docked_window_label));
}
uint32_t ImGui::DockSpace(uint32_t dockspace_id)
{
    return ::ImGui_DockSpace(dockspace_id);
}
uint32_t ImGui::DockSpaceEx(uint32_t dockspace_id, Vector2 size, BitField<ImGui::DockNodeFlags> flags,
                            Ref<ImGuiWindowClassPtr> window_class)
{
    return ::ImGui_DockSpaceEx(dockspace_id,
                               {static_cast<float>(size.x), static_cast<float>(size.y)},
                               flags,
                               window_class->_GetPtr());
}
uint32_t ImGui::DockSpaceOverViewport()
{
    return ::ImGui_DockSpaceOverViewport();
}
void ImGui::SetNextWindowDockID(uint32_t dock_id, ImGui::Cond cond)
{
    ::ImGui_SetNextWindowDockID(dock_id, cond);
}
void ImGui::SetNextWindowClass(Ref<ImGuiWindowClassPtr> window_class)
{
    ::ImGui_SetNextWindowClass(window_class->_GetPtr());
}
uint32_t ImGui::GetWindowDockID()
{
    return ::ImGui_GetWindowDockID();
}
bool ImGui::IsWindowDocked()
{
    return ::ImGui_IsWindowDocked();
}
void ImGui::LogToTTY(int auto_open_depth)
{
    ::ImGui_LogToTTY(auto_open_depth);
}
void ImGui::LogToFile(int auto_open_depth, String filename)
{
    ::ImGui_LogToFile(auto_open_depth, filename.ptr() ? filename.utf8().get_data() : nullptr);
}
void ImGui::LogToClipboard(int auto_open_depth)
{
    ::ImGui_LogToClipboard(auto_open_depth);
}
void ImGui::LogFinish()
{
    ::ImGui_LogFinish();
}
void ImGui::LogButtons()
{
    ::ImGui_LogButtons();
}
void ImGui::LogText(String fmt)
{
    ::ImGui_LogText("%s", fmt.utf8().get_data());
}
bool ImGui::BeginDragDropSource(BitField<ImGui::DragDropFlags> flags)
{
    return ::ImGui_BeginDragDropSource(flags);
}
void ImGui::EndDragDropSource()
{
    ::ImGui_EndDragDropSource();
}
bool ImGui::BeginDragDropTarget()
{
    return ::ImGui_BeginDragDropTarget();
}
void ImGui::EndDragDropTarget()
{
    ::ImGui_EndDragDropTarget();
}
void ImGui::BeginDisabled(bool disabled)
{
    ::ImGui_BeginDisabled(disabled);
}
void ImGui::EndDisabled()
{
    ::ImGui_EndDisabled();
}
void ImGui::PushClipRect(Vector2 clip_rect_min, Vector2 clip_rect_max, bool intersect_with_current_clip_rect)
{
    ::ImGui_PushClipRect({static_cast<float>(clip_rect_min.x), static_cast<float>(clip_rect_min.y)},
                         {static_cast<float>(clip_rect_max.x), static_cast<float>(clip_rect_max.y)},
                         intersect_with_current_clip_rect);
}
void ImGui::PopClipRect()
{
    ::ImGui_PopClipRect();
}
void ImGui::SetItemDefaultFocus()
{
    ::ImGui_SetItemDefaultFocus();
}
void ImGui::SetKeyboardFocusHere()
{
    ::ImGui_SetKeyboardFocusHere();
}
void ImGui::SetKeyboardFocusHereEx(int offset)
{
    ::ImGui_SetKeyboardFocusHereEx(offset);
}
void ImGui::SetNavCursorVisible(bool visible)
{
    ::ImGui_SetNavCursorVisible(visible);
}
void ImGui::SetNextItemAllowOverlap()
{
    ::ImGui_SetNextItemAllowOverlap();
}
bool ImGui::IsItemHovered(BitField<ImGui::HoveredFlags> flags)
{
    return ::ImGui_IsItemHovered(flags);
}
bool ImGui::IsItemActive()
{
    return ::ImGui_IsItemActive();
}
bool ImGui::IsItemFocused()
{
    return ::ImGui_IsItemFocused();
}
bool ImGui::IsItemClicked()
{
    return ::ImGui_IsItemClicked();
}
bool ImGui::IsItemClickedEx(ImGui::MouseButton mouse_button)
{
    return ::ImGui_IsItemClickedEx(mouse_button);
}
bool ImGui::IsItemVisible()
{
    return ::ImGui_IsItemVisible();
}
bool ImGui::IsItemEdited()
{
    return ::ImGui_IsItemEdited();
}
bool ImGui::IsItemActivated()
{
    return ::ImGui_IsItemActivated();
}
bool ImGui::IsItemDeactivated()
{
    return ::ImGui_IsItemDeactivated();
}
bool ImGui::IsItemDeactivatedAfterEdit()
{
    return ::ImGui_IsItemDeactivatedAfterEdit();
}
bool ImGui::IsItemToggledOpen()
{
    return ::ImGui_IsItemToggledOpen();
}
bool ImGui::IsAnyItemHovered()
{
    return ::ImGui_IsAnyItemHovered();
}
bool ImGui::IsAnyItemActive()
{
    return ::ImGui_IsAnyItemActive();
}
bool ImGui::IsAnyItemFocused()
{
    return ::ImGui_IsAnyItemFocused();
}
uint32_t ImGui::GetItemID()
{
    return ::ImGui_GetItemID();
}
Vector2 ImGui::GetItemRectMin()
{
    return ToVector2(::ImGui_GetItemRectMin());
}
Vector2 ImGui::GetItemRectMax()
{
    return ToVector2(::ImGui_GetItemRectMax());
}
Vector2 ImGui::GetItemRectSize()
{
    return ToVector2(::ImGui_GetItemRectSize());
}
Ref<ImDrawListPtr> ImGui::GetBackgroundDrawList()
{
    Ref<ImDrawListPtr> rv;
    rv.instantiate();
    rv->_SetPtr(::ImGui_GetBackgroundDrawList());
    return rv;
}
Ref<ImDrawListPtr> ImGui::GetForegroundDrawList()
{
    Ref<ImDrawListPtr> rv;
    rv.instantiate();
    rv->_SetPtr(::ImGui_GetForegroundDrawList());
    return rv;
}
bool ImGui::IsRectVisibleBySize(Vector2 size)
{
    return ::ImGui_IsRectVisibleBySize({static_cast<float>(size.x), static_cast<float>(size.y)});
}
bool ImGui::IsRectVisible(Vector2 rect_min, Vector2 rect_max)
{
    return ::ImGui_IsRectVisible({static_cast<float>(rect_min.x), static_cast<float>(rect_min.y)},
                                 {static_cast<float>(rect_max.x), static_cast<float>(rect_max.y)});
}
double ImGui::GetTime()
{
    return ::ImGui_GetTime();
}
int ImGui::GetFrameCount()
{
    return ::ImGui_GetFrameCount();
}
String ImGui::GetStyleColorName(ImGui::Col idx)
{
    return ::ImGui_GetStyleColorName(idx);
}
Vector2 ImGui::CalcTextSize(String text)
{
    return ToVector2(::ImGui_CalcTextSize(text.utf8().get_data()));
}
Vector2 ImGui::CalcTextSizeEx(String text, String text_end, bool hide_text_after_double_hash, real_t wrap_width)
{
    return ToVector2(::ImGui_CalcTextSizeEx(text.utf8().get_data(),
                                            text_end.ptr() ? text_end.utf8().get_data() : nullptr,
                                            hide_text_after_double_hash,
                                            wrap_width));
}
bool ImGui::IsKeyDown(ImGui::Key key)
{
    return ::ImGui_IsKeyDown(key);
}
bool ImGui::IsKeyPressed(ImGui::Key key)
{
    return ::ImGui_IsKeyPressed(key);
}
bool ImGui::IsKeyPressedEx(ImGui::Key key, bool repeat)
{
    return ::ImGui_IsKeyPressedEx(key, repeat);
}
bool ImGui::IsKeyReleased(ImGui::Key key)
{
    return ::ImGui_IsKeyReleased(key);
}
int ImGui::GetKeyPressedAmount(ImGui::Key key, real_t repeat_delay, real_t rate)
{
    return ::ImGui_GetKeyPressedAmount(key, repeat_delay, rate);
}
String ImGui::GetKeyName(ImGui::Key key)
{
    return ::ImGui_GetKeyName(key);
}
void ImGui::SetNextFrameWantCaptureKeyboard(bool want_capture_keyboard)
{
    ::ImGui_SetNextFrameWantCaptureKeyboard(want_capture_keyboard);
}
void ImGui::SetItemKeyOwner(ImGui::Key key)
{
    ::ImGui_SetItemKeyOwner(key);
}
bool ImGui::IsMouseDown(ImGui::MouseButton button)
{
    return ::ImGui_IsMouseDown(button);
}
bool ImGui::IsMouseClicked(ImGui::MouseButton button)
{
    return ::ImGui_IsMouseClicked(button);
}
bool ImGui::IsMouseClickedEx(ImGui::MouseButton button, bool repeat)
{
    return ::ImGui_IsMouseClickedEx(button, repeat);
}
bool ImGui::IsMouseReleased(ImGui::MouseButton button)
{
    return ::ImGui_IsMouseReleased(button);
}
bool ImGui::IsMouseDoubleClicked(ImGui::MouseButton button)
{
    return ::ImGui_IsMouseDoubleClicked(button);
}
int ImGui::GetMouseClickedCount(ImGui::MouseButton button)
{
    return ::ImGui_GetMouseClickedCount(button);
}
bool ImGui::IsMouseHoveringRect(Vector2 r_min, Vector2 r_max)
{
    return ::ImGui_IsMouseHoveringRect({static_cast<float>(r_min.x), static_cast<float>(r_min.y)},
                                       {static_cast<float>(r_max.x), static_cast<float>(r_max.y)});
}
bool ImGui::IsMouseHoveringRectEx(Vector2 r_min, Vector2 r_max, bool clip)
{
    return ::ImGui_IsMouseHoveringRectEx({static_cast<float>(r_min.x), static_cast<float>(r_min.y)},
                                         {static_cast<float>(r_max.x), static_cast<float>(r_max.y)},
                                         clip);
}
bool ImGui::IsAnyMouseDown()
{
    return ::ImGui_IsAnyMouseDown();
}
Vector2 ImGui::GetMousePos()
{
    return ToVector2(::ImGui_GetMousePos());
}
Vector2 ImGui::GetMousePosOnOpeningCurrentPopup()
{
    return ToVector2(::ImGui_GetMousePosOnOpeningCurrentPopup());
}
bool ImGui::IsMouseDragging(ImGui::MouseButton button, real_t lock_threshold)
{
    return ::ImGui_IsMouseDragging(button, lock_threshold);
}
Vector2 ImGui::GetMouseDragDelta(ImGui::MouseButton button, real_t lock_threshold)
{
    return ToVector2(::ImGui_GetMouseDragDelta(button, lock_threshold));
}
void ImGui::ResetMouseDragDelta()
{
    ::ImGui_ResetMouseDragDelta();
}
void ImGui::ResetMouseDragDeltaEx(ImGui::MouseButton button)
{
    ::ImGui_ResetMouseDragDeltaEx(button);
}
ImGui::MouseCursor ImGui::GetMouseCursor()
{
    return static_cast<ImGui::MouseCursor>(::ImGui_GetMouseCursor());
}
void ImGui::SetMouseCursor(ImGui::MouseCursor cursor_type)
{
    ::ImGui_SetMouseCursor(cursor_type);
}
void ImGui::SetNextFrameWantCaptureMouse(bool want_capture_mouse)
{
    ::ImGui_SetNextFrameWantCaptureMouse(want_capture_mouse);
}
String ImGui::GetClipboardText()
{
    return ::ImGui_GetClipboardText();
}
void ImGui::SetClipboardText(String text)
{
    ::ImGui_SetClipboardText(text.utf8().get_data());
}
void ImGui::LoadIniSettingsFromDisk(String ini_filename)
{
    ::ImGui_LoadIniSettingsFromDisk(ini_filename.utf8().get_data());
}
void ImGui::LoadIniSettingsFromMemory(String ini_data, int64_t ini_size)
{
    ::ImGui_LoadIniSettingsFromMemory(ini_data.utf8().get_data(), ini_size);
}
void ImGui::SaveIniSettingsToDisk(String ini_filename)
{
    ::ImGui_SaveIniSettingsToDisk(ini_filename.utf8().get_data());
}
void ImGui::DebugTextEncoding(String text)
{
    ::ImGui_DebugTextEncoding(text.utf8().get_data());
}
void ImGui::DebugFlashStyleColor(ImGui::Col idx)
{
    ::ImGui_DebugFlashStyleColor(idx);
}
void ImGui::DebugStartItemPicker()
{
    ::ImGui_DebugStartItemPicker();
}
bool ImGui::DebugCheckVersionAndDataLayout(String version_str, int64_t sz_io, int64_t sz_style, int64_t sz_vec2,
                                           int64_t sz_vec4, int64_t sz_drawvert, int64_t sz_drawidx)
{
    return ::ImGui_DebugCheckVersionAndDataLayout(version_str.utf8().get_data(),
                                                  sz_io,
                                                  sz_style,
                                                  sz_vec2,
                                                  sz_vec4,
                                                  sz_drawvert,
                                                  sz_drawidx);
}
void ImGui::DebugLog(String fmt)
{
    ::ImGui_DebugLog("%s", fmt.utf8().get_data());
}
void ImGui::ImGuiStyle_ScaleAllSizes(Ref<ImGuiStylePtr> self, real_t scale_factor)
{
    ::ImGuiStyle_ScaleAllSizes(self->_GetPtr(), scale_factor);
}
void ImGui::ImGuiListClipper_Begin(Ref<ImGuiListClipperPtr> self, int items_count, real_t items_height)
{
    ::ImGuiListClipper_Begin(self->_GetPtr(), items_count, items_height);
}
void ImGui::ImGuiListClipper_End(Ref<ImGuiListClipperPtr> self)
{
    ::ImGuiListClipper_End(self->_GetPtr());
}
bool ImGui::ImGuiListClipper_Step(Ref<ImGuiListClipperPtr> self)
{
    return ::ImGuiListClipper_Step(self->_GetPtr());
}
void ImGui::ImGuiListClipper_IncludeItemByIndex(Ref<ImGuiListClipperPtr> self, int item_index)
{
    ::ImGuiListClipper_IncludeItemByIndex(self->_GetPtr(), item_index);
}
void ImGui::ImGuiListClipper_IncludeItemsByIndex(Ref<ImGuiListClipperPtr> self, int item_begin, int item_end)
{
    ::ImGuiListClipper_IncludeItemsByIndex(self->_GetPtr(), item_begin, item_end);
}
void ImGui::ImGuiListClipper_SeekCursorForItem(Ref<ImGuiListClipperPtr> self, int item_index)
{
    ::ImGuiListClipper_SeekCursorForItem(self->_GetPtr(), item_index);
}
void ImGui::ImDrawList_PushClipRect(Ref<ImDrawListPtr> self, Vector2 clip_rect_min, Vector2 clip_rect_max,
                                    bool intersect_with_current_clip_rect)
{
    ::ImDrawList_PushClipRect(self->_GetPtr(),
                              {static_cast<float>(clip_rect_min.x), static_cast<float>(clip_rect_min.y)},
                              {static_cast<float>(clip_rect_max.x), static_cast<float>(clip_rect_max.y)},
                              intersect_with_current_clip_rect);
}
void ImGui::ImDrawList_PushClipRectFullScreen(Ref<ImDrawListPtr> self)
{
    ::ImDrawList_PushClipRectFullScreen(self->_GetPtr());
}
void ImGui::ImDrawList_PopClipRect(Ref<ImDrawListPtr> self)
{
    ::ImDrawList_PopClipRect(self->_GetPtr());
}
void ImGui::ImDrawList_PushTextureID(Ref<ImDrawListPtr> self, Ref<Texture2D> texture_id)
{
    ::ImDrawList_PushTextureID(self->_GetPtr(), (ImTextureID)texture_id->get_rid().get_id());
}
void ImGui::ImDrawList_PopTextureID(Ref<ImDrawListPtr> self)
{
    ::ImDrawList_PopTextureID(self->_GetPtr());
}
void ImGui::ImDrawList_AddLine(Ref<ImDrawListPtr> self, Vector2 p1, Vector2 p2, Color col)
{
    ::ImDrawList_AddLine(self->_GetPtr(),
                         {static_cast<float>(p1.x), static_cast<float>(p1.y)},
                         {static_cast<float>(p2.x), static_cast<float>(p2.y)},
                         col.to_abgr32());
}
void ImGui::ImDrawList_AddLineEx(Ref<ImDrawListPtr> self, Vector2 p1, Vector2 p2, Color col, real_t thickness)
{
    ::ImDrawList_AddLineEx(self->_GetPtr(),
                           {static_cast<float>(p1.x), static_cast<float>(p1.y)},
                           {static_cast<float>(p2.x), static_cast<float>(p2.y)},
                           col.to_abgr32(),
                           thickness);
}
void ImGui::ImDrawList_AddRect(Ref<ImDrawListPtr> self, Vector2 p_min, Vector2 p_max, Color col)
{
    ::ImDrawList_AddRect(self->_GetPtr(),
                         {static_cast<float>(p_min.x), static_cast<float>(p_min.y)},
                         {static_cast<float>(p_max.x), static_cast<float>(p_max.y)},
                         col.to_abgr32());
}
void ImGui::ImDrawList_AddRectEx(Ref<ImDrawListPtr> self, Vector2 p_min, Vector2 p_max, Color col, real_t rounding,
                                 BitField<ImGui::DrawFlags> flags, real_t thickness)
{
    ::ImDrawList_AddRectEx(self->_GetPtr(),
                           {static_cast<float>(p_min.x), static_cast<float>(p_min.y)},
                           {static_cast<float>(p_max.x), static_cast<float>(p_max.y)},
                           col.to_abgr32(),
                           rounding,
                           flags,
                           thickness);
}
void ImGui::ImDrawList_AddRectFilled(Ref<ImDrawListPtr> self, Vector2 p_min, Vector2 p_max, Color col)
{
    ::ImDrawList_AddRectFilled(self->_GetPtr(),
                               {static_cast<float>(p_min.x), static_cast<float>(p_min.y)},
                               {static_cast<float>(p_max.x), static_cast<float>(p_max.y)},
                               col.to_abgr32());
}
void ImGui::ImDrawList_AddRectFilledEx(Ref<ImDrawListPtr> self, Vector2 p_min, Vector2 p_max, Color col,
                                       real_t rounding, BitField<ImGui::DrawFlags> flags)
{
    ::ImDrawList_AddRectFilledEx(self->_GetPtr(),
                                 {static_cast<float>(p_min.x), static_cast<float>(p_min.y)},
                                 {static_cast<float>(p_max.x), static_cast<float>(p_max.y)},
                                 col.to_abgr32(),
                                 rounding,
                                 flags);
}
void ImGui::ImDrawList_AddRectFilledMultiColor(Ref<ImDrawListPtr> self, Vector2 p_min, Vector2 p_max,
                                               Color col_upr_left, Color col_upr_right, Color col_bot_right,
                                               Color col_bot_left)
{
    ::ImDrawList_AddRectFilledMultiColor(self->_GetPtr(),
                                         {static_cast<float>(p_min.x), static_cast<float>(p_min.y)},
                                         {static_cast<float>(p_max.x), static_cast<float>(p_max.y)},
                                         col_upr_left.to_abgr32(),
                                         col_upr_right.to_abgr32(),
                                         col_bot_right.to_abgr32(),
                                         col_bot_left.to_abgr32());
}
void ImGui::ImDrawList_AddQuad(Ref<ImDrawListPtr> self, Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, Color col)
{
    ::ImDrawList_AddQuad(self->_GetPtr(),
                         {static_cast<float>(p1.x), static_cast<float>(p1.y)},
                         {static_cast<float>(p2.x), static_cast<float>(p2.y)},
                         {static_cast<float>(p3.x), static_cast<float>(p3.y)},
                         {static_cast<float>(p4.x), static_cast<float>(p4.y)},
                         col.to_abgr32());
}
void ImGui::ImDrawList_AddQuadEx(Ref<ImDrawListPtr> self, Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, Color col,
                                 real_t thickness)
{
    ::ImDrawList_AddQuadEx(self->_GetPtr(),
                           {static_cast<float>(p1.x), static_cast<float>(p1.y)},
                           {static_cast<float>(p2.x), static_cast<float>(p2.y)},
                           {static_cast<float>(p3.x), static_cast<float>(p3.y)},
                           {static_cast<float>(p4.x), static_cast<float>(p4.y)},
                           col.to_abgr32(),
                           thickness);
}
void ImGui::ImDrawList_AddQuadFilled(Ref<ImDrawListPtr> self, Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, Color col)
{
    ::ImDrawList_AddQuadFilled(self->_GetPtr(),
                               {static_cast<float>(p1.x), static_cast<float>(p1.y)},
                               {static_cast<float>(p2.x), static_cast<float>(p2.y)},
                               {static_cast<float>(p3.x), static_cast<float>(p3.y)},
                               {static_cast<float>(p4.x), static_cast<float>(p4.y)},
                               col.to_abgr32());
}
void ImGui::ImDrawList_AddTriangle(Ref<ImDrawListPtr> self, Vector2 p1, Vector2 p2, Vector2 p3, Color col)
{
    ::ImDrawList_AddTriangle(self->_GetPtr(),
                             {static_cast<float>(p1.x), static_cast<float>(p1.y)},
                             {static_cast<float>(p2.x), static_cast<float>(p2.y)},
                             {static_cast<float>(p3.x), static_cast<float>(p3.y)},
                             col.to_abgr32());
}
void ImGui::ImDrawList_AddTriangleEx(Ref<ImDrawListPtr> self, Vector2 p1, Vector2 p2, Vector2 p3, Color col,
                                     real_t thickness)
{
    ::ImDrawList_AddTriangleEx(self->_GetPtr(),
                               {static_cast<float>(p1.x), static_cast<float>(p1.y)},
                               {static_cast<float>(p2.x), static_cast<float>(p2.y)},
                               {static_cast<float>(p3.x), static_cast<float>(p3.y)},
                               col.to_abgr32(),
                               thickness);
}
void ImGui::ImDrawList_AddTriangleFilled(Ref<ImDrawListPtr> self, Vector2 p1, Vector2 p2, Vector2 p3, Color col)
{
    ::ImDrawList_AddTriangleFilled(self->_GetPtr(),
                                   {static_cast<float>(p1.x), static_cast<float>(p1.y)},
                                   {static_cast<float>(p2.x), static_cast<float>(p2.y)},
                                   {static_cast<float>(p3.x), static_cast<float>(p3.y)},
                                   col.to_abgr32());
}
void ImGui::ImDrawList_AddCircle(Ref<ImDrawListPtr> self, Vector2 center, real_t radius, Color col)
{
    ::ImDrawList_AddCircle(self->_GetPtr(),
                           {static_cast<float>(center.x), static_cast<float>(center.y)},
                           radius,
                           col.to_abgr32());
}
void ImGui::ImDrawList_AddCircleEx(Ref<ImDrawListPtr> self, Vector2 center, real_t radius, Color col, int num_segments,
                                   real_t thickness)
{
    ::ImDrawList_AddCircleEx(self->_GetPtr(),
                             {static_cast<float>(center.x), static_cast<float>(center.y)},
                             radius,
                             col.to_abgr32(),
                             num_segments,
                             thickness);
}
void ImGui::ImDrawList_AddCircleFilled(Ref<ImDrawListPtr> self, Vector2 center, real_t radius, Color col,
                                       int num_segments)
{
    ::ImDrawList_AddCircleFilled(self->_GetPtr(),
                                 {static_cast<float>(center.x), static_cast<float>(center.y)},
                                 radius,
                                 col.to_abgr32(),
                                 num_segments);
}
void ImGui::ImDrawList_AddNgon(Ref<ImDrawListPtr> self, Vector2 center, real_t radius, Color col, int num_segments)
{
    ::ImDrawList_AddNgon(self->_GetPtr(),
                         {static_cast<float>(center.x), static_cast<float>(center.y)},
                         radius,
                         col.to_abgr32(),
                         num_segments);
}
void ImGui::ImDrawList_AddNgonEx(Ref<ImDrawListPtr> self, Vector2 center, real_t radius, Color col, int num_segments,
                                 real_t thickness)
{
    ::ImDrawList_AddNgonEx(self->_GetPtr(),
                           {static_cast<float>(center.x), static_cast<float>(center.y)},
                           radius,
                           col.to_abgr32(),
                           num_segments,
                           thickness);
}
void ImGui::ImDrawList_AddNgonFilled(Ref<ImDrawListPtr> self, Vector2 center, real_t radius, Color col,
                                     int num_segments)
{
    ::ImDrawList_AddNgonFilled(self->_GetPtr(),
                               {static_cast<float>(center.x), static_cast<float>(center.y)},
                               radius,
                               col.to_abgr32(),
                               num_segments);
}
void ImGui::ImDrawList_AddEllipse(Ref<ImDrawListPtr> self, Vector2 center, Vector2 radius, Color col)
{
    ::ImDrawList_AddEllipse(self->_GetPtr(),
                            {static_cast<float>(center.x), static_cast<float>(center.y)},
                            {static_cast<float>(radius.x), static_cast<float>(radius.y)},
                            col.to_abgr32());
}
void ImGui::ImDrawList_AddEllipseEx(Ref<ImDrawListPtr> self, Vector2 center, Vector2 radius, Color col, real_t rot,
                                    int num_segments, real_t thickness)
{
    ::ImDrawList_AddEllipseEx(self->_GetPtr(),
                              {static_cast<float>(center.x), static_cast<float>(center.y)},
                              {static_cast<float>(radius.x), static_cast<float>(radius.y)},
                              col.to_abgr32(),
                              rot,
                              num_segments,
                              thickness);
}
void ImGui::ImDrawList_AddEllipseFilled(Ref<ImDrawListPtr> self, Vector2 center, Vector2 radius, Color col)
{
    ::ImDrawList_AddEllipseFilled(self->_GetPtr(),
                                  {static_cast<float>(center.x), static_cast<float>(center.y)},
                                  {static_cast<float>(radius.x), static_cast<float>(radius.y)},
                                  col.to_abgr32());
}
void ImGui::ImDrawList_AddEllipseFilledEx(Ref<ImDrawListPtr> self, Vector2 center, Vector2 radius, Color col,
                                          real_t rot, int num_segments)
{
    ::ImDrawList_AddEllipseFilledEx(self->_GetPtr(),
                                    {static_cast<float>(center.x), static_cast<float>(center.y)},
                                    {static_cast<float>(radius.x), static_cast<float>(radius.y)},
                                    col.to_abgr32(),
                                    rot,
                                    num_segments);
}
void ImGui::ImDrawList_AddText(Ref<ImDrawListPtr> self, Vector2 pos, Color col, String text_begin)
{
    ::ImDrawList_AddText(self->_GetPtr(),
                         {static_cast<float>(pos.x), static_cast<float>(pos.y)},
                         col.to_abgr32(),
                         text_begin.utf8().get_data());
}
void ImGui::ImDrawList_AddTextEx(Ref<ImDrawListPtr> self, Vector2 pos, Color col, String text_begin, String text_end)
{
    ::ImDrawList_AddTextEx(self->_GetPtr(),
                           {static_cast<float>(pos.x), static_cast<float>(pos.y)},
                           col.to_abgr32(),
                           text_begin.utf8().get_data(),
                           text_end.ptr() ? text_end.utf8().get_data() : nullptr);
}
void ImGui::ImDrawList_AddTextImFontPtr(Ref<ImDrawListPtr> self, int64_t font, real_t font_size, Vector2 pos, Color col,
                                        String text_begin)
{
    ::ImDrawList_AddTextImFontPtr(self->_GetPtr(),
                                  (ImFont*)font,
                                  font_size,
                                  {static_cast<float>(pos.x), static_cast<float>(pos.y)},
                                  col.to_abgr32(),
                                  text_begin.utf8().get_data());
}
void ImGui::ImDrawList_AddBezierCubic(Ref<ImDrawListPtr> self, Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4,
                                      Color col, real_t thickness, int num_segments)
{
    ::ImDrawList_AddBezierCubic(self->_GetPtr(),
                                {static_cast<float>(p1.x), static_cast<float>(p1.y)},
                                {static_cast<float>(p2.x), static_cast<float>(p2.y)},
                                {static_cast<float>(p3.x), static_cast<float>(p3.y)},
                                {static_cast<float>(p4.x), static_cast<float>(p4.y)},
                                col.to_abgr32(),
                                thickness,
                                num_segments);
}
void ImGui::ImDrawList_AddBezierQuadratic(Ref<ImDrawListPtr> self, Vector2 p1, Vector2 p2, Vector2 p3, Color col,
                                          real_t thickness, int num_segments)
{
    ::ImDrawList_AddBezierQuadratic(self->_GetPtr(),
                                    {static_cast<float>(p1.x), static_cast<float>(p1.y)},
                                    {static_cast<float>(p2.x), static_cast<float>(p2.y)},
                                    {static_cast<float>(p3.x), static_cast<float>(p3.y)},
                                    col.to_abgr32(),
                                    thickness,
                                    num_segments);
}
void ImGui::ImDrawList_AddImage(Ref<ImDrawListPtr> self, Ref<Texture2D> user_texture_id, Vector2 p_min, Vector2 p_max)
{
    ::ImDrawList_AddImage(self->_GetPtr(),
                          (ImTextureID)user_texture_id->get_rid().get_id(),
                          {static_cast<float>(p_min.x), static_cast<float>(p_min.y)},
                          {static_cast<float>(p_max.x), static_cast<float>(p_max.y)});
}
void ImGui::ImDrawList_AddImageEx(Ref<ImDrawListPtr> self, Ref<Texture2D> user_texture_id, Vector2 p_min, Vector2 p_max,
                                  Vector2 uv_min, Vector2 uv_max, Color col)
{
    ::ImDrawList_AddImageEx(self->_GetPtr(),
                            (ImTextureID)user_texture_id->get_rid().get_id(),
                            {static_cast<float>(p_min.x), static_cast<float>(p_min.y)},
                            {static_cast<float>(p_max.x), static_cast<float>(p_max.y)},
                            {static_cast<float>(uv_min.x), static_cast<float>(uv_min.y)},
                            {static_cast<float>(uv_max.x), static_cast<float>(uv_max.y)},
                            col.to_abgr32());
}
void ImGui::ImDrawList_AddImageQuad(Ref<ImDrawListPtr> self, Ref<Texture2D> user_texture_id, Vector2 p1, Vector2 p2,
                                    Vector2 p3, Vector2 p4)
{
    ::ImDrawList_AddImageQuad(self->_GetPtr(),
                              (ImTextureID)user_texture_id->get_rid().get_id(),
                              {static_cast<float>(p1.x), static_cast<float>(p1.y)},
                              {static_cast<float>(p2.x), static_cast<float>(p2.y)},
                              {static_cast<float>(p3.x), static_cast<float>(p3.y)},
                              {static_cast<float>(p4.x), static_cast<float>(p4.y)});
}
void ImGui::ImDrawList_AddImageQuadEx(Ref<ImDrawListPtr> self, Ref<Texture2D> user_texture_id, Vector2 p1, Vector2 p2,
                                      Vector2 p3, Vector2 p4, Vector2 uv1, Vector2 uv2, Vector2 uv3, Vector2 uv4,
                                      Color col)
{
    ::ImDrawList_AddImageQuadEx(self->_GetPtr(),
                                (ImTextureID)user_texture_id->get_rid().get_id(),
                                {static_cast<float>(p1.x), static_cast<float>(p1.y)},
                                {static_cast<float>(p2.x), static_cast<float>(p2.y)},
                                {static_cast<float>(p3.x), static_cast<float>(p3.y)},
                                {static_cast<float>(p4.x), static_cast<float>(p4.y)},
                                {static_cast<float>(uv1.x), static_cast<float>(uv1.y)},
                                {static_cast<float>(uv2.x), static_cast<float>(uv2.y)},
                                {static_cast<float>(uv3.x), static_cast<float>(uv3.y)},
                                {static_cast<float>(uv4.x), static_cast<float>(uv4.y)},
                                col.to_abgr32());
}
void ImGui::ImDrawList_AddImageRounded(Ref<ImDrawListPtr> self, Ref<Texture2D> user_texture_id, Vector2 p_min,
                                       Vector2 p_max, Vector2 uv_min, Vector2 uv_max, Color col, real_t rounding,
                                       BitField<ImGui::DrawFlags> flags)
{
    ::ImDrawList_AddImageRounded(self->_GetPtr(),
                                 (ImTextureID)user_texture_id->get_rid().get_id(),
                                 {static_cast<float>(p_min.x), static_cast<float>(p_min.y)},
                                 {static_cast<float>(p_max.x), static_cast<float>(p_max.y)},
                                 {static_cast<float>(uv_min.x), static_cast<float>(uv_min.y)},
                                 {static_cast<float>(uv_max.x), static_cast<float>(uv_max.y)},
                                 col.to_abgr32(),
                                 rounding,
                                 flags);
}
void ImGui::ImDrawList_PathClear(Ref<ImDrawListPtr> self)
{
    ::ImDrawList_PathClear(self->_GetPtr());
}
void ImGui::ImDrawList_PathLineTo(Ref<ImDrawListPtr> self, Vector2 pos)
{
    ::ImDrawList_PathLineTo(self->_GetPtr(), {static_cast<float>(pos.x), static_cast<float>(pos.y)});
}
void ImGui::ImDrawList_PathLineToMergeDuplicate(Ref<ImDrawListPtr> self, Vector2 pos)
{
    ::ImDrawList_PathLineToMergeDuplicate(self->_GetPtr(), {static_cast<float>(pos.x), static_cast<float>(pos.y)});
}
void ImGui::ImDrawList_PathFillConvex(Ref<ImDrawListPtr> self, Color col)
{
    ::ImDrawList_PathFillConvex(self->_GetPtr(), col.to_abgr32());
}
void ImGui::ImDrawList_PathFillConcave(Ref<ImDrawListPtr> self, Color col)
{
    ::ImDrawList_PathFillConcave(self->_GetPtr(), col.to_abgr32());
}
void ImGui::ImDrawList_PathStroke(Ref<ImDrawListPtr> self, Color col, BitField<ImGui::DrawFlags> flags,
                                  real_t thickness)
{
    ::ImDrawList_PathStroke(self->_GetPtr(), col.to_abgr32(), flags, thickness);
}
void ImGui::ImDrawList_PathArcTo(Ref<ImDrawListPtr> self, Vector2 center, real_t radius, real_t a_min, real_t a_max,
                                 int num_segments)
{
    ::ImDrawList_PathArcTo(self->_GetPtr(),
                           {static_cast<float>(center.x), static_cast<float>(center.y)},
                           radius,
                           a_min,
                           a_max,
                           num_segments);
}
void ImGui::ImDrawList_PathArcToFast(Ref<ImDrawListPtr> self, Vector2 center, real_t radius, int a_min_of_12,
                                     int a_max_of_12)
{
    ::ImDrawList_PathArcToFast(self->_GetPtr(),
                               {static_cast<float>(center.x), static_cast<float>(center.y)},
                               radius,
                               a_min_of_12,
                               a_max_of_12);
}
void ImGui::ImDrawList_PathEllipticalArcTo(Ref<ImDrawListPtr> self, Vector2 center, Vector2 radius, real_t rot,
                                           real_t a_min, real_t a_max)
{
    ::ImDrawList_PathEllipticalArcTo(self->_GetPtr(),
                                     {static_cast<float>(center.x), static_cast<float>(center.y)},
                                     {static_cast<float>(radius.x), static_cast<float>(radius.y)},
                                     rot,
                                     a_min,
                                     a_max);
}
void ImGui::ImDrawList_PathEllipticalArcToEx(Ref<ImDrawListPtr> self, Vector2 center, Vector2 radius, real_t rot,
                                             real_t a_min, real_t a_max, int num_segments)
{
    ::ImDrawList_PathEllipticalArcToEx(self->_GetPtr(),
                                       {static_cast<float>(center.x), static_cast<float>(center.y)},
                                       {static_cast<float>(radius.x), static_cast<float>(radius.y)},
                                       rot,
                                       a_min,
                                       a_max,
                                       num_segments);
}
void ImGui::ImDrawList_PathBezierCubicCurveTo(Ref<ImDrawListPtr> self, Vector2 p2, Vector2 p3, Vector2 p4,
                                              int num_segments)
{
    ::ImDrawList_PathBezierCubicCurveTo(self->_GetPtr(),
                                        {static_cast<float>(p2.x), static_cast<float>(p2.y)},
                                        {static_cast<float>(p3.x), static_cast<float>(p3.y)},
                                        {static_cast<float>(p4.x), static_cast<float>(p4.y)},
                                        num_segments);
}
void ImGui::ImDrawList_PathBezierQuadraticCurveTo(Ref<ImDrawListPtr> self, Vector2 p2, Vector2 p3, int num_segments)
{
    ::ImDrawList_PathBezierQuadraticCurveTo(self->_GetPtr(),
                                            {static_cast<float>(p2.x), static_cast<float>(p2.y)},
                                            {static_cast<float>(p3.x), static_cast<float>(p3.y)},
                                            num_segments);
}
void ImGui::ImDrawList_PathRect(Ref<ImDrawListPtr> self, Vector2 rect_min, Vector2 rect_max, real_t rounding,
                                BitField<ImGui::DrawFlags> flags)
{
    ::ImDrawList_PathRect(self->_GetPtr(),
                          {static_cast<float>(rect_min.x), static_cast<float>(rect_min.y)},
                          {static_cast<float>(rect_max.x), static_cast<float>(rect_max.y)},
                          rounding,
                          flags);
}
void ImGui::ImDrawList_AddDrawCmd(Ref<ImDrawListPtr> self)
{
    ::ImDrawList_AddDrawCmd(self->_GetPtr());
}
void ImGui::ImDrawList_ChannelsSplit(Ref<ImDrawListPtr> self, int count)
{
    ::ImDrawList_ChannelsSplit(self->_GetPtr(), count);
}
void ImGui::ImDrawList_ChannelsMerge(Ref<ImDrawListPtr> self)
{
    ::ImDrawList_ChannelsMerge(self->_GetPtr());
}
void ImGui::ImDrawList_ChannelsSetCurrent(Ref<ImDrawListPtr> self, int n)
{
    ::ImDrawList_ChannelsSetCurrent(self->_GetPtr(), n);
}
void ImGui::ImDrawList_PrimReserve(Ref<ImDrawListPtr> self, int idx_count, int vtx_count)
{
    ::ImDrawList_PrimReserve(self->_GetPtr(), idx_count, vtx_count);
}
void ImGui::ImDrawList_PrimUnreserve(Ref<ImDrawListPtr> self, int idx_count, int vtx_count)
{
    ::ImDrawList_PrimUnreserve(self->_GetPtr(), idx_count, vtx_count);
}
void ImGui::ImDrawList_PrimRect(Ref<ImDrawListPtr> self, Vector2 a, Vector2 b, Color col)
{
    ::ImDrawList_PrimRect(self->_GetPtr(),
                          {static_cast<float>(a.x), static_cast<float>(a.y)},
                          {static_cast<float>(b.x), static_cast<float>(b.y)},
                          col.to_abgr32());
}
void ImGui::ImDrawList_PrimWriteVtx(Ref<ImDrawListPtr> self, Vector2 pos, Vector2 uv, Color col)
{
    ::ImDrawList_PrimWriteVtx(self->_GetPtr(),
                              {static_cast<float>(pos.x), static_cast<float>(pos.y)},
                              {static_cast<float>(uv.x), static_cast<float>(uv.y)},
                              col.to_abgr32());
}
void ImGui::ImDrawList_PrimVtx(Ref<ImDrawListPtr> self, Vector2 pos, Vector2 uv, Color col)
{
    ::ImDrawList_PrimVtx(self->_GetPtr(),
                         {static_cast<float>(pos.x), static_cast<float>(pos.y)},
                         {static_cast<float>(uv.x), static_cast<float>(uv.y)},
                         col.to_abgr32());
}