/**
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
 * Copyright 2023 casuanoob <casuanoob@hotmail.com> (@casuanoob)
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
#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 8

#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE

#define ENCODER_RESOLUTION 4

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

#define NO_MUSIC_MODE
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define LAYER_STATE_16BIT

#define ONESHOT_TIMEOUT 1000

#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD
#define PERMISSIVE_HOLD
