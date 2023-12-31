#include QMK_KEYBOARD_H

enum encoder_names {
  _LEFT,
  _RIGHT,
  _MIDDLE,
};

enum layer_names {
  _ZERO,
  _ONE,
  _TWO,
  _THREE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_ZERO] = LAYOUT(
    KC_MPLY, KC_HOME, KC_MUTE,
    MO(1),   KC_UP,   RGB_MOD,
    KC_LEFT, KC_DOWN, KC_RGHT
),

[_ONE] = LAYOUT(
    QK_BOOT,   BL_STEP, KC_STOP,
    _______, KC_HOME, RGB_MOD,
    KC_MPRV, KC_END , KC_MNXT
),

[_TWO] = LAYOUT(
    _______, _______, _______,
    _______, _______, _______,
    _______, _______, _______
),

[_THREE] = LAYOUT(
    _______, _______, _______,
    _______, _______, _______,
    _______, _______, _______
)

};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
};
