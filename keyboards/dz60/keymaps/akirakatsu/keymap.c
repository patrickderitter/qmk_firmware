#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  XXXXXXX, KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_DEL,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT, XXXXXXX, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, RSFT_T(KC_UP), MO(1),
        KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,  KC_SPC,  KC_SPC,    KC_APPLICATION, KC_LEFT, XXXXXXX, KC_DOWN, KC_RIGHT
    ),

    LAYOUT(
        KC_GRAVE,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_AUDIO_MUTE,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCREEN, _______, _______, KC_BSLASH,
        RGB_TOG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______,   DEBUG, _______, _______, KC_HOME, KC_END, _______, KC_AUDIO_VOL_UP, _______,
        _______, _______, _______, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_PLAY_PAUSE, KC_CALCULATOR, KC_MEDIA_PREV_TRACK, _______, KC_AUDIO_VOL_DOWN, KC_MEDIA_NEXT_TRACK
    )
};
