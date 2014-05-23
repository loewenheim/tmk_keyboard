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
     * |  Tab   |   X  |   V  |   L  |   C  |   W  | BKSP |           | Fn1  |   K  |   H  |   G  |   F  |   Q  |   ß    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  Del   |   U  |   I  |   A  |   E  |   O  |------|           |------|   S  |   N  |   R  |   T  |   D  |   Y    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  T1    |   Ü  |   Ö  |   Ä  |   P  |   Z  | RET  |           | Fn4  |   B  |   M  |   ,  |   .  |   J  |  T2    |
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
        GRV,   Z,   X,   C,   P,   B,  ENT,
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
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  Esc   |   1  |   2  |   3  |   4  |   5  | F13  |           | F14  |   6  |   7  |   8  |   9  |   0  |   -    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  Tab   |   X  |   V  |   L  |   C  |   W  | BKSP |           | Fn2  |   K  |   H  |   G  |   F  |   Q  |   ß    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  Del   |   U  |   I  |   A  |   E  |   O  |------|           |------|   S  |   N  |   R  |   T  |   D  |   Y    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  LSft  |   Ü  |   Ö  |   Ä  |   P  |   Z  | RET  |           | Fn4  |   B  |   M  |   ,  |   .  |   J  |  RSft  |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LCtrl|  F1  |  F2  |  F3  |  F4  |                                       |  F9  |  F10 |  F11 | F12  | RCtrl|
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  F5  |  F6  |       |  F7  |  F8  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | LAlt |       | RCtrl|      |      |
     *                                 | Space|  Fn3 |------|       |------|  M3r | Space|
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
     * FIXXME
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  Esc   |   1  |   2  |   3  |   4  |   5  | F13  |           | F14  |   6  |   7  |   8  |   9  |   0  |   -    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  Tab   |   X  |   V  |   L  |   C  |   W  | BKSP |           | Fn0  |   K  |   H  |   G  |   F  |   Q  |   ß    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  Del   |   U  |   I  |   A  |   E  |   O  |------|           |------|   S  |   N  |   R  |   T  |   D  |   Y    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  T1    |   Ü  |   Ö  |   Ä  |   P  |   Z  | RET  |           | Fn4  |   B  |   M  |   ,  |   .  |   J  |  T2    |
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

    KEYMAP( // FIXXME
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,   X,   V,   L,   C,   W,TRNS,
        TRNS,   U,   I,   A,   E,   O,
        GRV, LBRC,SCLN,QUOT,   P,   Y,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS, FN3,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,SLSH,
              FN0,   K,   H,   G,   F,   Q,MINS,
                     S,   N,   R,   T,   D,   Z,
             TRNS,   B,   M,COMM, DOT,   J,  NO,
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
                                 TRNS,  NO,TRNS,
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
     * | Power  |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           | Ins  | Vol+ |  App |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |------|           |------| Mute | Last | Pl/Ps| Next | Stop |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |Teensy|           |      | Vol- |      |      |      |      |        |
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
         PWR,  NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  NO,  NO,  NO, FN5,
          NO,  NO,  NO,  NO,  NO,
                                        NO,  NO,
                                             NO,
                                   NO,  NO,  NO,
        // right hand
               NO,  NO,  NO,  NO,  NO,  NO,  NO,
              INS,VOLU, APP,  NO,  NO,  NO,  NO,
                  MUTE,MPRV,MPLY,MNXT,MSTP,  NO,
               NO,VOLD,  NO,  NO,  NO,  NO,  NO,
                         NO,  NO,  NO,  NO,  NO,
          NO,  NO,
          NO,
          NO,  NO,  NO
    ),
};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    ACTION_DEFAULT_LAYER_SET(0),                    // FIXXME: FN0 - switch to Layer0
    ACTION_LAYER_MOMENTARY(1),                      // FIXXME: FN1 - switch Layer1
    ACTION_DEFAULT_LAYER_SET(2),                    // FIXXME: FN2 - switch to Layer2
    ACTION_LAYER_MOMENTARY(3),                      // FIXXME: FN3 - toggle Layer3
    ACTION_LAYER_MOMENTARY(4),                      // FIXXME: FN4 - toggle Layer4
    ACTION_FUNCTION(TEENSY_KEY),                    // FN5 - Teensy key
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
    }
}

