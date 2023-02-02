/* Copyright 2021 @ Keychron (https://www.keychron.com)
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
#include "keychron_common.h"

enum layers{
    MAC_BASE,
    MAC_FN,
    WIN_BASE,
    WIN_FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_tkl_f13_ansi(
        KC_ESC,   KC_BRID,  KC_BRIU,  KC_NO,    KC_NO,    RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,    KC_MUTE,  KC_SNAP,  KC_SIRI,  RGB_MOD,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,    KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,            KC_UP,
        KC_LCTL,  KC_LOPT,  KC_LCMD,                                KC_SPC,                                 KC_RCMD,  KC_ROPT,  MO(MAC_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [MAC_FN] = LAYOUT_tkl_f13_ansi(
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,    _______,  RGB_TOG,  _______,   RGB_MOD,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  NK_TOGG,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,             _______,
        _______,            _______,  _______,  _______,  _______,  QK_BOOT,  QK_RBT,   _______,  _______,  _______,  _______,             _______,            KC_MS_U,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,   _______,  KC_MS_L,  KC_MS_D,  KC_MS_R),

    [WIN_BASE] = LAYOUT_tkl_f13_ansi(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,     KC_MUTE,  KC_PSCR,  KC_SCRL,  RGB_MOD,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,    KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,            KC_UP,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RWIN,  MO(WIN_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [WIN_FN] = LAYOUT_tkl_f13_ansi(
        _______,  KC_BRID,  KC_BRIU,  _______,  _______,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,   _______,  _______,  _______,  RGB_MOD,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,
        RGB_TOG,  _______,  KC_UP,    _______,  _______,  _______,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  NK_TOGG,  _______,   _______,  _______,  _______,  _______,
        _______,  KC_LEFT,  KC_DOWN,  KC_RGHT,  _______,  _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,             _______,
        _______,            _______,  _______,  _______,  _______,  QK_BOOT,  QK_RBT,   _______,  _______,  _______,  _______,             _______,            KC_MS_U,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,   _______,  KC_MS_L,  KC_MS_D,  KC_MS_R),
        
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][1][2] = {
    [MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [MAC_FN]   = {ENCODER_CCW_CW(RGB_HUD, RGB_HUI) },
    [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [WIN_FN]   = {ENCODER_CCW_CW(RGB_HUD, RGB_HUI) }
};
#endif // ENCODER_MAP_ENABLE

void housekeeping_task_user(void) {
    housekeeping_task_keychron();
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keychron(keycode, record)) {
        return false;
    }

    return true;
}

static uint8_t color_group_escape[] = {0};
static uint8_t color_group_function_keys[] = {1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12};
static uint8_t color_group_numbers[] = {17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
static uint8_t color_group_special_char[] = {27, 28, 44, 45, 60, 61, 71, 72, 73};

static uint8_t color_group_modifiers[] = {16, 29, 46, 33, 50, 62, 74, 76, 77, 78, 79, 80, 81, 82, 83};
/* static uint8_t color_group_letters[] = {34, 35, 36, 37, 38, 39, 40, 41, 42, 43 \
 *                                        51, 52, 53, 54, 55, 56, 57, 58, 59\
 *                                         64, 65, 66, 67, 68, 69, 70, 71, 72, 73,};
 */

static uint8_t color_group_asdw[] = {35, 51, 52, 53};

static uint8_t color_group_del_insert[] = {30, 31, 32, 47, 48, 49};

static uint8_t color_group_right_knob[] = {13, 14, 15};

static uint8_t color_group_arrows[] = {84, 85, 86, 75};

bool rgb_matrix_indicators_user(void)
{
    // uint8_t this_led = host_keyboard_leds();
    uint8_t current_layer = get_highest_layer(layer_state);

    if (rgb_matrix_is_enabled()) {
        if (MAC_BASE == current_layer || MAC_BASE == current_layer) {
            if (rgb_matrix_get_mode() == RGB_MATRIX_SOLID_COLOR) {
                for (int i = 0; i < 87; i++) {
                    rgb_matrix_set_color(i, 0x00, 0x00, 0x00);
                }
            } else {
                for (size_t i = 0; i < sizeof(color_group_escape); i++) {
                    rgb_matrix_set_color(color_group_escape[i], 0xff, 0x00, 0x00);
                }
                for (size_t i = 0; i < sizeof(color_group_numbers); i++) {
                    rgb_matrix_set_color(color_group_numbers[i], 0x00, 0x1f, 0x1f);
                }
                for (size_t i = 0; i < sizeof(color_group_function_keys); i++) {
                    rgb_matrix_set_color(color_group_function_keys[i], 0x00, 0xff, 0x00);
                }
                for (size_t i = 0; i < sizeof(color_group_special_char); i++) {
                    rgb_matrix_set_color(color_group_special_char[i], 0xff, 0xaa, 0x00);
                }
                for (size_t i = 0; i < sizeof(color_group_del_insert); i++) {
                    rgb_matrix_set_color(color_group_del_insert[i], 0xff, 0x00, 0x00);
                }
                for (size_t i = 0; i < sizeof(color_group_right_knob); i++) {
                    rgb_matrix_set_color(color_group_right_knob[i], 0xff, 0xff, 0xff);
                }
                for (size_t i = 0; i < sizeof(color_group_modifiers); i++) {
                    rgb_matrix_set_color(color_group_modifiers[i], 0x00, 0x00, 0x55);
                }
                for (size_t i = 0; i < sizeof(color_group_arrows); i++) {
                    rgb_matrix_set_color(color_group_arrows[i], 0xff, 0xff, 0x00);
                }
            }
        }
    }
    if (MAC_FN == current_layer || WIN_FN == current_layer) {
        for (size_t i = 0; i < sizeof(color_group_asdw); i++) {
            rgb_matrix_set_color(color_group_asdw[i], 0xff, 0xff, 0x00);
        }
    }
    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color(33, 0xff, 0x00, 0x00);
        rgb_matrix_set_color(CAPS_LOCK_LED_INDEX, 0xff, 0x00, 0x00);
        rgb_matrix_set_color(63, 0xff, 0x00, 0x00);
        rgb_matrix_set_color(76, 0xff, 0x00, 0x00);
        rgb_matrix_set_color(77, 0xff, 0x00, 0x00);
        rgb_matrix_set_color(78, 0xff, 0x00, 0x00);
    }
    return true;
}
