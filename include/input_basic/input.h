#pragma once
#ifndef INPUT_BASIC_INTERFACE_INPUT_H_
#define INPUT_BASIC_INTERFACE_INPUT_H_

typedef struct InputBasic_Context *InputBasic_ContextHandle;

typedef struct InputBasic_Mouse *InputBasic_MouseHandle;
typedef struct InputBasic_Keyboard *InputBasic_KeyboardHandle;
typedef struct InputBasic_Pad *InputBasic_PadHandle;

typedef enum InputBasic_MouseButton
{
	InputBasic_MouseButton_Left = 0,
	InputBasic_MouseButton_Middle,
	InputBasic_MouseButton_Right,
	InputBasic_MouseButton_WheelUp,
	InputBasic_MouseButton_WheelDown,
	InputBasic_MouseButton_5,
	InputBasic_MouseButton_6,
	InputBasic_MouseButton_7,
	InputBasic_MouseButton_8,
	InputBasic_MouseButton_9,
	InputBasic_MouseButton_10,
	InputBasic_MouseButton_11,
	InputBasic_MouseButton_12,
	InputBasic_MouseButton_13,
	InputBasic_MouseButton_14,
	InputBasic_MouseButton_15,
	InputBasic_MouseButton_16,
	InputBasic_MouseButton_17,
	InputBasic_MouseButton_18,
	InputBasic_MouseButton_19,
	InputBasic_MouseButton_20,
} InputBasic_MouseButton;

