#include "keymap_common.h"


/*
 * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.             ,---.
 * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau|             |Pwr|
 * `---'   `---------------' `---------------' `---------------' `-----------'             `---'
 * ,-----------------------------------------------------------. ,-----------. ,---------------.
 * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backspa| |Ins|Hom|PgU| |NmL|  =|  /|  *|
 * |-----------------------------------------------------------| |-----------| |---------------|
 * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \| |Del|End|PgD| |  7|  8|  9|  -|
 * |-----------------------------------------------------------| `-----------' |---------------|
 * |CapsLo|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |               |  4|  5|  6|  +|
 * |-----------------------------------------------------------|     ,---.     |---------------|
 * |Shif|\  |  Z|  X|  C|  V|  B|  N|  M|  ,|  ,|  /|Shift     |     |Up |     |  1|  2|  3|   |
 * |-----------------------------------------------------------| ,-----------. |-----------|Ent|
 * |Ctrl |Opt |Cmd |         Space           |     |Opt |Ctrl  | |Lef|Dow|Rig| |      0|  .|   |
 * `-----------------------------------------------------------' `-----------' `---------------'
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = KEYMAP(
    ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,PAUS,    VOLD,VOLU,MUTE,CALC,
    FN0, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     INS, HOME,PGUP,    NLCK,EQL, PSLS,PAST,
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,FN1,      DEL, END, PGDN,    P7,  P8,  P9,  PMNS,
    LCAP,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,                         P4,  P5,  P6,  PPLS,
    LSFT,NUBS,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,          UP,           P1,  P2,  P3,
    LCTL,LALT,LGUI,          SPC,                         RGUI, RALT,RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT
    ),
    [1] = KEYMAP(
    GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,BRK,     VOLD,VOLU,MUTE,CALC,
    FN0, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL,      INS, HOME,PGUP,    NLCK,EQL, PSLS,PAST,
    TAB, Q,   W,   E,   R,   T,CALC,PGUP,   UP,PGDN, PSCR,LBRC,RBRC, FN1,      DEL, END, PGDN,    P7,  P8,  P9,  PMNS,
    LCAP,A,   S,   D,   F,   G,HOME,LEFT, DOWN,RGHT,  SCLN,QUOT,     ENT,                         P4,  P5,  P6,  PPLS,
    LSFT,NUBS,Z,   X,   C,   V,   B, END,  END,COMM,  DOT, SLSH,     RSFT,          VOLU,         P1,  P2,  P3,
    LCTL,LALT,LGUI,          SPC,                         RGUI, RALT,RCTL,     MPLY,VOLD,MUTE,    P0,       PDOT,BTLD
    ),
};

const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(1, KC_GRV),
    [1] = ACTION_LAYER_TAP_KEY(1, KC_BSLS)
};
