/*  -*-  eval: (turn-on-orgtbl); -*-
 * HHKB Layout
 */
#include "keymap_common.h"

#define BASE 0
#define HHKB 1
#define VI 2
#define MOUSE 3
#define CITRIX 4
#define WIN 5

#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer
     |---------+---+---+---+---+---+---+---+---+---+-----+---------+----------+-------+---|
     | Esc     | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0   | -       | =        | \     | ` |
     |---------+---+---+---+---+---+---+---+---+---+-----+---------+----------+-------+---|
     | Tab     | Q | W | E | R | T | Y | U | I | O | P   | [       | ]        | Backs |   |
     |---------+---+---+---+---+---+---+---+---+---+-----+---------+----------+-------+---|
     | Contro  | A | S | D | F | G | H | J | K | L | ;   | '       | RCtl/Ent |       |   |
     |---------+---+---+---+---+---+---+---+---+---+-----+---------+----------+-------+---|
     | Shift/( | Z | X | C | V | B | N | M | , | . | Fn2 | Shift/) | Fn0      |       |   |
     |---------+---+---+---+---+---+---+---+---+---+-----+---------+----------+-------+---|

                 |------+------+-------+------+------|
                 | LAlt | LGUI | Space | RGUI | RAlt |
                 |------+------+-------+------+------|
    */
    [BASE] = KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,   \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,       \
           LCTL, A,   FN8,   D,  F,  G,  H,  J,  K,  FN7,   SCLN, QUOT,FN1,             \
           FN4, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, FN2,FN5,FN0,             \
                LALT,LGUI,          SPC,                RGUI,RALT),

    /* Layer 1: HHKB mode (HHKB Fn)
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      | Pwr  | F1  | F2  | F3  | F4 | F5 | F6 | F7 | F8  | F9  | F10 | F11 | F12   | Ins   | Del |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      | Caps |     |     |     |    |    |    |    | Psc | Slk | Pus | Up  |       | Backs |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      | VoD | VoU | Mut |    |    | *  | /  | Hom | PgU | Lef | Rig | Enter |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      |     |     |     |    |    | +  | -  | End | PgD | Dow |     |       |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|

                      |---+---+---+---+---|
                      |   |   |   |   |   |
                      |---+---+---+---+---|

     */
    [HHKB] = KEYMAP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,   \
           CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS, UP, TRNS, BSPC,      \
           TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,PENT,            \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,TRNS,TRNS,            \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* Layer 2: Vi mode (Slash)
     |---------+-----+-----+-----+-----+-----+-----+-----+---------+-----+-------+-----+--------+-----+-----|
     | Esc     | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8      | F9  | F10   | F11 | F12    | Ins | Del |
     |---------+-----+-----+-----+-----+-----+-----+-----+---------+-----+-------+-----+--------+-----+-----|
     | Tab     | Hom | PgD | Up  | PgU | End | Hom | PgD | PgUlEnd |     |       |     | Backs  |     |     |
     |---------+-----+-----+-----+-----+-----+-----+-----+---------+-----+-------+-----+--------+-----+-----|
     | Control |     | Lef | Dow | Rig |     | Lef | Dow | Up      | Rig |       |     | Return |     |     |
     |---------+-----+-----+-----+-----+-----+-----+-----+---------+-----+-------+-----+--------+-----+-----|
     | Shift   |     |     |     |     |     | Hom | PgD | PgUlEnd | Fn0 | Shift |     |        |     |     |
     |---------+-----+-----+-----+-----+-----+-----+-----+---------+-----+-------+-----+--------+-----+-----|

                      |------+------+-------+------+------|
                      | LAlt | LGui | Space | RGui | RAlt |
                      |------+------+-------+------+------|
     */
    [VI] = KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           TAB, HOME,PGDN,UP,  PGUP,END, HOME,PGDN,PGUP,END, NO,  NO,  NO,  BSPC, \
           LCTL,NO,  LEFT,DOWN,RGHT,NO,  LEFT,DOWN,UP,  RGHT,NO,  NO,  ENT, \
           LSFT,NO,  NO,  NO,  NO,  NO,  HOME,PGDN,PGUP,END, TRNS,RSFT,NO, \
                LALT,LGUI,          SPC,                RGUI,RALT),

    /* Layer 3: Mouse mode (Semicolon)

      |---------+----+----+----+----+-----+-----+-----+-----+-----+-----+-------+--------+-------+-----|
      | Esc     | F1 | F2 | F3 | F4 | F5  | F6  | F7  | F8  | F9  | F10 | F11   | F12    | Ins   | Del |
      |---------+----+----+----+----+-----+-----+-----+-----+-----+-----+-------+--------+-------+-----|
      | Tab     |    |    |    |    |     | MwL | MwD | MwU | MwR |     |       |        | Backs |     |
      |---------+----+----+----+----+-----+-----+-----+-----+-----+-----+-------+--------+-------+-----|
      | Control |    |    |    |    |     | McL | McD | McU | McR | Fn0 |       | Return |       |     |
      |---------+----+----+----+----+-----+-----+-----+-----+-----+-----+-------+--------+-------+-----|
      | Shift   |    |    |    |    | Mb3 | Mb2 | Mb1 | Mb4 | Mb5 |     | Shift |        |       |     |
      |---------+----+----+----+----+-----+-----+-----+-----+-----+-----+-------+--------+-------+-----|

                          |----+-----+-----------------------+-----+---|
                          |Gui |Alt  |          Mb1          |Alt  |Fn0|
                          |----+-----+-----------------------+-----+---|

     * Mc: Mouse Cursor / Mb: Mouse Button / Mw: Mouse Wheel
     */
    [MOUSE] = KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           TAB, NO,  NO,  NO,  NO,  NO,  WH_L,WH_D,WH_U,WH_R,NO,  NO,  NO,  BSPC, \
           LCTL,NO,  ACL0,ACL1,ACL2,NO,  MS_L,MS_D,MS_U,MS_R,TRNS,QUOT,ENT, \
           LSFT,NO,  NO,  NO,  NO,  BTN3,BTN2,BTN1,BTN4,BTN5,SLSH,RSFT,NO, \
                LGUI,LALT,          BTN1,               RALT,TRNS),
    /* Layer 4: Citrix layer (Remote citrix connection with Alt as LGUI and Win as RGUI)
     |---------+---+---+---+---+---+---+---+---+---+-----+---------+----------+-------+---|
     | Esc     | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0   | -       | =        | \     | ` |
     |---------+---+---+---+---+---+---+---+---+---+-----+---------+----------+-------+---|
     | Tab     | Q | W | E | R | T | Y | U | I | O | P   | [       | ]        | Backs |   |
     |---------+---+---+---+---+---+---+---+---+---+-----+---------+----------+-------+---|
     | Contro  | A | S | D | F | G | H | J | K | L | ;   | '       | RCtl/Ent |       |   |
     |---------+---+---+---+---+---+---+---+---+---+-----+---------+----------+-------+---|
     | Shift/( | Z | X | C | V | B | N | M | , | . | Fn2 | Shift/) | Fn0      |       |   |
     |---------+---+---+---+---+---+---+---+---+---+-----+---------+----------+-------+---|

                 |------+------+-------+------+------|
                 | RGUI | LGUI | Space | LGUI | RAlt |
                 |------+------+-------+------+------|
    */
    [CITRIX] = KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,   \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,       \
           LCTL, A,   S,   D,  F,  G,  H,  J,  K,  L,   SCLN, QUOT,FN1,             \
           FN4, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, FN6,FN5,FN0,             \
                RGUI,LGUI,          SPC,                LGUI, RALT),


    /* Layer 5: Layer for Win7 +
     |---------+---+---+---+---+---+---+---+---+---+-----+---------+----------+-------+---|
     | Esc     | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0   | -       | =        | \     | ` |
     |---------+---+---+---+---+---+---+---+---+---+-----+---------+----------+-------+---|
     | Tab     | Q | W | E | R | T | Y | U | I | O | P   | [       | ]        | Backs |   |
     |---------+---+---+---+---+---+---+---+---+---+-----+---------+----------+-------+---|
     | Contro  | A | S | D | F | G | H | J | K | L | ;   | '       | RCtl/Ent |       |   |
     |---------+---+---+---+---+---+---+---+---+---+-----+---------+----------+-------+---|
     | Shift/( | Z | X | C | V | B | N | M | , | . | Fn2 | Shift/) | Fn0      |       |   |
     |---------+---+---+---+---+---+---+---+---+---+-----+---------+----------+-------+---|

                 |------+------+-------+------+------|
                 | RGui | LAlt | Space | LAlt | RGui |
                 |------+------+-------+------+------|
    */
    [WIN] = KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,   \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,       \
           LCTL, A,   S,   D,  F,  G,  H,  J,  K,  L,   SCLN,QUOT,FN1,             \
           FN4, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, FN2,FN5,FN0,             \
                LGUI,LALT,          SPC,                LALT,RGUI),

};

