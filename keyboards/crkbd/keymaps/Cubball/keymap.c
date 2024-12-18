/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,------------------------------------------------------------------.                    ,---------------------------------------------------------------------.
      XXXXXXX,        KC_Q,        KC_W,        KC_E,        KC_R, KC_T,                      KC_Y,        KC_U,        KC_I,        KC_O,           KC_P, XXXXXXX,
  //|--------+------------+------------+------------+------------+-----|                    |-----+------------+------------+------------+---------------+--------|
      XXXXXXX, GUI_T(KC_A), ALT_T(KC_S), SFT_T(KC_D), CTL_T(KC_F), KC_G,                      KC_H, CTL_T(KC_J), SFT_T(KC_K), ALT_T(KC_L), GUI_T(KC_SCLN), KC_QUOT,
  //|--------+------------+------------+------------+------------+-----|                    |-----+------------+------------+------------+---------------+--------|
      XXXXXXX,        KC_Z,        KC_X,        KC_C,        KC_V, KC_B,                      KC_N,        KC_M,     KC_COMM,      KC_DOT,        KC_SLSH,   MO(4),
  //|--------+------------+------------+------------+------------+-----|                    |-----+------------+------------+------------+---------------+--------|
                                           KC_ESC, LT(2, KC_ENT), LT(1, KC_SPC),     LT(3, KC_BSPC), KC_TAB, KC_DEL
                                        //`------------------------------------'    `------------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(
  //,-------------------------------------------------------------------------------.                 ,--------------------------------------------------------------------------------.
      XXXXXXX,     KC_BSLS,         KC_UNDS,         KC_SPC,        XXXXXXX, KC_SLSH,                   KC_CIRC,        KC_LBRC,        KC_RBRC,        KC_ENT,        XXXXXXX, XXXXXXX,
  //|--------+-------------+---------------+---------------+---------------+--------|                 |--------+---------------+---------------+--------------+---------------+--------|
      XXXXXXX, GUI_T(KC_AT), ALT_T(KC_MINS), SFT_T(KC_LPRN), CTL_T(KC_RPRN), KC_EXLM,                   KC_ASTR, CTL_T(KC_LCBR), SFT_T(KC_RCBR), ALT_T(KC_EQL), GUI_T(KC_PLUS), XXXXXXX,
  //|--------+-------------+---------------+---------------+---------------+--------|                 |--------+---------------+---------------+--------------+---------------+--------|
      XXXXXXX,      KC_PIPE,        KC_AMPR,        KC_QUOT,        KC_DQUO,  KC_DLR,                   KC_PERC,        KC_HASH,         KC_GRV,       KC_QUES,        XXXXXXX, XXXXXXX,
  //|--------+-------------+--------------+----------------+---------------+--------|                 |--------+---------------+---------------+--------------+---------------+--------|
                                                                XXXXXXX, XXXXXXX, _______,        KC_BSPC, _______, _______
                                                             //`-------------------------'       `-------------------------'

  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX,    KC_1,    KC_2,    KC_3, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX,                         KC_0,    KC_4,    KC_5,    KC_6, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX,    KC_7,    KC_8,    KC_9, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, _______, XXXXXXX,    KC_BSPC, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

    [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RM_TOGG, RM_HUEU, RM_SATU, RM_VALU, RM_SPDU, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RM_NEXT, RM_HUED, RM_SATD, RM_VALD, RM_SPDD, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif
