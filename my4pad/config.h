#pragma once

#include "config_common.h"

/* Key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 1

/* Direct pin for the single key */
#define DIRECT_PINS { { GP27 } }

/* No rotary encoder needed */
#undef ENCODERS_PAD_A
#undef ENCODERS_PAD_B

/* Diode direction (not important for single switch but required by QMK) */
#define DIODE_DIRECTION COL2ROW

/* Debounce time */
#define DEBOUNCE 5

/* Mechanical locking support (optional for one key) */
#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE
