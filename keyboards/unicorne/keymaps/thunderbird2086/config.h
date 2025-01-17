// Copyright 2021 Allen Choi (@thunderbird2086)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define EE_HANDS
#define SPLIT_USB_DETECT

#if defined(APPLE_FN_ENABLE)
/* USB Device descriptor parameter */
#   if defined(VENDOR_ID)
#      undef   VENDOR_ID
#      define  VENDOR_ID    0x05ac
#   endif

#   if defined(PRODUCT_ID)
#      undef   PRODUCT_ID
#      define  PRODUCT_ID   0x021E
#   endif

#   if defined(DEVICE_VER)
#      undef   DEVICE_VER
#      define  DEVICE_VER   0x0931
#   endif

#   if defined(MANUFACTURER)
#      undef   MANUFACTURER
#      define  MANUFACTURER "Apple Inc."
#   endif

#   if defined(PRODUCT)
#      undef   PRODUCT
#      define PRODUCT "Aluminum Mini Keyboard (ISO)"
#   endif
#endif

// #define RGB_LAYER_ENABLE

#define PERMISSIVE_HOLD

#if defined(TAPPING_TERM)
#   undef TAPPING_TERM
#endif
#define TAPPING_TERM 200
// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0
#define VER_NEWLINE_WAIT 200 // in milliseconds

#define NO_ACTION_ONESHOT

#if defined(OLED_ENABLE)
#   define SPLIT_LAYER_STATE_ENABLE
#   define SPLIT_LED_STATE_ENABLE
#   define SPLIT_MODS_ENABLE
#   define SPLIT_OLED_ENABLE
        //  due to timer_read() for render_prompt(), we have own implementation of oled time out
#   define KEY_LOG_ENABLE
#endif

#define RGBLIGHT_SLEEP

#if defined(RGBLIGHT_ENABLE)
#    define RGBLIGHT_LAYERS
#    define RGBLIGHT_LIMIT_VAL 150
#    define RGBLIGHT_HUE_STEP 16
#    define RGBLIGHT_SAT_STEP 32
#    define RGBLIGHT_VAL_STEP 32

#    define RGBLIGHT_EFFECT_ALTERING
#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_CHRISTMAS
#    define RGBLIGHT_EFFECT_KNIGHT
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_EFFECT_RGB_TEST
#    define RGBLIGHT_EFFECT_SNAKE
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
#    define RGBLIGHT_EFFECT_TWINKLE
#endif

#if defined(RGB_MATRIX_ENABLE)
#   define SPLIT_LAYER_STATE_ENABLE
#   define RGB_DISABLE_WHEN_USB_SUSPENDED       // turn off effects when suspended
#   define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150
        // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
#   define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_COLOR
#   define RGB_MATRIX_HUE_STEP 32
#   define RGB_MATRIX_SAT_STEP 64
#   define RGB_MATRIX_VAL_STEP 64
#   define RGB_MATRIX_SPD_STEP 20
#   define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR

/* Disable the animations you don't want/need.  You will need to disable a good number of these    *
 * because they take up a lot of space.  Disable until you can successfully compile your firmware. */
#   define ENABLE_RGB_MATRIX_ALPHAS_MODS
#    undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#    undef ENABLE_RGB_MATRIX_BREATHING
#    undef ENABLE_RGB_MATRIX_BAND_SAT
#    undef ENABLE_RGB_MATRIX_BAND_VAL
#    undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#    undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#    undef ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#    undef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#    undef ENABLE_RGB_MATRIX_CYCLE_ALL
#   define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#    undef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#   define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#    undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#    undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#    undef ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#    undef ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#    undef ENABLE_RGB_MATRIX_DUAL_BEACON
#   define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#    undef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#    undef ENABLE_RGB_MATRIX_RAINDROPS
#    undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#    undef ENABLE_RGB_MATRIX_HUE_BREATHING
#    undef ENABLE_RGB_MATRIX_HUE_PENDULUM
#    undef ENABLE_RGB_MATRIX_HUE_WAVE
#    undef ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#   define ENABLE_RGB_MATRIX_PIXEL_FLOW
#    undef ENABLE_RGB_MATRIX_PIXEL_RAIN

#   define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#    undef ENABLE_RGB_MATRIX_TYPING_HEATMAP
#   define ENABLE_RGB_MATRIX_DIGITAL_RAIN

#   define RGB_MATRIX_KEYPRESSES                // reacts to keypresses
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#    undef ENABLE_RGB_MATRIX_SPLASH
#   define ENABLE_RGB_MATRIX_MULTISPLASH
#    undef ENABLE_RGB_MATRIX_SOLID_SPLASH
#    undef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif
