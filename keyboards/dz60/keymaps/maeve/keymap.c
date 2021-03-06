#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	// QWERTY main layer
	LAYOUT(
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_DEL,
		LT(2, KC_TAB), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC,
		CTL_T(KC_CAPS), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT, KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, MO(2),
		KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, MO(4), KC_ENT, KC_RALT, MO(3), KC_NO, KC_RGUI, KC_RCTL),

	// DVORAK main layer
	LAYOUT(
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,
		LT(2, KC_TAB), KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_SLSH, KC_EQL, KC_BSPC,
		CTL_T(KC_CAPS), KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_MINS, KC_ENT,
		KC_LSFT, KC_TRNS, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_RSFT, MO(2),
		KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, MO(4), KC_ENT, KC_RALT, MO(3), KC_NO, KC_RGUI, KC_RCTL),

	// Secondary function Layer: Function keys, arrows, media controls
	LAYOUT(
		KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______, _______,
		_______, KC_VOLU, KC_MNXT, KC_MPLY, _______, KC_NUMLOCK, KC_HOME, KC_PGUP, KC_UP, KC_PGDN, _______, _______, _______, _______,
		KC_TRNS, KC_VOLD, KC_MPRV, KC_MUTE, _______, _______, KC_INS, KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______, _______,
		_______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_TRNS,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),

	// Settings Layer
	LAYOUT(
		RESET, DF(0), DF(1), BS_SWAP, BS_NORM, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, RGB_HUI, RGB_SAI, RGB_TOG, RGB_VAI, RGB_SPI, RGB_MOD, _______, _______, _______, _______, _______, _______, _______,
		_______, RGB_HUD, RGB_SAD, _______, RGB_VAD, RGB_SPD, RGB_RMOD, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, KC_1, _______, _______, KC_TRNS, _______, _______, _______),

	// Numpad and function layer
	LAYOUT(
		KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_NUMLOCK,KC_PSLS, KC_PAST, KC_PMNS, _______, _______, _______, KC_DEL,
		_______, KC_F1, KC_F2, KC_F3, KC_F4, _______, 		_______,	 KC_P7, KC_P8, KC_P9, KC_PMNS, _______, _______, KC_BSPC,
		_______, KC_F5, KC_F6, KC_F7, KC_F8, _______, _______, KC_P4, KC_P5, KC_P6, KC_PPLS, _______, TG(5),
		_______, _______, KC_F9, KC_F10, KC_F11, KC_F12, _______, _______, KC_P1, KC_P2, KC_P3, KC_PENT, _______, _______,
		_______, _______, _______, _______, KC_TRNS, KC_P0, KC_PDOT, KC_PENT, _______, _______, _______),

	// Permanent Numpad and function layer
	LAYOUT(
		KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_NUMLOCK,KC_PSLS, KC_PAST, KC_PMNS, _______, _______, _______, KC_DEL,
		_______, KC_F1, KC_F2, KC_F3, KC_F4, _______, 		_______,	 KC_P7, KC_P8, KC_P9, KC_PMNS, _______, _______, KC_BSPC,
		_______, KC_F5, KC_F6, KC_F7, KC_F8, _______, _______, KC_P4, KC_P5, KC_P6, KC_PPLS, _______, TG(5),
		_______, _______, KC_F9, KC_F10, KC_F11, KC_F12, _______, _______, KC_P1, KC_P2, KC_P3, KC_PENT, _______, _______,
		_______, _______, _______, _______, KC_TRNS, KC_P0, KC_PDOT, KC_PENT, _______, _______, _______)
};
