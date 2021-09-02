#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID		0xFEED
#define PRODUCT_ID      0x0003
#define DEVICE_VER      0x0001
#define MANUFACTURER	GeneSiaW
#define PRODUCT			macro2x2

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 2

/* key matrix pins */
#define MATRIX_ROW_PINS { B4, B5 }
#define MATRIX_COL_PINS { B2, B6 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define DYNAMIC_KEYMAP_LAYER_COUNT 11
