/*
 * HHKB Layout
 */
#include "keymap_common.h"

#define BASE 0 // default layer
#define HHKB 1 // symbols
#define VI 2 // media keys
#define MOUSE 3 // unicode layer


#ifdef KEYMAP_SECTION_ENABLE
const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L| Fn3|  '|FN1   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .| Fn2|Shift |Fn0|
     * `-----------------------------------------------------------'
     *       |Gui|Alt  |         Space         |LAlt  |Control|
     *       `-----------------------------------------------'
     */
[BASE] =   KEYMAP(KC_ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   KC_MINS,KC_EQL, KC_BSLS,KC_GRV,   \
           KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC, KC_BSPC,       \
           KC_LCTL, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   RGUI(KC_J),   KC_K,   KC_L,   KC_FN3, KC_QUOT, KC_FN1,             \
           KC_LSFT, KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT, KC_FN2, KC_RSFT,KC_FN0,             \
                KC_LGUI, KC_LALT,          KC_SPC,                KC_LALT, KC_RCTL),

    /* Layer 1: HHKB mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |      |VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |  +|  -|End|PgD|Dow|      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
[HHKB] =   KEYMAP(KC_PWR, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_INS, KC_DEL,   \
           KC_CAPS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP, KC_TRNS, KC_BSPC,      \
           KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE,KC_TRNS,KC_TRNS, KC_PAST, KC_PSLS, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, KC_PENT,            \
           KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_PPLS, KC_PMNS, KC_END, KC_PGDN, KC_DOWN, KC_TRNS,KC_TRNS,            \
                KC_TRNS,KC_TRNS,          KC_TRNS,               KC_TRNS,KC_TRNS),

    /* Layer 2: Vi mode (Slash)
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Tab  |Hom|PgD|Up |PgU|End|Hom|PgD|PgUlEnd|   |   |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|   |Lef|Dow|Rig|   |Lef|Dow|Up |Rig|   |   |Return  |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |   |Hom|PgD|PgUlEnd|Fn0|Shift |   |
     * `-----------------------------------------------------------'
     *       |Gui|Alt  |          Space        |Alt  |Gui|
     *       `-------------------------------------------'
     */
[VI] =    KEYMAP( KC_GRV, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_INS, KC_DEL, \
           KC_TAB, KC_HOME, KC_PGDN, KC_UP,  KC_PGUP, KC_END, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO,  KC_NO,  KC_NO,  KC_BSPC, \
           KC_LCTL, KC_NO,  KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,  KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT, KC_NO,  KC_NO,  KC_ENT, \
           KC_LSFT, KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_TRNS, KC_RSFT, KC_NO, \
                KC_LGUI, KC_LALT,          KC_SPC,                KC_RALT, KC_RGUI),

    /* Layer 3: Mouse mode (Semicolon)
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Tab  |   |   |   |   |   |MwL|MwD|MwU|MwR|   |   |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|   |   |   |   |   |McL|McD|McU|McR|Fn0|   |Return  |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |Mb3|Mb2|Mb1|Mb4|Mb5|   |Shift |   |
     * `-----------------------------------------------------------'
     *      |Gui |Alt  |          Mb1          |Alt  |Fn0|
     *      `--------------------------------------------'
     * Mc: Mouse Cursor / Mb: Mouse Button / Mw: Mouse Wheel
     */
 [MOUSE] = KEYMAP( KC_GRV, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_INS, KC_DEL, \
           KC_TAB, KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO,  KC_NO,  KC_NO,  KC_BSPC, \
           KC_LCTL, KC_NO,  KC_ACL0, KC_ACL1, KC_ACL2, KC_NO,  KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,KC_TRNS, KC_QUOT, KC_ENT, \
           KC_LSFT, KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_BTN3, KC_BTN2, KC_BTN1, KC_BTN4, KC_BTN5, KC_SLSH, KC_RSFT, KC_NO, \
                KC_LGUI, KC_LALT,          KC_BTN1,               KC_RALT,KC_TRNS),

};



/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const uint16_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_ENT),      // RControl with tap Enter*
    [2] = ACTION_LAYER_TAP_KEY(2, KC_SLASH),          // Cursor layer with Slash*
    [3] = ACTION_LAYER_TAP_KEY(3, KC_SCLN),           // Mousekey layer with Semicolon*
};