/* id for user defined functions */
enum function_id {
    LSHIFT_LPAREN,
    RSHIFT_RPAREN,
    L_MOD,
};


/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const uint16_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_LAYER_MOMENTARY(HHKB),
    [1] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_ENT),      // RControl with tap Enter*
    [2] = ACTION_LAYER_TAP_KEY(VI, KC_SLASH),          // Cursor layer with Slash*
    [3] = ACTION_LAYER_TAP_KEY(MOUSE, KC_QUOT),           // Mousekey layer with QUOT*
    [4] = ACTION_FUNCTION_TAP(LSHIFT_LPAREN),           // Function: LShift with tap '('
    [5] = ACTION_FUNCTION_TAP(RSHIFT_RPAREN),           // Function: RShift with tap ')'
    [6] = ACTION_LAYER_TAP_KEY(VI, KC_SLASH),          // Cursor layer with Slash*
    [7] = ACTION_FUNCTION_TAP(L_MOD),           //
    [8] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_S),
    /* [x] = ACTION_MODS_TAP_KEY(MOD_RGUI, KC_L),      // RGUI with tap J* */
    /* [x] = ACTION_MODS_TAP_KEY(MOD_LGUI, KC_S),      // RGUI with tap F* */
    /* [x] = ACTION_MODS_TAP_KEY(MOD_LALT, KC_A),      // RGUI with tap D* */
    /* [x] = ACTION_MODS_TAP_KEY(MOD_RALT, KC_SCLN),      // RGUI with tap K* */

};

