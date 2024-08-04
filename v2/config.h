#pragma once

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 8


/* key matrix pins */
#define MATRIX_ROW_PINS { }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2, B6 }

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 10

#define COMBO_TERM 80

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#define MOUSEKEY_TIME_TO_MAX 0  // Time until maximum cursor speed is reached (default is 40)
#define MOUSEKEY_MAX_SPEED 1    // Maximum cursor speed (default is 5)
