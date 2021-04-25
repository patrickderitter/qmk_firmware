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
  _LOWER,
  _RAISE,
  _ADJUST
};

enum preonic_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 ,----------------------------------------------------------------------------------------------------------.
 |   `   |    1   |    2   |    3   |    4   |    5   |    6   |    7   |    8   |    9   |    0   |  Bksp  |
 |-------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 |  Tab  |    Q   |    W   |    E   |    R   |    T   |    Y   |    U   |    I   |    O   |    P   |    \   |
 |-------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 |  Esc  |    A   |    S   |    D   |    F   |    G   |    H   |    J   |    K   |    L   |    ;   |    '   |
 |-------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 | Shift |    Z   |    X   |    C   |    V   |    B   |    N   |    M   |    ,   |    .   |    /   |  Enter |
 |-------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 |  Play |  Ctrl  |   Alt  |   GUI  |  Lower |      Space      |  Raise |  Left  |  Down  |   Up   |  Right |
 `----------------------------------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_preonic_grid(
   KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
   KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSLS,
   KC_ESC,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ENT,
  KC_MPLY, KC_LCTL, KC_LALT, KC_LGUI,   LOWER,  KC_SPC,  KC_SPC,   RAISE,  KC_LEFT, KC_DOWN,  KC_UP, KC_RGHT
),

/* Lower
 ,----------------------------------------------------------------------------------------------------------.
 |       |        |        |        |        |        |        |        |        |        |        |        |
 |-------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 |       |        |        |        |        |        |        |    _   |    =   |    {   |    }   |        |
 |-------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 |  Del  |        |        |        |        |        |        |        |        |        |        |        |
 |-------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 |       |        |        |        |        |        |        |        |        |        |        |        |
 |-------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 |       |        |        |        |        |      Space      |        |  Home  |  PgDn  |  PgUp  |   End  |
 `----------------------------------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_preonic_grid(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
  _______, _______, _______, _______, _______, _______, _______, KC_UNDS,  KC_EQL, KC_LCBR, KC_RCBR, _______, 
   KC_DEL, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
  _______, _______, _______, _______, _______,  KC_SPC,  KC_SPC, _______, KC_HOME, KC_PGDN, KC_PGUP,  KC_END
),

/* Raise
 ,----------------------------------------------------------------------------------------------------------.
 |   F1  |   F2   |   F3   |   F4   |   F5   |   F6   |   F7   |   F8   |   F9   |   F10  |   F11  |   F12  |
 |-------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 |       |        |        |        |        |        |        |    -   |    +   |    [   |    ]   |        |
 |-------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 |  Del  |        |        |        |        |        |        |        |        |        |        |        |
 |-------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 |       |        |        |        |        |        |        |        |        |        |        |        |
 |-------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 |       |        |        |        |        |      Space      |        |  Home  |  PgDn  |  PgUp  |   End  |
 `----------------------------------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_preonic_grid(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,
  _______, _______, _______, _______, _______, _______, _______, KC_MINS, KC_PLUS, KC_LBRC, KC_RBRC, _______,
   KC_DEL, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
  _______, _______, _______, _______, _______,  KC_SPC,  KC_SPC, _______, KC_HOME, KC_PGDN, KC_PGUP,  KC_END
),

/* Adjust (Lower + Raise)
 ,----------------------------------------------------------------------------------------------------------.
 |       |        |        |        |        |        |        |        |        |        |        |   Del  |
 |-------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 |       |        |        |        |  Reset |        |        |        |        |        |  PrtSc |        |
 |-------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 |       |        |        |        |        | AGnorm | AGswap |        |        |        |        |        |
 |-------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 |       |        |        |        |        |  Debug |        |        |        |        |        |        |
 |-------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 |  RGB  |        |        |        |        |      Space      |        |        |        |        |        |
 `----------------------------------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_preonic_grid(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  KC_DEL, 
  _______, _______, _______, _______,   RESET, _______, _______, _______, _______, _______, KC_PSCR, _______, 
  _______, _______, _______, _______, _______, AG_NORM, AG_SWAP, _______, _______, _______, _______, _______, 
  _______, _______, _______, _______, _______,   DEBUG, _______, _______, _______, _______, _______, _______, 
  RGB_TOG, _______, _______, _______, _______,  KC_SPC,  KC_SPC, _______, _______, _______, _______, _______
)


};
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case QWERTY:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_QWERTY);
          }
          return false;
          break;
        case LOWER:
          if (record->event.pressed) {
            layer_on(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          } else {
            layer_off(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          }
          return false;
          break;
        case RAISE:
          if (record->event.pressed) {
            layer_on(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          } else {
            layer_off(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          }
          return false;
          break;
      }
    return true;
};

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
}