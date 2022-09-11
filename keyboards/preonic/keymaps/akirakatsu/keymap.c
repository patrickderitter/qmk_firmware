/* Copyright 2015-2017 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum preonic_layers {
  _QWERTY,
  _LOWER
};

enum preonic_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 ,----------------------------------------------------------------------------------------------------------.
 |  Esc  |    1   |    2   |    3   |    4   |    5   |    6   |    7   |    8   |    9   |    0   |  Bksp  |
 |-------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 |  Tab  |    Q   |    W   |    E   |    R   |    T   |    Y   |    U   |    I   |    O   |    P   |   Del  |
 |-------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 |  Caps |    A   |    S   |    D   |    F   |    G   |    H   |    J   |    K   |    L   |    ;   |    '   |
 |-------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 | Shift |    Z   |    X   |    C   |    V   |    B   |    N   |    M   |    ,   |    .   |    /   |  Enter |
 |-------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 |  Ctrl |   GUI  |   Alt  |  Lower |      Space      |  Space |  Space |  Left  |  Down  |   Up   |  Right |
 `----------------------------------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_preonic_1x2uL(
   KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
   KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_DEL,
  KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ENT,
  KC_LCTL, KC_LGUI, KC_LALT,   LOWER,           KC_SPC,  KC_SPC,  KC_SPC, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT
),

/* Lower
 ,----------------------------------------------------------------------------------------------------------.
),
 |   F1  |   F2   |   F3   |   F4   |   F5   |   F6   |   F7   |   F8   |   F9   |   F10  |   F11  |   F12  |
 |-------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 |       |        |        |        |  Reset |        |        |    -   |    =   |    [   |    ]   |    \   |
 |-------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 |  PgUp |        |        |        |        |        |        |        |        |        |        |        |
 |-------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 |  PgDn |        |        |        |        |  Debug |        |        |        |        |        |        |
 |-------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 |       |        |        |        |      Space      |   Home |   End  |  Prev  |  VolDm |  VolUp |  Next  |
 `----------------------------------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_preonic_1x2uL(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,
  _______, _______, _______, _______,   RESET, _______, _______, KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, 
  KC_PGUP, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
  KC_PGDN, _______, _______, _______, _______,   DEBUG, _______, _______, _______, _______, _______, _______, 
  _______, _______, _______, _______,           KC_SPC, KC_HOME,  KC_END, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT
)
};
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case LOWER:
          if (record->event.pressed) {
            layer_on(_LOWER);
          } else {
            layer_off(_LOWER);
          }
          return false;
          break;
      }
    return true;
};