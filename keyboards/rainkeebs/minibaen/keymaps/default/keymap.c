// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT(
        KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_4,    KC_5,    KC_6,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT,
        KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    KC_1,    KC_2,    KC_3,    KC_M,    KC_N,    KC_E,    KC_I,    KC_O,
        KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    KC_7,    KC_8,    KC_9,    KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_0,
        KC_NO,   KC_NO,   KC_LGUI, KC_0,    KC_SPC,  KC_0,    KC_DOT,  KC_MUTE, KC_0,    KC_0,    KC_RALT, KC_NO,   KC_NO
    ),
};
