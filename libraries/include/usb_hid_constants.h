/*! \file usb_hid_constants.h
 * This file contains definitions of constants used in HID reports sent by the
 * <code>usb_hid.lib</code> library. These are Usage tags that are specified in
 * in Hut1_12.pdf, available for download from USB Implementers Forum at this
 * url:
 * http://www.usb.org/developers/hidpage
 */

#ifndef USB_HID_CONSTANTS_H_
#define USB_HID_CONSTANTS_H_

// Bits in usbHidKeyboardOutput.leds
#define LED_NUM_LOCK        0
#define LED_CAPS_LOCK       1
#define LED_SCROLL_LOCK     2
#define LED_COMPOSE         3
#define LED_KANA            4
#define LED_POWER           5
#define LED_SHIFT           6
#define LED_DO_NOT_DISTURB  7

// Bits in usbHidKeyboardInput.modifiers
#define MODIFIER_CONTROL_LEFT  0
#define MODIFIER_SHIFT_LEFT    1
#define MODIFIER_ALT_LEFT      2
#define MODIFIER_GUI_LEFT      3
#define MODIFIER_CONTROL_RIGHT 4
#define MODIFIER_SHIFT_RIGHT   5
#define MODIFIER_ALT_RIGHT     6
#define MODIFIER_GUI_RIGHT     7

// Values for usbHidKeyboardInput.keyCodes
// Only the key codes for common keys are defined here. See Hut1_12.pdf for a full list.
#define KEY_NONE               0x00
#define KEY_A                  0x04
#define KEY_B                  0x05
#define KEY_C                  0x06
#define KEY_D                  0x07
#define KEY_E                  0x08
#define KEY_F                  0x09
#define KEY_G                  0x0A
#define KEY_H                  0x0B
#define KEY_I                  0x0C
#define KEY_J                  0x0D
#define KEY_K                  0x0E
#define KEY_L                  0x0F
#define KEY_M                  0x10
#define KEY_N                  0x11
#define KEY_O                  0x12
#define KEY_P                  0x13
#define KEY_Q                  0x14
#define KEY_R                  0x15
#define KEY_S                  0x16
#define KEY_T                  0x17
#define KEY_U                  0x18
#define KEY_V                  0x19
#define KEY_W                  0x1A
#define KEY_X                  0x1B
#define KEY_Y                  0x1C
#define KEY_Z                  0x1D
#define KEY_1                  0x1E
#define KEY_2                  0x1F
#define KEY_3                  0x20
#define KEY_4                  0x21
#define KEY_5                  0x22
#define KEY_6                  0x23
#define KEY_7                  0x24
#define KEY_8                  0x25
#define KEY_9                  0x26
#define KEY_0                  0x27
#define KEY_RETURN             0x28
#define KEY_ESCAPE             0x29
#define KEY_BACKSPACE          0x2A
#define KEY_TAB                0x2B
#define KEY_SPACE              0x2C
#define KEY_MINUS              0x2D
#define KEY_EQUAL              0x2E
#define KEY_BRACKET_LEFT       0x2F
#define KEY_BRACKET_RIGHT      0x30
#define KEY_BACKSLASH          0x31
#define KEY_EUROPE_1           0x32
#define KEY_SEMICOLON          0x33
#define KEY_APOSTROPHE         0x34
#define KEY_GRAVE              0x35
#define KEY_COMMA              0x36
#define KEY_PERIOD             0x37
#define KEY_SLASH              0x38
#define KEY_CAPS_LOCK          0x39
#define KEY_F1                 0x3A
#define KEY_F2                 0x3B
#define KEY_F3                 0x3C
#define KEY_F4                 0x3D
#define KEY_F5                 0x3E
#define KEY_F6                 0x3F
#define KEY_F7                 0x40
#define KEY_F8                 0x41
#define KEY_F9                 0x42
#define KEY_F10                0x43
#define KEY_F11                0x44
#define KEY_F12                0x45
#define KEY_PRINT_SCREEN       0x46
#define KEY_SCROLL_LOCK        0x47
#define KEY_PAUSE              0x48
#define KEY_INSERT             0x49
#define KEY_HOME               0x4A
#define KEY_PAGE_UP            0x4B
#define KEY_DELETE             0x4C
#define KEY_END                0x4D
#define KEY_PAGE_DOWN          0x4E
#define KEY_ARROW_RIGHT        0x4F
#define KEY_ARROW_LEFT         0x50
#define KEY_ARROW_DOWN         0x51
#define KEY_ARROW_UP           0x52
#define KEY_NUM_LOCK           0x53
#define KEY_KEYPAD_DIVIDE      0x54
#define KEY_KEYPAD_MULTIPLY    0x55
#define KEY_KEYPAD_SUBTRACT    0x56
#define KEY_KEYPAD_ADD         0x57
#define KEY_KEYPAD_ENTER       0x58
#define KEY_KEYPAD_1           0x59
#define KEY_KEYPAD_2           0x5A
#define KEY_KEYPAD_3           0x5B
#define KEY_KEYPAD_4           0x5C
#define KEY_KEYPAD_5           0x5D
#define KEY_KEYPAD_6           0x5E
#define KEY_KEYPAD_7           0x5F
#define KEY_KEYPAD_8           0x60
#define KEY_KEYPAD_9           0x61
#define KEY_KEYPAD_0           0x62
#define KEY_KEYPAD_DECIMAL     0x63
#define KEY_EUROPE_2           0x64
#define KEY_APPLICATION        0x65
#define KEY_POWER              0x66
#define KEY_KEYPAD_EQUAL       0x67
#define KEY_F13                0x68
#define KEY_F14                0x69
#define KEY_F15                0x6A
#define KEY_CONTROL_LEFT       0xE0
#define KEY_SHIFT_LEFT         0xE1
#define KEY_ALT_LEFT           0xE2
#define KEY_GUI_LEFT           0xE3
#define KEY_CONTROL_RIGHT      0xE4
#define KEY_SHIFT_RIGHT        0xE5
#define KEY_ALT_RIGHT          0xE6
#define KEY_GUI_RIGHT          0xE7

// Bits in usbHidMouseInput.buttons
#define MOUSE_BUTTON_LEFT   0
#define MOUSE_BUTTON_RIGHT  1
#define MOUSE_BUTTON_MIDDLE 2

#endif /* USB_HID_CONSTANTS_H_ */