typedef enum InputBasic_Key {
	InputBasic_Key_Escape,
	InputBasic_Key_F1,
	InputBasic_Key_F2,
	InputBasic_Key_F3,
	InputBasic_Key_F4,
	InputBasic_Key_F5,
	InputBasic_Key_F6,
	InputBasic_Key_F7,
	InputBasic_Key_F8,
	InputBasic_Key_F9,
	InputBasic_Key_F10,
	InputBasic_Key_F11,
	InputBasic_Key_F12,
	InputBasic_Key_F13,
	InputBasic_Key_F14,
	InputBasic_Key_F15,
	InputBasic_Key_F16,
	InputBasic_Key_F17,
	InputBasic_Key_F18,
	InputBasic_Key_F19,
	InputBasic_Key_Print,
	InputBasic_Key_ScrollLock,
	InputBasic_Key_Break,
	InputBasic_Key_Space,
	InputBasic_Key_Apostrophe,
	InputBasic_Key_Comma,
	InputBasic_Key_Minus,
	InputBasic_Key_Period,
	InputBasic_Key_Slash,
	InputBasic_Key_0,
	InputBasic_Key_1,
	InputBasic_Key_2,
	InputBasic_Key_3,
	InputBasic_Key_4,
	InputBasic_Key_5,
	InputBasic_Key_6,
	InputBasic_Key_7,
	InputBasic_Key_8,
	InputBasic_Key_9,
	InputBasic_Key_Semicolon,
	InputBasic_Key_Less,
	InputBasic_Key_Equal,
	InputBasic_Key_A,
	InputBasic_Key_B,
	InputBasic_Key_C,
	InputBasic_Key_D,
	InputBasic_Key_E,
	InputBasic_Key_F,
	InputBasic_Key_G,
	InputBasic_Key_H,
	InputBasic_Key_I,
	InputBasic_Key_J,
	InputBasic_Key_K,
	InputBasic_Key_L,
	InputBasic_Key_M,
	InputBasic_Key_N,
	InputBasic_Key_O,
	InputBasic_Key_P,
	InputBasic_Key_Q,
	InputBasic_Key_R,
	InputBasic_Key_S,
	InputBasic_Key_T,
	InputBasic_Key_U,
	InputBasic_Key_V,
	InputBasic_Key_W,
	InputBasic_Key_X,
	InputBasic_Key_Y,
	InputBasic_Key_Z,
	InputBasic_Key_BracketLeft,
	InputBasic_Key_Backslash,
	InputBasic_Key_BracketRight,
	InputBasic_Key_Grave,
	InputBasic_Key_Left,
	InputBasic_Key_Right,
	InputBasic_Key_Up,
	InputBasic_Key_Down,
	InputBasic_Key_Insert,
	InputBasic_Key_Home,
	InputBasic_Key_Delete,
	InputBasic_Key_End,
	InputBasic_Key_PageUp,
	InputBasic_Key_PageDown,
	InputBasic_Key_NumLock,
	InputBasic_Key_KpEqual,
	InputBasic_Key_KpDivide,
	InputBasic_Key_KpMultiply,
	InputBasic_Key_KpSubtract,
	InputBasic_Key_KpAdd,
	InputBasic_Key_KpEnter,
	InputBasic_Key_KpInsert,
	InputBasic_Key_KpEnd,
	InputBasic_Key_KpDown,
	InputBasic_Key_KpPageDown,
	InputBasic_Key_KpLeft,
	InputBasic_Key_KpBegin,
	InputBasic_Key_KpRight,
	InputBasic_Key_KpHome,
	InputBasic_Key_KpUp,
	InputBasic_Key_KpPageUp,
	InputBasic_Key_KpDelete,
	InputBasic_Key_BackSpace,
	InputBasic_Key_Tab,
	InputBasic_Key_Return,
	InputBasic_Key_CapsLock,
	InputBasic_Key_ShiftL,
	InputBasic_Key_CtrlL,
	InputBasic_Key_SuperL,
	InputBasic_Key_AltL,
	InputBasic_Key_AltR,
	InputBasic_Key_SuperR,
	InputBasic_Key_Menu,
	InputBasic_Key_CtrlR,
	InputBasic_Key_ShiftR,
	InputBasic_Key_Back,
	InputBasic_Key_SoftLeft,
	InputBasic_Key_SoftRight,
	InputBasic_Key_Call,
	InputBasic_Key_Endcall,
	InputBasic_Key_Star,
	InputBasic_Key_Pound,
	InputBasic_Key_DpadCenter,
	InputBasic_Key_VolumeUp,
	InputBasic_Key_VolumeDown,
	InputBasic_Key_Power,
	InputBasic_Key_Camera,
	InputBasic_Key_Clear,
	InputBasic_Key_Symbol,
	InputBasic_Key_Explorer,
	InputBasic_Key_Envelope,
	InputBasic_Key_Equals,
	InputBasic_Key_At,
	InputBasic_Key_Headsethook,
	InputBasic_Key_Focus,
	InputBasic_Key_Plus,
	InputBasic_Key_Notification,
	InputBasic_Key_Search,
	InputBasic_Key_MediaPlayPause,
	InputBasic_Key_MediaStop,
	InputBasic_Key_MediaNext,
	InputBasic_Key_MediaPrevious,
	InputBasic_Key_MediaRewind,
	InputBasic_Key_MediaFastForward,
	InputBasic_Key_Mute,
	InputBasic_Key_Pictsymbols,
	InputBasic_Key_SwitchCharset,
	InputBasic_Key_Forward,
	InputBasic_Key_Extra1,
	InputBasic_Key_Extra2,
	InputBasic_Key_Extra3,
	InputBasic_Key_Extra4,
	InputBasic_Key_Extra5,
	InputBasic_Key_Extra6,
	InputBasic_Key_Fn,
	InputBasic_Key_Circumflex,
	InputBasic_Key_Ssharp,
	InputBasic_Key_Acute,
	InputBasic_Key_AltGr,
	InputBasic_Key_Numbersign,
	InputBasic_Key_Udiaeresis,
	InputBasic_Key_Adiaeresis,
	InputBasic_Key_Odiaeresis,
	InputBasic_Key_Section,
	InputBasic_Key_Aring,
	InputBasic_Key_Diaeresis,
	InputBasic_Key_Twosuperior,
	InputBasic_Key_RightParenthesis,
	InputBasic_Key_Dollar,
	InputBasic_Key_Ugrave,
	InputBasic_Key_Asterisk,
	InputBasic_Key_Colon,
	InputBasic_Key_Exclam,
	InputBasic_Key_BraceLeft,
	InputBasic_Key_BraceRight,
	InputBasic_Key_SysRq,

} InputBasic_Key;

typedef enum InputBasic_Axis {
	InputBasis_Axis_X, // left stick on pad
	InputBasis_Axis_Y,

	InputBasis_Axis_RightX, // right stick on pad
	InputBasis_Axis_RightY,

} InputBasic_Axis;

