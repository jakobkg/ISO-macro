/* Copyright 2021 Jakob Grønhaug under GPLv3 */

#pragma once

#include "config_common.h"

#define VENDOR_ID    0xF055
#define PRODUCT_ID   0x1234
#define DEVICE_VER   0x0001
#define MANUFACTURER JG
#define PRODUCT      ISO_MACRO


#define DIRECT_PINS {{D1, D2, D3, B0}, {C6, D4, D5, D6}}

#define ENCODERS_PAD_A {C2}
#define ENCODERS_PAD_B {D0}


#define RGB_DI_PIN D7
#ifdef RGB_DI_PIN
#    define RGBLED_NUM 6
#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 8
#    define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */

//#    define RGBLIGHT_ANIMATIONS

#    define RGBLIGHT_EFFECT_RAINBOW_MOOD

/*== customize breathing effect ==*/
/*==== (DEFAULT) use fixed table instead of exp() and sin() ====*/
#    define RGBLIGHT_BREATHE_TABLE_SIZE 64      // 256(default) or 128 or 64
/*==== use exp() and sin() ====*/
//#    define RGBLIGHT_EFFECT_BREATHE_CENTER 1.85  // 1 to 2.7
//#    define RGBLIGHT_EFFECT_BREATHE_MAX    255   // 0 to 255
#endif

#define DEBOUNCE 5

#define NO_ACTION_LAYER
#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

