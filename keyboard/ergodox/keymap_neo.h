/*
 * Copyright 2014 ka’imi <kaimi@kaimi.cc>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * Neo2 layout for Ergodox
 *
 * The general idea is to have three layers that can be toggled in order:
 *
 * – standard Neo2
 * – gamer’s Neo2 (games friendlier modifier positioning, hardware Neo2 layer 4)
 * – poor man’s Neo2 ((partial) Neo2 with QWERTZ active on the host system)
 *
 */

static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer
     *
     * Neo2
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  Esc   |   1  |   2  |   3  |   4  |   5  | F13  |           | F14  |   6  |   7  |   8  |   9  |   0  |   -    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  Tab   |   X  |   V  |   L  |   C  |   W  | BKSP |           |  L1  |   K  |   H  |   G  |   F  |   Q  |   ß    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  Del   |   U  |   I  |   A  |   E  |   O  |------|           |------|   S  |   N  |   R  |   T  |   D  |   Y    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  T1    |   Ü  |   Ö  |   Ä  |   P  |   Z  | RET  |           |  L4  |   B  |   M  |   ,  |   .  |   J  |  T2    |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | Prnt |  F1  |  F2  |  F3  |  F4  |                                       |  F9  |  F10 |  F11 | F12  |  T3  |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  F5  |  F6  |       |  F7  |  F8  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | LAlt |       | RCtrl|      |      |
     *                                 | LSft |  M4l |------|       |------|  M3r | Space|
     *                                 |      |      | LGui |       | RGui |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(
        // left hand
        ESC,   1,   2,   3,   4,   5,  F13,
        TAB,   Q,   W,   E,   R,   T, BSPC,
        DEL,   A,   S,   D,   F,   G,
        GRV,   Z,   X,   C,   V,   B,  ENT,
        PSCR, F1,  F2,  F3,  F4,
                                        F5,  F6,
                                           LALT,
                                 LSFT,NUBS,LGUI,
        // right hand
             F14,   6,   7,   8,   9,   0, MINS,
             FN1,   Y,   U,   I,   O,   P, LBRC,
                    H,   J,   K,   L,SCLN, QUOT,
             FN4,   N,   M,COMM, DOT,SLSH,  EQL,
                        F9, F10, F11, F12, RBRC,
          F7, F8,
        RCTL,
        RGUI, NUHS, SPC
    ),

    /* Keymap 1:
     *
     * gamer’s Neo2
     *
     * FIXXME: description
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  Esc   |   1  |   2  |   3  |   4  |   5  | F13  |           | F14  |   6  |   7  |   8  |   9  |   0  |   -    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  Tab   |   X  |   V  |   L  |   C  |   W  | BKSP |           |  L2  |   K  |   H  |   G  |   F  |   Q  |   ß    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  Del   |   U  |   I  |   A  |   E  |   O  |------|           |------|   S  |   N  |   R  |   T  |   D  |   Y    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  LSft  |   Ü  |   Ö  |   Ä  |   P  |   Z  | RET  |           |  L4  |   B  |   M  |   ,  |   .  |   J  |  RSft  |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LCtrl|  F1  |  F2  |  F3  |  F4  |                                       |  F9  |  F10 |  F11 | F12  | RCtrl|
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  F5  |  F6  |       |  F7  |  F8  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | LAlt |       | RCtrl|      |      |
     *                                 | Space|  L3  |------|       |------|  M3r | Space|
     *                                 |      |      | LGui |       | RGui |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        LSFT,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        LCTL,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                  SPC, FN3,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
              FN2,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,RSFT,
                       TRNS,TRNS,TRNS,TRNS,RCTL,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    /* Keymap 2:
     *
     * poor man’s Neo2
     *
     * FIXXME: description
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  Esc   |   1  |   2  |   3  |   4  |   5  | F13  |           | F14  |   6  |   7  |   8  |   9  |   0  |   -    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  Tab   |   X  |   V  |   L  |   C  |   W  | BKSP |           |  L0  |   K  |   H  |   G  |   F  |   Q  |   ß    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  Del   |   U  |   I  |   A  |   E  |   O  |------|           |------|   S  |   N  |   R  |   T  |   D  |   Y    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |   <    |   Ü  |   Ö  |   Ä  |   P  |   Z  | RET  |           |  L4  |   B  |   M  |   ,  |   .  |   J  |  T1    |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | Prnt |  F1  |  F2  |  F3  |  F4  |                                       |  F9  |  F10 |  F11 | F12  |  T3  |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  F5  |  F6  |       |  F7  |  F8  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | LAlt |       | RCtrl|      |      |
     *                                 | LSft |  M4l |------|       |------|   #  | Space|
     *                                 |      |      | LGui |       | RGui |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,   X,   V,   L,   C,   W,TRNS,
        TRNS,   U,   I,   A,   E,   O,
        NUBS,LBRC,SCLN,QUOT,   P,   Y,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS, FN3,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,SLSH,
              FN0,   K,   H,   G,   F,   Q,MINS,
                     S,   N,   R,   T,   D,   Z,
             TRNS,   B,   M,COMM, DOT,   J, GRV,
                       TRNS,TRNS,TRNS,TRNS, EQL,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    /* Keymap 3:
     *
     * hardware Neo2 layer 4
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        | PgUp | BSpc |  Up  |  Del | PgDn |      |           |      |      |   7  |   8  |   9  |   +  |   -    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        | Home | Left | Down | Right|  End |------|           |------|      |   4  |   5  |   6  |   ,  |   .    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |  Esc |  Tab |  Ins |  Ret | Undo |      |           |      |      |   1  |   2  |   3  |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | LAlt |       | RCtrl|      |      |
     *                                 | LSft |      |------|       |------|      |   0  |
     *                                 |      |      | LGui |       | RGui |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(
        // left hand
          NO,  NO,  NO,  NO,  NO,  NO,  NO,
          NO,PGUP,BSPC,  UP, DEL,PGDN,  NO,
          NO,HOME,LEFT,DOWN,RGHT, END,
          NO, ESC, TAB, INS, ENT,UNDO,  NO,
          NO,  NO,  NO,  NO,  NO,
                                        NO,  NO,
                                           TRNS,
                                 TRNS, FN3,TRNS,
        // right hand
               NO,  NO,  NO,  NO,  NO,  NO,  NO,
               NO,  NO,KP_7,KP_8,KP_9,RBRC,MINS,
                    NO,KP_4,KP_5,KP_6,COMM, DOT,
               NO,  NO,KP_1,KP_2,KP_3,  NO,  NO,
                         NO,  NO,  NO,  NO,  NO,
          NO,  NO,
        TRNS,
        TRNS,  NO,KP_0
    ),

    /* Keymap 4:
     *
     * special keys
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | Power  |      |      |      |      |      |Teensy|           |      |      |      |      |      |      | Teensy |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           | Ins  | Vol+ |  App |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |------|           |------| Mute | Last | Pl/Ps| Next | Stop |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |  KVM |           |      | Vol- |      |      |      |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(
        // left hand
         PWR,  NO,  NO,  NO,  NO,  NO, FN5,
          NO,  NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  NO,  NO,  NO, FN6,
          NO,  NO,  NO,  NO,  NO,
                                        NO,  NO,
                                             NO,
                                   NO,  NO,  NO,
        // right hand
               NO,  NO,  NO,  NO,  NO,  NO, FN5,
              INS,VOLU, APP,  NO,  NO,  NO,  NO,
                  MUTE,MPRV,MPLY,MNXT,MSTP,  NO,
              FN4,VOLD,  NO,  NO,  NO,  NO,  NO,
                         NO,  NO,  NO,  NO,  NO,
          NO,  NO,
          NO,
          NO,  NO,  NO
    ),
};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
    LAYER0,
    LAYER1,
    LAYER2,
};

enum macro_id {
    KVM_SWITCH,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    ACTION_FUNCTION(LAYER0),                        // FN0 - switch to Layer0
    ACTION_FUNCTION(LAYER1),                        // FN1 - switch to Layer1
    ACTION_FUNCTION(LAYER2),                        // FN2 - switch to Layer1
    ACTION_LAYER_MOMENTARY(3),                      // FN3 - toggle Layer3
    ACTION_LAYER_MOMENTARY(4),                      // FN4 - toggle Layer4
    ACTION_FUNCTION(TEENSY_KEY),                    // FN5 - Teensy key
    ACTION_MACRO(KVM_SWITCH),                       // FN6 - KVM switch macro
};

void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
    print("action_function called\n");
    print("id  = "); phex(id); print("\n");
    print("opt = "); phex(opt); print("\n");
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
    } else if (id == LAYER0) {
        // led off
        ergodox_led_all_off();
        // layer 0
        ACTION_DEFAULT_LAYER_SET(0);

    /*
     * I should rewrite this using event->tap_count and a switch statement.
     * That way I can switch to all 3 layers using one single key and put
     * FN0 on all layers to return quickly.
     */

    } else if (id == LAYER1) {
        // led 1 on
        ergodox_led_all_off();
        ergodox_right_led_1_on();
        // layer 1
        ACTION_DEFAULT_LAYER_SET(1);
    } else if (id == LAYER2) {
        // led 2 on
        ergodox_led_all_off();
        ergodox_right_led_2_on();
        // layer 2
        ACTION_DEFAULT_LAYER_SET(2);
    }
}

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    keyevent_t event = record->event; // either that’s wrong or the stuff in the function function
    tap_t tap = record->tap;

    switch (id) {
        case KVM_SWITCH:
            return (event.pressed ?
                    MACRO( T(LCTRL), T(LCTRL), W(500), T(RETURN)) : MACRO_NONE);
            break;
    }
}
