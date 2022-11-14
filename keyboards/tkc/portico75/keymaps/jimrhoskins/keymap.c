/*
Copyright 2021 Terry Mathews

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "jimrhoskins.h"

enum taps {
    TAP_MF1_4 = 0,
    TAP_MF5_8,
    TAP_MF9_12,
    TAP_MF13_16,
};

// clang-format off
qk_tap_dance_action_t tap_dance_actions[] = {
    [TAP_MF1_4] = ACTION_TAP_DANCE_N(4, MEH(KC_F1), MEH(KC_F2), MEH(KC_F3), MEH(KC_F4)),
    [TAP_MF5_8] = ACTION_TAP_DANCE_N(4, MEH(KC_F5), MEH(KC_F6), MEH(KC_F7), MEH(KC_F8)),
    [TAP_MF9_12] = ACTION_TAP_DANCE_N(4, MEH(KC_F9), MEH(KC_F10), MEH(KC_F11), MEH(KC_F12)),
    [TAP_MF13_16] = ACTION_TAP_DANCE_N(4, MEH(KC_F13), MEH(KC_F14), MEH(KC_F15), MEH(KC_F16))
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_75_ansi(
        KC_ESC,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_PSCR, KC_MUTE,
        KC_GRV,     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL, KC_BSPC, TD(TAP_MF1_4),
        KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC, KC_BSLS, TD(TAP_MF5_8),
        KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,         KC_ENT,
        KC_LSFT, 	KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,   KC_UP,
        KC_LCTL, KC_LGUI, KC_LALT,                    KC_SPC,                            KC_MEH,   MO(1),    KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT_75_ansi(
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
        _______,   RGB_TOG,   RGB_M_P,   RGB_M_B,   RGB_M_SW,  RGB_M_SN,  RGB_M_K,   RGB_M_X,   RGB_M_G,   RGB_M_T,   _______,   _______,   _______,   _______,   TD(TAP_MF9_12),
        _______,   RGB_HUI,   RGB_SAI,   RGB_VAI,   RGB_SPI,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   QK_BOOT,   TD(TAP_MF13_16),
        _______,   RGB_HUD,   RGB_SAD,   RGB_VAD,   RGB_SPD,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   RGB_MOD,
        _______,   AG_NORM,   AG_SWAP,                _______,                           _______,   _______,                     _______,   RGB_RMOD,  _______
    )
};
