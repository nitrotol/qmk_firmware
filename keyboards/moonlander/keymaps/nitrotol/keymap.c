#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_DELETE,                                      TD(DANCE_4),    KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TD(DANCE_5),
    KC_EQUAL,       KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_LALT,                                        TD(DANCE_6),    KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           TD(DANCE_7),
    KC_MINUS,       KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_ESCAPE,                                                                      TD(DANCE_8),    KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      TD(DANCE_9),
    KC_QUOTE,       KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_BSLASH,
    KC_COLN,        TD(DANCE_0),    TD(DANCE_1),    KC_LEFT,        KC_RIGHT,       MT(MOD_LCTL, KC_ENTER),                                                                                                KC_ENTER,       KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_10),   TD(DANCE_11),   TD(DANCE_12),
    TD(DANCE_2),    TD(DANCE_3),    KC_TAB,                         KC_LGUI,        KC_LALT,        KC_LCTRL
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, UA_44,          UA_43,          UA_42,          UA_41,          UA_40,          KC_TRANSPARENT,                                 KC_TRANSPARENT, UA_39,          UA_38,          UA_36,          UA_35,          UA_34,          UA_33,
    KC_TRANSPARENT, UA_31,          UA_30,          UA_29,          UA_28,          UA_27,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, UA_26,          UA_25,          UA_24,          UA_23,          UA_22,          UA_21,
    UA_10,          UA_20,          UA_19,          UA_18,          UA_17,          UA_16,                                          UA_15,          UA_14,          UA_13,          UA_12,          UA_32,          KC_BSLASH,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, UA_45,          UA_11,          KC_TRANSPARENT,
    TD(DANCE_13),   KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_KP_MINUS,    KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_SLASH,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_AMPR,        KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_DOT,         KC_CIRC,        KC_LBRACKET,    KC_RBRACKET,    KC_TILD,                                        KC_COMMA,       KC_1,           KC_2,           KC_3,           KC_BSLASH,      KC_TRANSPARENT,
    RGB_TOG,        RGB_VAI,        RGB_VAD,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_0,           KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, RESET,          KC_TRANSPARENT
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {74,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {74,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {74,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {74,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {131,255,255}, {131,255,255}, {41,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {255,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {255,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {255,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {255,255,255}, {255,252,219}, {255,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255} },

    [1] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {74,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {74,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {74,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {74,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {131,255,255}, {131,255,255}, {169,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {255,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {255,255,255}, {255,255,255}, {255,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {214,237,223}, {57,255,255}, {128,255,255}, {128,255,255}, {128,255,255}, {214,237,223}, {57,255,255}, {128,255,255}, {128,255,255}, {128,255,255}, {214,237,223}, {57,255,255}, {208,255,255}, {208,255,255}, {208,255,255}, {0,0,0}, {57,255,255}, {208,255,255}, {208,255,255}, {208,255,255}, {0,0,0}, {57,255,255}, {128,255,255}, {128,255,255}, {128,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {57,255,255}, {57,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {57,255,255}, {128,255,255}, {29,255,255}, {128,255,255}, {0,0,0}, {57,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {57,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {0,0,0}, {57,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {0,0,0}, {57,255,255}, {29,255,255}, {128,255,255}, {128,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {4,255,255}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return;
  }
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[14];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_UP);
        tap_code16(KC_UP);
        tap_code16(KC_UP);
    }
    if(state->count > 3) {
        tap_code16(KC_UP);
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_UP); break;
        case SINGLE_HOLD: register_code16(KC_HOME); break;
        case DOUBLE_TAP: register_code16(KC_UP); register_code16(KC_UP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_UP); register_code16(KC_UP);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_UP); break;
        case SINGLE_HOLD: unregister_code16(KC_HOME); break;
        case DOUBLE_TAP: unregister_code16(KC_UP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_UP); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DOWN);
        tap_code16(KC_DOWN);
        tap_code16(KC_DOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_DOWN);
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_DOWN); break;
        case SINGLE_HOLD: register_code16(KC_END); break;
        case DOUBLE_TAP: register_code16(KC_DOWN); register_code16(KC_DOWN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DOWN); register_code16(KC_DOWN);
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_DOWN); break;
        case SINGLE_HOLD: unregister_code16(KC_END); break;
        case DOUBLE_TAP: unregister_code16(KC_DOWN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DOWN); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
    }
    if(state->count > 3) {
        tap_code16(KC_SPACE);
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_SPACE); break;
        case SINGLE_HOLD: register_code16(KC_LSHIFT); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_SPACE)); layer_move(1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SPACE); register_code16(KC_SPACE);
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_SPACE); break;
        case SINGLE_HOLD: unregister_code16(KC_LSHIFT); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_SPACE)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SPACE); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(qk_tap_dance_state_t *state, void *user_data);
void dance_3_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_3_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_3(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_BSPACE);
        tap_code16(KC_BSPACE);
        tap_code16(KC_BSPACE);
    }
    if(state->count > 3) {
        tap_code16(KC_BSPACE);
    }
}

void dance_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_BSPACE); break;
        case SINGLE_HOLD: register_code16(KC_BSPACE); break;
        case DOUBLE_TAP: register_code16(KC_BSPACE); register_code16(KC_BSPACE); break;
        case DOUBLE_HOLD: layer_on(2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_BSPACE); register_code16(KC_BSPACE);
    }
}

void dance_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_BSPACE); break;
        case SINGLE_HOLD: unregister_code16(KC_BSPACE); break;
        case DOUBLE_TAP: unregister_code16(KC_BSPACE); break;
        case DOUBLE_HOLD: layer_off(2); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_BSPACE); break;
    }
    dance_state[3].step = 0;
}
void dance_4_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_4_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_4_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case DOUBLE_TAP: register_code16(LCTL(KC_E)); break;
    }
}

