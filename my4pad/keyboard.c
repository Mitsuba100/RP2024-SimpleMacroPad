#include "quantum.h"

#define MATRIX_ROWS 1
#define MATRIX_COLS 5

#define LAYOUT( \
    k00, k01, k02, k03, k04 \
) { \
    { k00, k01, k02, k03, k04 } \
}

const uint8_t PROGMEM row_pins[MATRIX_ROWS] = { GP27 };
const uint8_t PROGMEM col_pins[MATRIX_COLS] = { GP28, GP29, GP6, GP7 };

const matrix_row_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(KC_A, KC_B, KC_C, KC_D, KC_E),
};