typedef enum InputBasic_PadButton {
	InputBasic_PadButton_Start,
	InputBasic_PadButton_Select,
	InputBasic_PadButton_Left,
	InputBasic_PadButton_Right,
	InputBasic_PadButton_Up,
	InputBasic_PadButton_Down,
	InputBasic_PadButton_A, // Cross
	InputBasic_PadButton_B, // Circle
	InputBasic_PadButton_X, // Square
	InputBasic_PadButton_Y, // Triangle
	InputBasic_PadButton_L1,
	InputBasic_PadButton_R1,
	InputBasic_PadButton_L2,
	InputBasic_PadButton_R2,
	InputBasic_PadButton_L3, // Left thumb
	InputBasic_PadButton_R3, // Right thumb
	InputBasic_PadButton_Home, // PS button
	InputBasic_PadButton_17,
	InputBasic_PadButton_18,
	InputBasic_PadButton_19,
	InputBasic_PadButton_20,
	InputBasic_PadButton_21,
	InputBasic_PadButton_22,
	InputBasic_PadButton_23,
	InputBasic_PadButton_24,
	InputBasic_PadButton_25,
	InputBasic_PadButton_26,
	InputBasic_PadButton_27,
	InputBasic_PadButton_28,
	InputBasic_PadButton_29,
	InputBasic_PadButton_30,
	InputBasic_PadButton_31,
} InputBasic_PadButton;

AL2O3_EXTERN_C InputBasic_ContextHandle InputBasic_Create();
AL2O3_EXTERN_C void InputBasic_Destroy(InputBasic_ContextHandle handle);

AL2O3_EXTERN_C void InputBasic_SetWindowSize(InputBasic_ContextHandle handle, uint32_t width, uint32_t height);
AL2O3_EXTERN_C void InputBasic_Update(InputBasic_ContextHandle handle, double deltaTimeInMS);

AL2O3_EXTERN_C void InputBasic_MapToMouseButton(InputBasic_ContextHandle handle, uint32_t userId, InputBasic_MouseHandle mouse, InputBasic_MouseButton button);
AL2O3_EXTERN_C void InputBasic_MapToKey(InputBasic_ContextHandle handle, uint32_t userId, InputBasic_KeyboardHandle keyboard, InputBasic_Key key);
AL2O3_EXTERN_C void InputBasic_MapToPadButton(InputBasic_ContextHandle handle, uint32_t userId, InputBasic_PadHandle pad, InputBasic_PadButton button);

AL2O3_EXTERN_C void InputBasic_MapToMouseAxis(InputBasic_ContextHandle handle, uint32_t userId, InputBasic_MouseHandle mouse, InputBasic_Axis axis);
AL2O3_EXTERN_C void InputBasic_MapToPadAxis(InputBasic_ContextHandle handle, uint32_t userId, InputBasic_PadHandle pad, InputBasic_Axis axis);

AL2O3_EXTERN_C bool InputBasic_GetAsBool(InputBasic_ContextHandle handle, uint32_t userId);
AL2O3_EXTERN_C float InputBasic_GetAsFloat(InputBasic_ContextHandle handle, uint32_t userId);

AL2O3_EXTERN_C uint32_t InputBasic_GetMouseCount(InputBasic_ContextHandle handle);
AL2O3_EXTERN_C InputBasic_MouseHandle InputBasic_MouseCreate(InputBasic_ContextHandle handle, uint32_t index);
AL2O3_EXTERN_C void InputBasic_MouseDestroy(InputBasic_MouseHandle handle);

AL2O3_EXTERN_C uint32_t InputBasic_GetKeyboardCount(InputBasic_ContextHandle handle);
AL2O3_EXTERN_C InputBasic_KeyboardHandle InputBasic_KeyboardCreate(InputBasic_ContextHandle handle, uint32_t index);
AL2O3_EXTERN_C void InputBasic_KeyboardDestroy(InputBasic_KeyboardHandle handle);

AL2O3_EXTERN_C uint32_t InputBasic_GetPadCount(InputBasic_ContextHandle handle);
AL2O3_EXTERN_C InputBasic_PadHandle InputBasic_PadCreate(InputBasic_ContextHandle handle, uint32_t index);
AL2O3_EXTERN_C void InputBasic_PadDestroy(InputBasic_PadHandle handle);

// a User Id block is a space 1000 of id for the callers own evil use
AL2O3_EXTERN_C uint32_t InputBasic_AllocateUserIdBlock(InputBasic_ContextHandle handle);

// platform specific process message call
// on windows should be passed msgs from the windows proc loop
AL2O3_EXTERN_C void InputBasic_PlatformProcessMsg(InputBasic_ContextHandle handle, void* msg);
#endif