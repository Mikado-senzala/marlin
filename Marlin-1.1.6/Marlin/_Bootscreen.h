/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Custom Bitmap for splashscreen
 *
 * You may use one of the following tools to generate the C++ bitmap array from
 * a black and white image:
 *
 *  - http://www.marlinfw.org/tools/u8glib/converter.html
 *  - http://www.digole.com/tools/PicturetoC_Hex_converter.php
 */
#include <avr/pgmspace.h>

#define CUSTOM_BOOTSCREEN_TIMEOUT   1500
#define CUSTOM_BOOTSCREEN_BMPWIDTH  128
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64

const unsigned char custom_start_bmp[1024] PROGMEM = {
  0x00, 0x01, 0x80, 0x00, 0x00, 0x18, 0x00, 0x00, 0x01, 0xff, 0xbb, 0xe1, 0xf6, 0xec, 0xdc, 0x01, 
  0x00, 0x1f, 0xe0, 0x00, 0x00, 0x18, 0x00, 0x00, 0x01, 0xfd, 0xdd, 0xf9, 0xb2, 0x66, 0x7e, 0x00, 
  0x01, 0xfe, 0x78, 0x00, 0x00, 0x18, 0x00, 0x00, 0x01, 0xf6, 0xee, 0xfd, 0xdb, 0x37, 0x77, 0x00, 
  0x1f, 0xe0, 0x1e, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0xf7, 0x77, 0x7f, 0xc9, 0x93, 0x9b, 0x80, 
  0xfe, 0x00, 0x07, 0x80, 0x00, 0x18, 0x07, 0xc0, 0x00, 0xfb, 0x39, 0x9f, 0xed, 0x98, 0xdd, 0xc0, 
  0xe0, 0x00, 0x01, 0xe0, 0x00, 0x18, 0x01, 0xf0, 0x00, 0xf9, 0x88, 0xcb, 0xe4, 0xc8, 0xc6, 0xe0, 
  0x00, 0x00, 0x00, 0x78, 0x00, 0x18, 0x00, 0x7c, 0x00, 0x6c, 0xc4, 0x65, 0xf4, 0x40, 0x67, 0x60, 
  0x00, 0x00, 0x00, 0x1e, 0x00, 0x18, 0x00, 0x0e, 0x00, 0x36, 0x20, 0x00, 0xf0, 0x3e, 0x01, 0xb0, 
  0x00, 0x00, 0x00, 0x07, 0x80, 0x18, 0x7c, 0x03, 0x80, 0x3b, 0x0f, 0xff, 0x63, 0xff, 0xf1, 0x98, 
  0x00, 0x00, 0x00, 0x01, 0xe0, 0x18, 0xff, 0x81, 0xc0, 0x18, 0x3e, 0x01, 0xff, 0x00, 0x7e, 0x4c, 
  0x07, 0xff, 0xc0, 0x00, 0x78, 0x18, 0x03, 0xe0, 0x60, 0x0c, 0xf0, 0x00, 0x78, 0x00, 0x07, 0x2e, 
  0x0f, 0xff, 0xf0, 0x00, 0x1e, 0x18, 0x00, 0x7c, 0x30, 0x07, 0x80, 0x00, 0xf0, 0x00, 0x01, 0xe6, 
  0x0c, 0x00, 0x38, 0x00, 0x07, 0x98, 0x00, 0x0f, 0x18, 0x0f, 0x00, 0x01, 0xc0, 0x00, 0x00, 0xe3, 
  0x3f, 0xff, 0xf8, 0x00, 0x01, 0xf8, 0x00, 0x03, 0x8c, 0x3c, 0x00, 0x03, 0x00, 0x00, 0x00, 0x33, 
  0xff, 0xff, 0xfc, 0x00, 0x00, 0x78, 0x01, 0x00, 0xe6, 0xf8, 0x00, 0x06, 0x00, 0x00, 0x00, 0x1f, 
  0xe0, 0x00, 0x67, 0x80, 0x07, 0xf0, 0x7f, 0xfc, 0x33, 0xf0, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x1c, 
  0x60, 0x00, 0x60, 0xf1, 0xff, 0x01, 0xfb, 0xff, 0xcf, 0x60, 0x03, 0x98, 0x00, 0x00, 0x00, 0x0c, 
  0x60, 0x00, 0x60, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0xfc, 0xc0, 0x07, 0x98, 0xe0, 0x00, 0x00, 0x06, 
  0x60, 0x00, 0x60, 0x38, 0x00, 0x00, 0x00, 0x00, 0x39, 0x80, 0x0f, 0xb1, 0xe0, 0x00, 0x00, 0x06, 
  0x60, 0x00, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x71, 0x00, 0x1f, 0x63, 0xe0, 0x00, 0x00, 0x03, 
  0x60, 0x00, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0xf3, 0x00, 0x1f, 0x47, 0xc0, 0x00, 0x00, 0x03, 
  0x60, 0x00, 0x60, 0x30, 0x00, 0x00, 0x00, 0x01, 0xe6, 0x00, 0x1e, 0xcf, 0xc0, 0x00, 0x00, 0x03, 
  0x60, 0x00, 0x60, 0x30, 0x00, 0x00, 0x00, 0x03, 0x86, 0x00, 0x0c, 0x8f, 0x80, 0x00, 0x00, 0x03, 
  0x60, 0x00, 0x60, 0x30, 0x00, 0x00, 0x00, 0x07, 0x4c, 0x00, 0x01, 0x87, 0x00, 0x00, 0x00, 0x01, 
  0x60, 0x00, 0x60, 0x30, 0x00, 0x00, 0x00, 0x0c, 0xac, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 
  0x7f, 0xff, 0xf0, 0x30, 0x00, 0x00, 0x00, 0x1b, 0x48, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x01, 
  0xff, 0xff, 0xff, 0x30, 0x00, 0x00, 0x00, 0x36, 0xd8, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x01, 
  0xf0, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x6d, 0x98, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x01, 
  0xf0, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x00, 0xdb, 0x58, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x01, 
  0x30, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0xf6, 0x90, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x01, 
  0x18, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x01, 0xbd, 0x50, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x01, 
  0x0c, 0x00, 0x18, 0x00, 0x00, 0x00, 0x01, 0xea, 0x90, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x01, 
  0x06, 0x00, 0x30, 0x00, 0x00, 0x00, 0x03, 0x7a, 0xb0, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x01, 
  0x03, 0x00, 0x60, 0x00, 0x00, 0x00, 0x03, 0x50, 0x30, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0x01, 0x80, 0xc0, 0x00, 0x00, 0x00, 0x06, 0x40, 0x30, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0x00, 0xc1, 0x80, 0x00, 0x00, 0x00, 0x06, 0x0f, 0xf0, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0x00, 0x63, 0x00, 0x00, 0x00, 0x00, 0x06, 0x38, 0x70, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x06, 
  0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xe0, 0x18, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x06, 
  0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x80, 0x18, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x06, 
  0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x0c, 0x18, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x0c, 
  0x00, 0x08, 0xff, 0xff, 0xff, 0xfe, 0x1e, 0x00, 0x0c, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x18, 
  0x00, 0x06, 0x00, 0x00, 0x00, 0x01, 0x1e, 0xc0, 0x06, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x18, 
  0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1c, 0x84, 0x07, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x30, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1c, 0x0c, 0x03, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x60, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x18, 0x08, 0xc1, 0xc0, 0x03, 0x00, 0x00, 0x00, 0x00, 0xe0, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x01, 0x18, 0x0f, 0xc0, 0xe0, 0x03, 0x00, 0x00, 0x00, 0x01, 0x81, 
  0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x18, 0xce, 0x40, 0x78, 0x3f, 0x80, 0x00, 0x00, 0x03, 0x81, 
  0x01, 0x04, 0x02, 0x08, 0x04, 0x10, 0x1c, 0x00, 0x40, 0x1f, 0xe1, 0xe0, 0x00, 0x00, 0x07, 0x01, 
  0x01, 0xfc, 0x03, 0xf8, 0x07, 0xf0, 0x1c, 0x00, 0x60, 0x07, 0xc0, 0x30, 0x00, 0x00, 0x0c, 0x01, 
  0x01, 0x04, 0x02, 0x08, 0x04, 0x10, 0x0e, 0x00, 0x60, 0x01, 0x80, 0x08, 0x00, 0x00, 0x78, 0x03, 
  0x01, 0xfc, 0x03, 0xf8, 0x07, 0xf0, 0x0f, 0x00, 0x30, 0x01, 0x80, 0x0f, 0x00, 0x01, 0xe0, 0x03, 
  0x01, 0x04, 0x02, 0x08, 0x04, 0x10, 0x0f, 0x80, 0x10, 0x00, 0xc0, 0x0d, 0xf8, 0x3f, 0x80, 0x06, 
  0x01, 0xfc, 0x03, 0xf8, 0x07, 0xf0, 0x0e, 0xc0, 0x18, 0x00, 0xf0, 0x18, 0x7f, 0xf8, 0x00, 0x0e, 
  0x01, 0x04, 0x02, 0x08, 0x04, 0x10, 0x06, 0x20, 0x0c, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x1c, 
  0x01, 0xfc, 0x03, 0xf8, 0x07, 0xf0, 0x06, 0x00, 0x06, 0x00, 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x38, 
  0x01, 0x04, 0x02, 0x08, 0x04, 0x10, 0x06, 0x81, 0x63, 0x80, 0x70, 0xc0, 0x00, 0x00, 0x00, 0x70, 
  0x39, 0xfc, 0x73, 0xf8, 0xe7, 0xf0, 0x06, 0xcd, 0xb0, 0xe1, 0xc0, 0x78, 0x00, 0x00, 0x01, 0xc0, 
  0x45, 0x04, 0x8a, 0x09, 0x14, 0x10, 0x03, 0x6e, 0xd8, 0x3f, 0x00, 0x1f, 0x00, 0x00, 0x0f, 0x80, 
  0x7f, 0xfc, 0xff, 0xf9, 0xff, 0xf0, 0x03, 0x77, 0x60, 0x00, 0x00, 0x03, 0xfc, 0x03, 0xfc, 0x00, 
  0x40, 0x04, 0x80, 0x09, 0x00, 0x10, 0x01, 0xbb, 0xb8, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x00, 
  0x7f, 0xfc, 0x7f, 0xf9, 0xff, 0xf0, 0x01, 0xdd, 0xc8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x20, 0x08, 0x40, 0x10, 0x80, 0x20, 0x00, 0xee, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x1f, 0xf0, 0x3f, 0xe0, 0x7f, 0xc0, 0x00, 0x77, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3b, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};