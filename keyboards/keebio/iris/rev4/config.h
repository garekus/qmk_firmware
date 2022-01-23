/*
Copyright 2019 Danny Nguyen <danny@keeb.io>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB10
#define PRODUCT_ID      0x4256
#define DEVICE_VER      0x0400
#define MANUFACTURER    Keebio
#define PRODUCT         Keebio Iris Rev. 4

#define MASTER_LEFT
#define USE_I2C


/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_ROW_PINS { F4, F5, F6, F7, B3 }
#define MATRIX_COL_PINS { B5, B4, E6, D7, C6, B6 } //  B6, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS_RIGHT { F4, F5, F6, F7, B3 }
#define MATRIX_COL_PINS_RIGHT { B5, B4, E6, D7, C6, B6 }
// #define QMK_ESC_OUTPUT F1
// #define QMK_ESC_INPUT B1

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
// #define BACKLIGHT_LEVELS 3

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5


