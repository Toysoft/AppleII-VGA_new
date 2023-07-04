#pragma once

// clang-format off
#include <stdint.h>


static uint16_t lores_dot_pattern[16] = {
    0x0000, 0x2222,
    0x1111, 0x3333,
    0x0888, 0x2AAA,
    0x1999, 0x3BBB,
    0x0444, 0x2666,
    0x1555, 0x3777,
    0x0CCC, 0x2EEE,
    0x1DDD, 0x3FFF,
};

#ifdef APPLE_MODEL_IIE
static uint8_t dgr_dot_pattern[32] = {
    0x00,0x11,0x22,0x33,
    0x44,0x55,0x66,0x77,
    0x08,0x19,0x2A,0x3B,
    0x4C,0x5D,0x6E,0x7F,
    0x00,0x44,0x08,0x4C,
    0x11,0x55,0x19,0x5D,
    0x22,0x66,0x2A,0x6E,
    0x33,0x77,0x3B,0x7F
};
#endif