void dance_4_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case DOUBLE_TAP: unregister_code16(LCTL(KC_E)); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(qk_tap_dance_state_t *state, void *user_data);
void dance_5_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_5_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_5(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LPRN);
        tap_code16(KC_LPRN);
        tap_code16(KC_LPRN);
    }
    if(state->count > 3) {
        tap_code16(KC_LPRN);
    }
}

void dance_5_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_LPRN); break;
        case DOUBLE_TAP: register_code16(KC_RPRN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LPRN); register_code16(KC_LPRN);
    }
}

void dance_5_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_LPRN); break;
        case DOUBLE_TAP: unregister_code16(KC_RPRN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LPRN); break;
    }
    dance_state[5].step = 0;
}
void dance_6_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_6_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_6_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case DOUBLE_TAP: register_code16(LCTL(KC_D)); break;
    }
}

void dance_6_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case DOUBLE_TAP: unregister_code16(LCTL(KC_D)); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(qk_tap_dance_state_t *state, void *user_data);
void dance_7_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_7_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_7(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LCBR);
        tap_code16(KC_LCBR);
        tap_code16(KC_LCBR);
    }
    if(state->count > 3) {
        tap_code16(KC_LCBR);
    }
}

void dance_7_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_LCBR); break;
        case DOUBLE_TAP: register_code16(KC_RCBR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LCBR); register_code16(KC_LCBR);
    }
}

void dance_7_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_LCBR); break;
        case DOUBLE_TAP: unregister_code16(KC_RCBR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LCBR); break;
    }
    dance_state[7].step = 0;
}
void dance_8_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_8_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_8_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case DOUBLE_TAP: register_code16(LCTL(KC_K)); break;
    }
}

void dance_8_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case DOUBLE_TAP: unregister_code16(LCTL(KC_K)); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(qk_tap_dance_state_t *state, void *user_data);
void dance_9_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_9_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_9(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LBRACKET);
        tap_code16(KC_LBRACKET);
        tap_code16(KC_LBRACKET);
    }
    if(state->count > 3) {
        tap_code16(KC_LBRACKET);
    }
}

void dance_9_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(KC_LBRACKET); break;
        case DOUBLE_TAP: register_code16(KC_RBRACKET); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LBRACKET); register_code16(KC_LBRACKET);
    }
}

void dance_9_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(KC_LBRACKET); break;
        case DOUBLE_TAP: unregister_code16(KC_RBRACKET); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LBRACKET); break;
    }
    dance_state[9].step = 0;
}
void dance_10_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_10_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_10_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case DOUBLE_TAP: register_code16(LALT(KC_F2)); break;
    }
}

void dance_10_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case DOUBLE_TAP: unregister_code16(LALT(KC_F2)); break;
    }
    dance_state[10].step = 0;
}
void dance_11_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_11_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_11_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case DOUBLE_TAP: register_code16(RALT(RCTL(KC_T))); break;
    }
}

void dance_11_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case DOUBLE_TAP: unregister_code16(RALT(RCTL(KC_T))); break;
    }
    dance_state[11].step = 0;
}
void dance_12_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_12_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_12_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case DOUBLE_TAP: register_code16(LGUI(KC_L)); break;
    }
}

void dance_12_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case DOUBLE_TAP: unregister_code16(LGUI(KC_L)); break;
    }
    dance_state[12].step = 0;
}
void on_dance_13(qk_tap_dance_state_t *state, void *user_data);
void dance_13_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_13_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_13(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
    }
    if(state->count > 3) {
        tap_code16(KC_SPACE);
    }
}

void dance_13_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(KC_SPACE); break;
        case SINGLE_HOLD: register_code16(KC_LSHIFT); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_SPACE)); layer_move(0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SPACE); register_code16(KC_SPACE);
    }
}

void dance_13_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(KC_SPACE); break;
        case SINGLE_HOLD: unregister_code16(KC_LSHIFT); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_SPACE)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SPACE); break;
    }
    dance_state[13].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
};
