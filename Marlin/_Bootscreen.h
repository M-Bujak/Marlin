/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Custom Boot Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable SHOW_CUSTOM_BOOTSCREEN in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

#define CUSTOM_BOOTSCREEN_TIMEOUT 1000
#define CUSTOM_BOOTSCREEN_BMPWIDTH 128
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64
#define CUSTOM_BOOTSCREEN_INVERTED

const unsigned char custom_start_bmp[1024] PROGMEM = {
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff,0xf0,0x00,0x7f,0x00,0x06,0x0f,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0x80,0x30,0x00,0x7e,0x00,0x06,0x00,0x01,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xc0,0x00,0x30,0x00,0x78,0x00,0x06,0x00,0x00,0x03,0xff,0xff,0xff
,0xff,0xff,0xfc,0x00,0x00,0x30,0xff,0xf0,0x3f,0xc6,0x00,0x00,0x03,0xff,0xff,0xff
,0xff,0xff,0xfc,0x00,0x3c,0x38,0xff,0xf0,0x7f,0xfe,0x3f,0x18,0x03,0xff,0xff,0xff
,0xff,0xff,0xfc,0x07,0xf8,0x38,0xff,0xf0,0x3f,0xfe,0x3f,0x1f,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0x87,0xe0,0x78,0x7f,0xf0,0x07,0xff,0xfe,0x1f,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xc7,0x00,0x7c,0x7f,0xf8,0x00,0x3f,0xfe,0x1f,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xc4,0x00,0x3c,0x03,0xff,0x00,0x0f,0xfe,0x3f,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xc4,0x00,0x1c,0x03,0xff,0xe0,0x07,0xfe,0x3f,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xc0,0x00,0x1c,0x03,0xff,0xfe,0x03,0xfe,0x3f,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xe3,0xfe,0x1c,0x1f,0xff,0xff,0x83,0xfc,0x3f,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xe3,0xff,0x1e,0x3f,0xfe,0x1f,0xc3,0xfc,0x7f,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xe1,0xfc,0x1e,0x3f,0xfe,0x07,0xc3,0xfc,0x7f,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xe1,0xf0,0x1e,0x3f,0xfe,0x03,0x03,0xfc,0x7f,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xf0,0x00,0x1e,0x00,0x07,0x00,0x03,0xfc,0x7f,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xc0,0x00,0xfe,0x00,0x07,0xc0,0x07,0xf8,0x7f,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xc0,0x03,0xfe,0x00,0x07,0xf0,0x1f,0xf8,0x7f,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xc0,0x7f,0xff,0xff,0xff,0xff,0xff,0xf8,0x7f,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x80,0x3f,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x3f,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x1f,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x02,0x0f,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x8f,0xff,0xff,0xf8,0x0f,0xe3,0x0f,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x8f,0xff,0xff,0xc0,0x0f,0xe3,0x8f,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x88,0x00,0x00,0x40,0x3f,0xc3,0x8f,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xc6,0x3f,0x88,0x00,0x00,0x41,0xff,0xc7,0x0f,0xff
,0xff,0xff,0xff,0xc0,0x01,0xff,0x86,0x1f,0x88,0x00,0x00,0x47,0xff,0xc0,0x0f,0xff
,0xff,0x00,0x01,0xc0,0x01,0xff,0x86,0x1f,0x88,0xf8,0xff,0xc3,0xff,0xc0,0x0f,0xff
,0xfc,0x00,0x00,0xc0,0x01,0xff,0x86,0x0f,0x88,0xf8,0xff,0xc3,0xff,0xc0,0x3f,0xff
,0xfc,0x00,0x00,0xe3,0xc1,0xff,0x8e,0x07,0x8f,0xf8,0xff,0xe3,0xff,0x80,0xff,0xff
,0xfc,0x1f,0xf0,0xe3,0x81,0xff,0xfe,0x07,0x8f,0xf8,0xff,0xe1,0xff,0x80,0x3f,0xff
,0xff,0x1f,0xe0,0xe2,0x03,0xff,0xff,0x07,0x8f,0xf8,0xff,0xe1,0x03,0x88,0x3f,0xff
,0xff,0x0f,0xe1,0xe0,0x0f,0xff,0x1f,0x03,0x8f,0xf8,0x7f,0xf0,0x03,0x8e,0x1f,0xff
,0xff,0x8f,0x81,0xe0,0x1f,0xff,0x1f,0x03,0x8f,0xf8,0x7f,0xf0,0x03,0x8e,0x0f,0xff
,0xff,0x8e,0x03,0xc0,0x3f,0xfe,0x1f,0x01,0x8f,0xfc,0x7f,0xf0,0x1f,0x8f,0x07,0xff
,0xff,0x80,0x07,0xc0,0x0f,0xfe,0x1f,0x10,0xc7,0xfc,0x7f,0xf0,0xff,0x8f,0x83,0xff
,0xff,0x80,0x1f,0xc0,0x03,0xfe,0x3f,0x10,0x47,0xfc,0x7f,0xf8,0xff,0xff,0xc3,0xff
,0xff,0x00,0xff,0xe3,0x00,0xfc,0x3f,0x18,0x47,0xfc,0x7f,0xf8,0xff,0xff,0xe1,0xff
,0xff,0x03,0xff,0xe3,0x80,0x3c,0x3f,0x1c,0x47,0xfc,0x7f,0xf8,0xff,0xc3,0xf0,0xff
,0xff,0x03,0xff,0xe3,0xf0,0x1c,0x7f,0x1c,0x07,0xfc,0x3f,0xf8,0x7c,0x03,0xf0,0x7f
,0xff,0xe3,0xff,0xe1,0xfc,0x1c,0x7f,0x1e,0x07,0xfc,0x3f,0xf8,0x40,0x03,0xf8,0x7f
,0xff,0xe3,0xff,0xe1,0xfe,0x18,0x7f,0x1e,0x07,0xfc,0x3f,0xf8,0x00,0x0f,0xf8,0x3f
,0xff,0xe1,0xff,0xf1,0xff,0x18,0x7f,0x1f,0x07,0xfe,0x3f,0xfc,0x00,0xff,0xfc,0x3f
,0xff,0xe1,0xff,0xf1,0xff,0xf8,0x7f,0x1f,0x07,0xfe,0x3f,0xfc,0x07,0xff,0xfe,0x3f
,0xff,0xf1,0xff,0xf1,0xff,0xf8,0xff,0xff,0x87,0xfe,0x3f,0xff,0xff,0xff,0xff,0xff
,0xff,0xf1,0xff,0xf1,0xff,0xff,0xff,0xff,0xc7,0xfe,0x3f,0xff,0xff,0xff,0xff,0xff
,0xff,0xf1,0xff,0xff,0xff,0xff,0xff,0xff,0xc7,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xf1,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
};