uint16_t l_sentinel_time = 0x00;
bool l_sentinel = false;



/*
 * user defined action function
 */
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  //debug_record(*record);
  dprintf("%04X%c(%u)", (record->event.key.row<<8 | record->event.key.col), (record->event.pressed ? 'd' : 'u'), record->event.time);
  dprintf(":%u%c", record->tap.count, (record->tap.interrupted ? '-' : ' '));
  dprintf("\n");
  if (record->event.pressed) dprint("P"); else dprint("R");
  dprintf("%d", record->tap.count);
  if (record->tap.interrupted) dprint("i");
  dprint("\n");

/*
|----+----------------+------------------+-----------------+-----------------|
|    | key1 press(P1) | key1 release(R1) | key2 press (P2) | key2 release R2 |
|----+----------------+------------------+-----------------+-----------------|
| P1 | 0              | R1-P1 ()         | P2-P1           | R2-P1           |
| R1 | -              | 0                | P2-R1 (+,0,-)   | R2-R1           |
| P2 | -              | -                | 0               | R2-P2           |
| R2 | -              | -                | -               | 0               |
|----+----------------+------------------+-----------------+-----------------|


| R1-P1      |
| P2-P1      |
| R2-P1      |
| P2-R1      |
| R2-R1      |
| R2-P2      |
| Tap Delays |
|            |


Types of press after tap time:
| tap | interrupted |     |
|   1 |           0 | key |
|   1 |           1 | mod    |
|   0 |           0 | mod |
|   0 |           1 |     |


after tap time
- press not interrupteed
- press tap not interrupted
- press non tap interrupted


| key usage  |              |
|------------+--------------|
| normal key |              |
| modifier   | uninterupted |
|            |              |
Delays:
P1 - R1
P1 - P2



|---------------+-----+-------------|
| press/release | tap | interrupted |
|---------------+-----+-------------|
| pressed       |   1 |             |
| pressed       |   0 |             |
| relase        |   1 |             |
| release       |   0 |             |
|---------------+-----+-------------|
*/
  switch (id) {
  case LSHIFT_LPAREN:
    // Shift parentheses example: LShft + tap '('
    // http://stevelosh.com/blog/2012/10/a-modern-space-cadet/#shift-parentheses
    // http://geekhack.org/index.php?topic=41989.msg1304899#msg1304899
    if (record->event.pressed) {
      if (record->tap.count > 0 && !record->tap.interrupted) {
        dprintf("non interrupted tap");
        if (record->tap.interrupted) {
          dprint("tap interrupted\n");
          register_mods(MOD_BIT(KC_LSHIFT));
        }
      } else {
        dprintf("press ");
        register_mods(MOD_BIT(KC_LSHIFT));
      }
    } else {
      if (record->tap.count > 0 && !(record->tap.interrupted)) {
        add_weak_mods(MOD_BIT(KC_LSHIFT));
        send_keyboard_report();
        register_code(KC_9);
        unregister_code(KC_9);
        del_weak_mods(MOD_BIT(KC_LSHIFT));
        send_keyboard_report();
        record->tap.count = 0;  // ad hoc: cancel tap
      } else {
        unregister_mods(MOD_BIT(KC_LSHIFT));
      }
    }
    break;
  case RSHIFT_RPAREN:
    // Shift parentheses example: LShft + tap '('
    // http://stevelosh.com/blog/2012/10/a-modern-space-cadet/#shift-parentheses
    // http://geekhack.org/index.php?topic=41989.msg1304899#msg1304899
    if (record->event.pressed) {
      if (record->tap.count > 0 && !record->tap.interrupted) {
        if (record->tap.interrupted) {
          dprint("tap interrupted\n");
          register_mods(MOD_BIT(KC_RSHIFT));
        }
      } else {
        register_mods(MOD_BIT(KC_RSHIFT));
      }
    } else {
      if (record->tap.count > 0 && !(record->tap.interrupted)) {
        add_weak_mods(MOD_BIT(KC_RSHIFT));
        send_keyboard_report();
        register_code(KC_0);
        unregister_code(KC_0);
        del_weak_mods(MOD_BIT(KC_RSHIFT));
        send_keyboard_report();
        record->tap.count = 0;  // ad hoc: cancel tap
      } else {
        unregister_mods(MOD_BIT(KC_RSHIFT));
      }
    }
    break;

  case L_MOD:
    // Shift parenotheses example: LShft + tap '('
    // http://stevelosh.com/blog/2012/10/a-modern-space-cadet/#shift-parentheses
    // http://geekhack.org/index.php?topic=41989.msg1304899#msg1304899
    if (record->event.pressed) {
      if (record->tap.count > 0 && !record->tap.interrupted) {
        l_sentinel_time = record->event.time;
        register_unregister_kc(KC_L);
        dprintf("press L tap non interrupted\n");
      } else if (record->tap.count > 0 && record->tap.interrupted){
        l_sentinel_time = record->event.time;
        register_unregister_kc(KC_L);
        dprintf("press L tap interrupted\n");
      } else if (!record->tap.count <= 0 && !record->tap.interrupted) {
        dprintf("press L non tap non interrupted\n");
        if (record->event.time < (l_sentinel_time + 1000)) {
            register_code(KC_L);
            l_sentinel = true;
        } else {
          register_mods(MOD_BIT(KC_RSHIFT));
        }
      } else {
        dprintf("press L non tap interrupted\n");
        if (record->event.time < (l_sentinel_time + 1000)) {
            register_code(KC_L);
            l_sentinel = true;
        } else {
          register_mods(MOD_BIT(KC_RSHIFT));
        }
      }
    } else {
      if (record->tap.count > 0 && !record->tap.interrupted) {
        //register_unregister_kc(KC_L);
        dprintf("release L tap non interrupted\n");
        record->tap.count = 0;  // ad hoc: cancel tap
      } else if (record->tap.count > 0 && record->tap.interrupted){
        //register_unregister_kc(KC_L);
        dprintf("release L tap interrupted\n");
        record->tap.count = 0;  // ad hoc: cancel tap
      } else if (!record->tap.count <= 0 && !record->tap.interrupted) {
        dprintf("release L non tap non interrupted\n");
        if (l_sentinel) {
          unregister_code(KC_L);
          l_sentinel = false;
        }
        else {
          unregister_mods(MOD_BIT(KC_RSHIFT));
        }

      } else {
        dprintf("release L non tap interrupted\n");
        if (l_sentinel) {
          unregister_code(KC_L);
          l_sentinel = false;
        }
        else {
          unregister_mods(MOD_BIT(KC_RSHIFT));
        }
      }
    }
    break;
  }
}

void  register_unregister_kc(uint16_t kc) {
  send_keyboard_report();
  register_code(kc);
  unregister_code(kc);
  send_keyboard_report();
  //record->tap.count = 0;  // ad hoc: cancel tap
}

/*
 * time of the previously pressed l key
*/
