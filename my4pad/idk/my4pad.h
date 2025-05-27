#pragma once

#include "quantum.h"

// Define your matrix size here (1 row, 1 column example)
#define MATRIX_ROWS 1
#define MATRIX_COLS 1

// Define your layout macro matching your matrix size
#define LAYOUT( \
    k00 \
) { \
    { k00 } \
}
