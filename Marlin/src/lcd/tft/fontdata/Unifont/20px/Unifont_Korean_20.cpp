/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2022 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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

#include "../../../../../inc/MarlinConfigPre.h"

#define UNIFONT 123
#if HAS_GRAPHICAL_TFT && TFT_FONT == UNIFONT

#include <stdint.h>

// Unifont Korean 32pt, capital 'A' heigth: 20px, width: 100%, range: 0xac70-0xd788, glyphs: 110
extern const uint8_t Unifont_Korean_20[11304] = {
  161,20,112,172,136,215,28,252, // unifont_t
  // 0xac70  거
  112,172,24,26,78,32,6,254,0,0,3,0,0,3,0,0,3,0,0,3,255,240,3,255,240,3,0,48,3,0,48,3,0,48,3,0,48,3,0,48,255,0,48,255,0,192,3,0,192,3,0,192,3,0,192,3,3,0,3,3,0,3,12,0,3,12,0,3,240,0,3,240,0,3,0,0,3,0,0,3,0,0,3,0,0,3,
  // 0xace0  고
  224,172,26,20,80,32,2,0,63,255,252,0,63,255,252,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,48,12,0,0,48,12,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,255,255,255,192,255,255,255,192,
  // 0xadf8  그
  248,173,26,16,64,32,2,4,63,255,252,0,63,255,252,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,0,0,0,0,0,0,255,255,255,192,255,255,255,192,
  // 0xae09  급
  9,174,26,26,104,32,2,254,15,255,252,0,15,255,252,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,0,0,0,0,0,0,255,255,255,192,255,255,255,192,0,0,0,0,0,0,0,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,15,255,252,0,15,255,252,0,12,0,12,0,12,0,12,0,15,255,252,0,15,255,252,0,
  // 0xae30  기
  48,174,20,26,78,32,6,254,0,0,48,0,0,48,0,0,48,0,0,48,255,240,48,255,240,48,0,48,48,0,48,48,0,48,48,0,48,48,0,48,48,0,48,48,0,192,48,0,192,48,0,192,48,0,192,48,3,0,48,3,0,48,12,0,48,12,0,48,240,0,48,240,0,48,0,0,48,0,0,48,0,0,48,0,0,48,
  // 0xae45  깅
  69,174,22,28,84,32,4,254,0,0,12,0,0,12,255,192,12,255,192,12,0,192,12,0,192,12,0,192,12,0,192,12,3,0,12,3,0,12,12,0,12,12,0,12,240,0,12,240,0,12,0,0,12,0,0,12,0,0,0,0,0,0,0,0,0,0,0,0,0,255,240,0,255,240,3,0,12,3,0,12,3,0,12,3,0,12,0,255,240,0,255,240,
  // 0xb044  끄
  68,176,26,16,64,32,2,4,63,243,255,0,63,243,255,0,0,48,3,0,0,48,3,0,0,48,3,0,0,48,3,0,0,48,3,0,0,48,3,0,0,48,3,0,0,48,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,192,255,255,255,192,
  // 0xb0b4  내
  180,176,28,26,104,32,2,254,0,0,12,48,0,0,12,48,0,0,12,48,0,0,12,48,0,0,12,48,0,0,12,48,192,0,12,48,192,0,12,48,192,0,12,48,192,0,12,48,192,0,15,240,192,0,15,240,192,0,12,48,192,0,12,48,192,0,12,48,192,0,12,48,192,0,12,48,192,0,12,48,255,255,12,48,255,255,12,48,0,0,12,48,0,0,12,48,0,0,12,48,0,0,12,48,0,0,12,48,0,0,12,48,
  // 0xb178  노
  120,177,26,24,96,32,2,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,63,255,255,0,63,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,255,255,255,192,255,255,255,192,
  // 0xb204  누
  4,178,22,26,78,32,4,254,192,0,0,192,0,0,192,0,0,192,0,0,192,0,0,192,0,0,192,0,0,192,0,0,192,0,0,192,0,0,255,255,252,255,255,252,0,0,0,0,0,0,0,0,0,0,0,0,255,255,252,255,255,252,0,48,0,0,48,0,0,48,0,0,48,0,0,48,0,0,48,0,0,48,0,0,48,0,
  // 0xb274  뉴
  116,178,26,26,104,32,2,254,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,63,255,255,0,63,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,192,255,255,255,192,0,192,192,0,0,192,192,0,0,192,192,0,0,192,192,0,0,192,192,0,0,192,192,0,0,192,192,0,0,192,192,0,
  // 0xb2c8  니
  200,178,24,26,78,32,2,254,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,192,0,3,192,0,3,192,0,3,192,0,3,192,0,3,192,0,3,192,0,3,192,0,3,192,0,3,192,0,3,192,0,3,192,0,3,255,255,3,255,255,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,
  // 0xb2e4  다
  228,178,28,26,104,32,2,254,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,255,255,12,0,255,255,12,0,192,0,12,0,192,0,12,0,192,0,12,0,192,0,12,0,192,0,15,240,192,0,15,240,192,0,12,0,192,0,12,0,192,0,12,0,192,0,12,0,255,255,12,0,255,255,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,
  // 0xb2f9  당
  249,178,28,28,112,32,2,254,0,0,3,0,0,0,3,0,0,0,3,0,0,0,3,0,255,240,3,0,255,240,3,0,192,0,3,0,192,0,3,0,192,0,3,240,192,0,3,240,192,0,3,0,192,0,3,0,255,240,3,0,255,240,3,0,0,0,3,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,252,0,0,63,252,0,0,192,3,0,0,192,3,0,0,192,3,0,0,192,3,0,0,63,252,0,0,63,252,0,
  // 0xb3c4  도
  196,179,26,24,96,32,2,0,63,255,255,0,63,255,255,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,63,255,255,0,63,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,255,255,255,192,255,255,255,192,
  // 0xb3cc  돌
  204,179,26,26,104,32,2,254,15,255,252,0,15,255,252,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,15,255,252,0,15,255,252,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,255,255,255,192,255,255,255,192,0,0,0,0,0,0,0,0,15,255,252,0,15,255,252,0,0,0,12,0,0,0,12,0,15,255,252,0,15,255,252,0,12,0,0,0,12,0,0,0,15,255,252,0,15,255,252,0,
  // 0xb3d9  동
  217,179,26,26,104,32,2,254,15,255,252,0,15,255,252,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,15,255,252,0,15,255,252,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,255,255,255,192,255,255,255,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,192,0,0,255,192,0,3,0,48,0,3,0,48,0,3,0,48,0,3,0,48,0,0,255,192,0,0,255,192,0,
  // 0xb418  되
  24,180,24,28,84,32,2,254,0,0,3,0,0,3,0,0,3,0,0,3,255,255,3,255,255,3,192,0,3,192,0,3,192,0,3,192,0,3,192,0,3,192,0,3,255,255,3,255,255,3,0,0,3,0,0,3,0,0,3,0,0,3,0,192,3,0,192,3,0,192,3,0,192,3,255,255,243,255,255,243,0,0,3,0,0,3,0,0,3,0,0,3,
  // 0xb41c  된
  28,180,24,28,84,32,2,254,0,0,3,0,0,3,63,255,3,63,255,3,48,0,3,48,0,3,48,0,3,48,0,3,63,255,3,63,255,3,0,192,3,0,192,3,0,192,3,0,192,3,255,255,243,255,255,243,0,0,0,0,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,255,255,3,255,255,
  // 0xb428  됨
  40,180,24,28,84,32,2,254,0,0,3,0,0,3,63,255,3,63,255,3,48,0,3,48,0,3,48,0,3,48,0,3,63,255,3,63,255,3,0,192,3,0,192,3,0,192,3,0,192,3,255,255,243,255,255,243,0,0,0,0,0,0,0,63,255,0,63,255,0,48,3,0,48,3,0,48,3,0,48,3,0,48,3,0,48,3,0,63,255,0,63,255,
  // 0xb4a4  뒤
  164,180,24,28,84,32,2,254,0,0,3,0,0,3,0,0,3,0,0,3,255,255,195,255,255,195,192,0,3,192,0,3,192,0,3,192,0,3,192,0,3,192,0,3,255,255,195,255,255,195,0,0,3,0,0,3,0,0,3,0,0,3,255,255,243,255,255,243,0,192,3,0,192,3,0,192,3,0,192,3,0,192,3,0,192,3,0,192,3,0,192,3,
  // 0xb4dc  드
  220,180,26,20,80,32,2,4,63,255,255,0,63,255,255,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,63,255,255,0,63,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,192,255,255,255,192,
  // 0xb514  디
  20,181,24,26,78,32,2,254,0,0,3,0,0,3,0,0,3,0,0,3,255,255,3,255,255,3,192,0,3,192,0,3,192,0,3,192,0,3,192,0,3,192,0,3,192,0,3,192,0,3,192,0,3,192,0,3,255,255,3,255,255,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,
  // 0xb77c  라
  124,183,26,26,104,32,4,254,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,255,252,48,0,255,252,48,0,0,12,48,0,0,12,48,0,0,12,48,0,0,12,48,0,255,252,63,192,255,252,63,192,192,0,48,0,192,0,48,0,192,0,48,0,192,0,48,0,192,0,48,0,192,0,48,0,255,252,48,0,255,252,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,
  // 0xb7ec  러
  236,183,26,26,104,32,4,254,0,0,0,192,0,0,0,192,0,0,0,192,0,0,0,192,255,252,0,192,255,252,0,192,0,12,0,192,0,12,0,192,0,12,0,192,0,12,0,192,255,252,63,192,255,252,63,192,192,0,0,192,192,0,0,192,192,0,0,192,192,0,0,192,192,0,0,192,192,0,0,192,255,252,0,192,255,252,0,192,0,0,0,192,0,0,0,192,0,0,0,192,0,0,0,192,0,0,0,192,0,0,0,192,
  // 0xb808  레
  8,184,26,26,104,32,4,254,0,0,12,192,0,0,12,192,0,0,12,192,0,0,12,192,255,252,12,192,255,252,12,192,0,12,12,192,0,12,12,192,0,12,12,192,0,12,12,192,255,252,252,192,255,252,252,192,192,0,12,192,192,0,12,192,192,0,12,192,192,0,12,192,192,0,12,192,192,0,12,192,255,252,12,192,255,252,12,192,0,0,12,192,0,0,12,192,0,0,12,192,0,0,12,192,0,0,12,192,0,0,12,192,
  // 0xb825  력
  37,184,22,28,84,32,4,254,0,0,12,0,0,12,0,0,12,0,0,12,255,240,12,255,240,12,0,48,252,0,48,252,255,240,12,255,240,12,192,0,252,192,0,252,255,240,12,255,240,12,0,0,12,0,0,12,0,0,0,0,0,0,0,0,0,0,0,0,3,255,252,3,255,252,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,
  // 0xb85c  로
  92,184,26,24,96,32,2,0,15,255,252,0,15,255,252,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,15,255,252,0,15,255,252,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,15,255,252,0,15,255,252,0,0,0,0,0,0,0,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,255,255,255,192,255,255,255,192,
  // 0xb8cc  료
  204,184,26,24,96,32,2,0,15,255,252,0,15,255,252,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,15,255,252,0,15,255,252,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,15,255,252,0,15,255,252,0,0,192,192,0,0,192,192,0,0,192,192,0,0,192,192,0,0,192,192,0,0,192,192,0,0,192,192,0,0,192,192,0,255,255,255,192,255,255,255,192,
  // 0xb974  르
  116,185,26,20,80,32,2,4,15,255,252,0,15,255,252,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,15,255,252,0,15,255,252,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,15,255,252,0,15,255,252,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,192,255,255,255,192,
  // 0xb9ac  리
  172,185,22,26,78,32,4,254,0,0,12,0,0,12,0,0,12,0,0,12,255,252,12,255,252,12,0,12,12,0,12,12,0,12,12,0,12,12,255,252,12,255,252,12,192,0,12,192,0,12,192,0,12,192,0,12,192,0,12,192,0,12,255,252,12,255,252,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,
  // 0xb9b0  린
  176,185,22,28,84,32,4,254,0,0,12,0,0,12,0,0,12,0,0,12,255,240,12,255,240,12,0,48,12,0,48,12,255,240,12,255,240,12,192,0,12,192,0,12,255,240,12,255,240,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,0,0,0,0,48,0,0,48,0,0,48,0,0,48,0,0,48,0,0,48,0,0,63,255,252,63,255,252,
  // 0xb9bd  립
  189,185,22,28,84,32,4,254,0,0,12,0,0,12,0,0,12,0,0,12,255,240,12,255,240,12,0,48,12,0,48,12,255,240,12,255,240,12,192,0,12,192,0,12,255,240,12,255,240,12,0,0,12,0,0,12,0,0,0,0,0,0,0,192,12,0,192,12,0,192,12,0,192,12,0,255,252,0,255,252,0,192,12,0,192,12,0,255,252,0,255,252,
  // 0xb9c1  링
  193,185,22,28,84,32,4,254,0,0,12,0,0,12,0,0,12,0,0,12,255,240,12,255,240,12,0,48,12,0,48,12,255,240,12,255,240,12,192,0,12,192,0,12,255,240,12,255,240,12,0,0,12,0,0,12,0,0,0,0,0,0,0,0,0,0,0,0,0,255,240,0,255,240,3,0,12,3,0,12,3,0,12,3,0,12,0,255,240,0,255,240,
  // 0xba48  멈
  72,186,24,28,84,32,2,254,0,0,3,0,0,3,255,240,3,255,240,3,192,48,3,192,48,3,192,48,3,192,48,3,192,48,63,192,48,63,192,48,3,192,48,3,255,240,3,255,240,3,0,0,3,0,0,3,0,0,0,0,0,0,0,63,255,0,63,255,0,48,3,0,48,3,0,48,3,0,48,3,0,48,3,0,48,3,0,63,255,0,63,255,
  // 0xba54  메
  84,186,28,26,104,32,2,254,0,0,3,48,0,0,3,48,0,0,3,48,0,0,3,48,255,255,3,48,255,255,3,48,192,3,3,48,192,3,3,48,192,3,3,48,192,3,3,48,192,3,63,48,192,3,63,48,192,3,3,48,192,3,3,48,192,3,3,48,192,3,3,48,192,3,3,48,192,3,3,48,255,255,3,48,255,255,3,48,0,0,3,48,0,0,3,48,0,0,3,48,0,0,3,48,0,0,3,48,0,0,3,48,
  // 0xba74  면
  116,186,24,28,84,32,2,254,0,0,3,0,0,3,255,240,3,255,240,3,192,48,3,192,48,3,192,48,63,192,48,63,192,48,3,192,48,3,192,48,63,192,48,63,255,240,3,255,240,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,0,0,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,15,255,255,15,255,255,
  // 0xbaa8  모
  168,186,26,24,96,32,2,0,63,255,255,0,63,255,255,0,48,0,3,0,48,0,3,0,48,0,3,0,48,0,3,0,48,0,3,0,48,0,3,0,48,0,3,0,48,0,3,0,63,255,255,0,63,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,255,255,255,192,255,255,255,192,
  // 0xbabb  못
  187,186,26,28,112,32,2,254,15,255,252,0,15,255,252,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,15,255,252,0,15,255,252,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,255,255,255,192,255,255,255,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,51,0,0,0,51,0,0,3,192,192,0,3,192,192,0,
  // 0xbbf8  미
  248,187,24,26,78,32,2,254,0,0,3,0,0,3,0,0,3,0,0,3,255,255,3,255,255,3,192,3,3,192,3,3,192,3,3,192,3,3,192,3,3,192,3,3,192,3,3,192,3,3,192,3,3,192,3,3,192,3,3,192,3,3,255,255,3,255,255,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,
  // 0xbc00  밀
  0,188,24,28,84,32,2,254,0,0,3,0,0,3,255,240,3,255,240,3,192,48,3,192,48,3,192,48,3,192,48,3,192,48,3,192,48,3,192,48,3,192,48,3,255,240,3,255,240,3,0,0,3,0,0,3,0,0,0,0,0,0,0,255,255,0,255,255,0,0,3,0,0,3,0,255,255,0,255,255,0,192,0,0,192,0,0,255,255,0,255,255,
  // 0xbc14  바
  20,188,26,26,104,32,4,254,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,192,12,48,0,192,12,48,0,192,12,48,0,192,12,48,0,192,12,48,0,192,12,48,0,255,252,63,192,255,252,63,192,192,12,48,0,192,12,48,0,192,12,48,0,192,12,48,0,192,12,48,0,192,12,48,0,255,252,48,0,255,252,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,
  // 0xbc84  버
  132,188,26,26,104,32,4,254,0,0,0,192,0,0,0,192,0,0,0,192,0,0,0,192,192,12,0,192,192,12,0,192,192,12,0,192,192,12,0,192,192,12,0,192,192,12,0,192,255,252,63,192,255,252,63,192,192,12,0,192,192,12,0,192,192,12,0,192,192,12,0,192,192,12,0,192,192,12,0,192,255,252,0,192,255,252,0,192,0,0,0,192,0,0,0,192,0,0,0,192,0,0,0,192,0,0,0,192,0,0,0,192,
  // 0xbca0  베
  160,188,26,26,104,32,4,254,0,0,12,192,0,0,12,192,0,0,12,192,0,0,12,192,192,12,12,192,192,12,12,192,192,12,12,192,192,12,12,192,192,12,12,192,192,12,12,192,255,252,252,192,255,252,252,192,192,12,12,192,192,12,12,192,192,12,12,192,192,12,12,192,192,12,12,192,192,12,12,192,255,252,12,192,255,252,12,192,0,0,12,192,0,0,12,192,0,0,12,192,0,0,12,192,0,0,12,192,0,0,12,192,
  // 0xbca8  벨
  168,188,24,28,84,32,2,254,0,0,51,0,0,51,0,0,51,0,0,51,192,48,51,192,48,51,192,48,51,192,48,51,255,243,243,255,243,243,192,48,51,192,48,51,255,240,51,255,240,51,0,0,51,0,0,51,0,0,0,0,0,0,0,255,255,0,255,255,0,0,3,0,0,3,0,255,255,0,255,255,0,192,0,0,192,0,0,255,255,0,255,255,
  // 0xbcf8  본
  248,188,26,28,112,32,2,254,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,15,255,252,0,15,255,252,0,12,0,12,0,12,0,12,0,15,255,252,0,15,255,252,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,255,255,255,192,255,255,255,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,15,255,252,0,15,255,252,0,
  // 0xbe44  비
  68,190,22,26,78,32,4,254,0,0,12,0,0,12,0,0,12,0,0,12,192,12,12,192,12,12,192,12,12,192,12,12,192,12,12,192,12,12,255,252,12,255,252,12,192,12,12,192,12,12,192,12,12,192,12,12,192,12,12,192,12,12,255,252,12,255,252,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,
  // 0xc0ac  사
  172,192,28,26,104,32,2,254,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,48,12,0,0,48,12,0,0,48,12,0,0,48,12,0,0,192,12,0,0,192,12,0,0,192,15,240,0,192,15,240,3,48,12,0,3,48,12,0,12,12,12,0,12,12,12,0,240,3,12,0,240,3,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,
  // 0xc0bd  삽
  189,192,28,28,112,32,2,254,0,0,3,0,0,0,3,0,0,0,3,0,0,0,3,0,0,192,3,0,0,192,3,0,0,192,3,0,0,192,3,0,3,192,3,240,3,192,3,240,12,48,3,0,12,48,3,0,240,12,3,0,240,12,3,0,0,0,3,0,0,0,3,0,0,0,0,0,0,0,0,0,0,48,3,0,0,48,3,0,0,48,3,0,0,48,3,0,0,63,255,0,0,63,255,0,0,48,3,0,0,48,3,0,0,63,255,0,0,63,255,0,
  // 0xc0c8  새
  200,192,28,26,104,32,2,254,0,0,12,48,0,0,12,48,0,0,12,48,0,0,12,48,0,48,12,48,0,48,12,48,0,48,12,48,0,48,12,48,0,192,12,48,0,192,12,48,0,192,15,240,0,192,15,240,3,48,12,48,3,48,12,48,12,12,12,48,12,12,12,48,240,3,12,48,240,3,12,48,0,0,12,48,0,0,12,48,0,0,12,48,0,0,12,48,0,0,12,48,0,0,12,48,0,0,12,48,0,0,12,48,
  // 0xc124  설
  36,193,24,28,84,32,2,254,0,0,3,0,0,3,0,0,3,0,0,3,0,192,3,0,192,3,0,192,3,0,192,3,3,192,63,3,192,63,12,48,3,12,48,3,240,12,3,240,12,3,0,0,3,0,0,3,0,0,0,0,0,0,0,255,255,0,255,255,0,0,3,0,0,3,0,255,255,0,255,255,0,192,0,0,192,0,0,255,255,0,255,255,
  // 0xc18c  소
  140,193,26,24,96,32,2,0,0,3,0,0,0,3,0,0,0,3,0,0,0,3,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,51,0,0,0,51,0,0,0,192,192,0,0,192,192,0,15,0,48,0,15,0,48,0,0,0,0,0,0,0,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,255,255,255,192,255,255,255,192,
  // 0xc18d  속
  141,193,26,28,112,32,2,254,0,3,0,0,0,3,0,0,0,3,0,0,0,3,0,0,0,15,0,0,0,15,0,0,0,48,192,0,0,48,192,0,3,192,48,0,3,192,48,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,255,255,255,192,255,255,255,192,0,0,0,0,0,0,0,0,15,255,252,0,15,255,252,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,
  // 0xc2a4  스
  164,194,26,20,80,32,2,4,0,3,0,0,0,3,0,0,0,3,0,0,0,3,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,51,0,0,0,51,0,0,0,192,192,0,0,192,192,0,15,0,48,0,15,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,192,255,255,255,192,
  // 0xc2ac  슬
  172,194,26,28,112,32,2,254,0,3,0,0,0,3,0,0,0,3,0,0,0,3,0,0,0,15,0,0,0,15,0,0,0,48,192,0,0,48,192,0,3,192,48,0,3,192,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,192,255,255,255,192,0,0,0,0,0,0,0,0,15,255,252,0,15,255,252,0,0,0,12,0,0,0,12,0,15,255,252,0,15,255,252,0,12,0,0,0,12,0,0,0,15,255,252,0,15,255,252,0,
  // 0xc2dc  시
  220,194,24,26,78,32,2,254,0,0,3,0,0,3,0,0,3,0,0,3,0,48,3,0,48,3,0,48,3,0,48,3,0,192,3,0,192,3,0,192,3,0,192,3,3,48,3,3,48,3,12,12,3,12,12,3,240,3,3,240,3,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,
  // 0xc2dd  식
  221,194,24,28,84,32,2,254,0,0,3,0,0,3,0,0,3,0,0,3,0,192,3,0,192,3,0,192,3,0,192,3,3,192,3,3,192,3,12,48,3,12,48,3,240,12,3,240,12,3,0,0,3,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,0,255,255,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,
  // 0xc5b4  어
  180,197,28,26,104,32,2,254,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,15,240,0,48,15,240,0,48,48,12,0,48,48,12,0,48,192,3,0,48,192,3,0,48,192,3,15,240,192,3,15,240,192,3,0,48,192,3,0,48,48,12,0,48,48,12,0,48,15,240,0,48,15,240,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,
  // 0xc5c6  없
  198,197,26,28,112,32,4,254,0,0,12,0,0,0,12,0,63,192,12,0,63,192,12,0,192,48,12,0,192,48,12,0,192,48,12,0,192,48,12,0,192,48,252,0,192,48,252,0,192,48,12,0,192,48,12,0,63,192,12,0,63,192,12,0,0,0,12,0,0,0,12,0,0,0,0,0,0,0,0,0,192,48,12,0,192,48,12,0,192,48,12,0,192,48,12,0,255,240,12,0,255,240,12,0,192,48,51,0,192,48,51,0,255,243,192,192,255,243,192,192,
  // 0xc5d1  엑
  209,197,22,28,84,32,4,254,0,0,204,0,0,204,63,192,204,63,192,204,192,48,204,192,48,204,192,48,204,192,48,204,192,63,204,192,63,204,192,48,204,192,48,204,63,192,204,63,192,204,0,0,204,0,0,204,0,0,0,0,0,0,3,255,252,3,255,252,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,
  // 0xc5d4  엔
  212,197,22,28,84,32,4,254,0,0,204,0,0,204,63,192,204,63,192,204,192,48,204,192,48,204,192,48,204,192,48,204,192,63,204,192,63,204,192,48,204,192,48,204,63,192,204,63,192,204,0,0,204,0,0,204,0,0,0,0,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,15,255,252,15,255,252,
  // 0xc5f4  열
  244,197,22,28,84,32,4,254,0,0,12,0,0,12,63,192,12,63,192,12,192,48,12,192,48,12,192,48,252,192,48,252,192,48,12,192,48,12,192,48,252,192,48,252,63,192,12,63,192,12,0,0,12,0,0,12,0,0,0,0,0,0,3,255,252,3,255,252,0,0,12,0,0,12,3,255,252,3,255,252,3,0,0,3,0,0,3,255,252,3,255,252,
  // 0xc608  예
  8,198,28,26,104,32,2,254,0,0,3,48,0,0,3,48,0,0,3,48,0,0,3,48,15,240,3,48,15,240,3,48,48,12,3,48,48,12,3,48,192,3,63,48,192,3,63,48,192,3,3,48,192,3,3,48,192,3,3,48,192,3,3,48,48,12,63,48,48,12,63,48,15,240,3,48,15,240,3,48,0,0,3,48,0,0,3,48,0,0,3,48,0,0,3,48,0,0,3,48,0,0,3,48,0,0,3,48,0,0,3,48,
  // 0xc624  오
  36,198,26,26,104,32,2,0,0,255,192,0,0,255,192,0,3,0,48,0,3,0,48,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,3,0,48,0,3,0,48,0,0,255,192,0,0,255,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,255,255,255,192,255,255,255,192,
  // 0xc628  온
  40,198,26,28,112,32,2,254,0,255,192,0,0,255,192,0,3,0,48,0,3,0,48,0,3,0,48,0,3,0,48,0,3,0,48,0,3,0,48,0,0,255,192,0,0,255,192,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,255,255,255,192,255,255,255,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,15,255,252,0,15,255,252,0,
  // 0xc644  완
  68,198,28,28,112,32,2,254,0,0,3,0,0,0,3,0,15,252,3,0,15,252,3,0,48,3,3,0,48,3,3,0,48,3,3,240,48,3,3,240,48,3,3,0,48,3,3,0,15,252,3,0,15,252,3,0,0,192,3,0,0,192,3,0,255,255,243,0,255,255,243,0,0,0,0,0,0,0,0,0,3,0,0,0,3,0,0,0,3,0,0,0,3,0,0,0,3,0,0,0,3,0,0,0,3,0,0,0,3,0,0,0,3,255,255,0,3,255,255,0,
  // 0xc6d0  원
  208,198,24,30,90,32,2,254,15,252,3,15,252,3,48,3,3,48,3,3,48,3,3,48,3,3,48,3,3,48,3,3,15,252,3,15,252,3,0,0,3,0,0,3,0,0,3,0,0,3,255,255,243,255,255,243,0,48,255,0,48,255,0,48,3,0,48,3,0,48,3,0,48,3,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,15,255,255,15,255,255,
  // 0xc704  위
  4,199,24,28,84,32,2,254,0,0,3,0,0,3,15,252,3,15,252,3,48,3,3,48,3,3,192,0,195,192,0,195,192,0,195,192,0,195,192,0,195,192,0,195,48,3,3,48,3,3,15,252,3,15,252,3,0,0,3,0,0,3,255,255,243,255,255,243,0,192,3,0,192,3,0,192,3,0,192,3,0,192,3,0,192,3,0,192,3,0,192,3,
  // 0xc73c  으
  60,199,26,22,88,32,2,4,0,255,192,0,0,255,192,0,3,0,48,0,3,0,48,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,3,0,48,0,3,0,48,0,0,255,192,0,0,255,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,192,255,255,255,192,
  // 0xc74c  음
  76,199,26,28,112,32,2,254,0,255,192,0,0,255,192,0,3,0,48,0,3,0,48,0,3,0,48,0,3,0,48,0,3,0,48,0,3,0,48,0,0,255,192,0,0,255,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,192,255,255,255,192,0,0,0,0,0,0,0,0,15,255,252,0,15,255,252,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,15,255,252,0,15,255,252,0,
  // 0xc774  이
  116,199,24,26,78,32,2,254,0,0,3,0,0,3,0,0,3,0,0,3,15,240,3,15,240,3,48,12,3,48,12,3,192,3,3,192,3,3,192,3,3,192,3,3,192,3,3,192,3,3,48,12,3,48,12,3,15,240,3,15,240,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,
  // 0xc77c  일
  124,199,22,28,84,32,4,254,0,0,12,0,0,12,63,192,12,63,192,12,192,48,12,192,48,12,192,48,12,192,48,12,192,48,12,192,48,12,192,48,12,192,48,12,63,192,12,63,192,12,0,0,12,0,0,12,0,0,0,0,0,0,3,255,252,3,255,252,0,0,12,0,0,12,3,255,252,3,255,252,3,0,0,3,0,0,3,255,252,3,255,252,
  // 0xc77d  읽
  125,199,22,28,84,32,4,254,0,0,12,0,0,12,63,192,12,63,192,12,192,48,12,192,48,12,192,48,12,192,48,12,192,48,12,192,48,12,192,48,12,192,48,12,63,192,12,63,192,12,0,0,12,0,0,12,0,0,0,0,0,0,255,207,252,255,207,252,0,192,12,0,192,12,255,192,12,255,192,12,192,0,12,192,0,12,255,192,12,255,192,12,
  // 0xc785  입
  133,199,22,28,84,32,4,254,0,0,12,0,0,12,63,192,12,63,192,12,192,48,12,192,48,12,192,48,12,192,48,12,192,48,12,192,48,12,192,48,12,192,48,12,63,192,12,63,192,12,0,0,12,0,0,12,0,0,0,0,0,0,0,192,12,0,192,12,0,192,12,0,192,12,0,255,252,0,255,252,0,192,12,0,192,12,0,255,252,0,255,252,
  // 0xc790  자
  144,199,26,26,104,32,4,254,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,255,252,48,0,255,252,48,0,0,48,48,0,0,48,48,0,0,48,48,0,0,48,48,0,0,192,63,192,0,192,63,192,3,192,48,0,3,192,48,0,12,48,48,0,12,48,48,0,240,12,48,0,240,12,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,
  // 0xc791  작
  145,199,28,28,112,32,2,254,0,0,3,0,0,0,3,0,0,0,3,0,0,0,3,0,255,240,3,0,255,240,3,0,0,192,3,0,0,192,3,0,0,192,3,240,0,192,3,240,15,48,3,0,15,48,3,0,240,12,3,0,240,12,3,0,0,0,3,0,0,0,3,0,0,0,0,0,0,0,0,0,0,255,255,0,0,255,255,0,0,0,3,0,0,0,3,0,0,0,3,0,0,0,3,0,0,0,3,0,0,0,3,0,0,0,3,0,0,0,3,0,
  // 0xc798  잘
  152,199,28,28,112,32,2,254,0,0,3,0,0,0,3,0,0,0,3,0,0,0,3,0,255,240,3,0,255,240,3,0,0,192,3,0,0,192,3,0,0,192,3,240,0,192,3,240,15,48,3,0,15,48,3,0,240,12,3,0,240,12,3,0,0,0,3,0,0,0,3,0,0,0,0,0,0,0,0,0,0,255,255,0,0,255,255,0,0,0,3,0,0,0,3,0,0,255,255,0,0,255,255,0,0,192,0,0,0,192,0,0,0,255,255,0,0,255,255,0,
  // 0xc7a5  장
  165,199,28,28,112,32,2,254,0,0,3,0,0,0,3,0,0,0,3,0,0,0,3,0,255,240,3,0,255,240,3,0,0,192,3,0,0,192,3,0,0,192,3,240,0,192,3,240,15,48,3,0,15,48,3,0,240,12,3,0,240,12,3,0,0,0,3,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,252,0,0,63,252,0,0,192,3,0,0,192,3,0,0,192,3,0,0,192,3,0,0,63,252,0,0,63,252,0,
  // 0xc7ac  재
  172,199,26,26,104,32,4,254,0,0,48,192,0,0,48,192,0,0,48,192,0,0,48,192,255,252,48,192,255,252,48,192,0,48,48,192,0,48,48,192,0,48,48,192,0,48,48,192,0,192,63,192,0,192,63,192,3,192,48,192,3,192,48,192,12,48,48,192,12,48,48,192,240,12,48,192,240,12,48,192,0,0,48,192,0,0,48,192,0,0,48,192,0,0,48,192,0,0,48,192,0,0,48,192,0,0,48,192,0,0,48,192,
  // 0xc800  저
  0,200,26,26,104,32,4,254,0,0,0,192,0,0,0,192,0,0,0,192,0,0,0,192,255,252,0,192,255,252,0,192,0,48,0,192,0,48,0,192,0,48,0,192,0,48,0,192,0,192,63,192,0,192,63,192,3,192,0,192,3,192,0,192,12,48,0,192,12,48,0,192,240,12,0,192,240,12,0,192,0,0,0,192,0,0,0,192,0,0,0,192,0,0,0,192,0,0,0,192,0,0,0,192,0,0,0,192,0,0,0,192,
  // 0xc804  전
  4,200,24,28,84,32,2,254,0,0,3,0,0,3,0,0,3,0,0,3,255,240,3,255,240,3,0,192,3,0,192,3,0,192,63,0,192,63,15,48,3,15,48,3,240,12,3,240,12,3,0,0,3,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,15,255,255,15,255,255,
  // 0xc815  정
  21,200,24,28,84,32,2,254,0,0,3,0,0,3,0,0,3,0,0,3,255,240,3,255,240,3,0,192,3,0,192,3,0,192,63,0,192,63,15,48,3,15,48,3,240,12,3,240,12,3,0,0,3,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,63,252,0,63,252,0,192,3,0,192,3,0,192,3,0,192,3,0,63,252,0,63,252,
  // 0xc81c  제
  28,200,26,26,104,32,4,254,0,0,12,192,0,0,12,192,0,0,12,192,0,0,12,192,255,252,12,192,255,252,12,192,0,48,12,192,0,48,12,192,0,48,12,192,0,48,12,192,0,192,252,192,0,192,252,192,3,192,12,192,3,192,12,192,12,48,12,192,12,48,12,192,240,12,12,192,240,12,12,192,0,0,12,192,0,0,12,192,0,0,12,192,0,0,12,192,0,0,12,192,0,0,12,192,0,0,12,192,0,0,12,192,
  // 0xc8fd  죽
  253,200,26,28,112,32,2,254,3,255,192,0,3,255,192,0,0,3,0,0,0,3,0,0,0,3,0,0,0,3,0,0,0,60,192,0,0,60,192,0,3,192,48,0,3,192,48,0,0,0,0,0,0,0,0,0,255,255,255,192,255,255,255,192,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,15,255,252,0,15,255,252,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,
  // 0xc900  준
  0,201,26,28,112,32,2,254,3,255,192,0,3,255,192,0,0,3,0,0,0,3,0,0,0,3,0,0,0,3,0,0,0,60,192,0,0,60,192,0,3,192,48,0,3,192,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,192,255,255,255,192,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,12,12,0,0,12,12,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,15,255,252,0,15,255,252,0,
  // 0xc911  중
  17,201,26,28,112,32,2,254,3,255,192,0,3,255,192,0,0,3,0,0,0,3,0,0,0,3,0,0,0,3,0,0,0,60,192,0,0,60,192,0,3,192,48,0,3,192,48,0,0,0,0,0,0,0,0,0,255,255,255,192,255,255,255,192,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,0,0,0,0,0,0,0,0,255,192,0,0,255,192,0,3,0,48,0,3,0,48,0,3,0,48,0,3,0,48,0,0,255,192,0,0,255,192,0,
  // 0xc990  즐
  144,201,26,28,112,32,2,254,3,255,192,0,3,255,192,0,0,3,0,0,0,3,0,0,0,60,192,0,0,60,192,0,3,192,48,0,3,192,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,192,255,255,255,192,0,0,0,0,0,0,0,0,15,255,252,0,15,255,252,0,0,0,12,0,0,0,12,0,15,255,252,0,15,255,252,0,12,0,0,0,12,0,0,0,15,255,252,0,15,255,252,0,
  // 0xc9c0  지
  192,201,22,26,78,32,4,254,0,0,12,0,0,12,0,0,12,0,0,12,255,252,12,255,252,12,0,48,12,0,48,12,0,48,12,0,48,12,0,192,12,0,192,12,3,192,12,3,192,12,12,48,12,12,48,12,240,12,12,240,12,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,
  // 0xcc98  처
  152,204,26,26,104,32,4,254,0,0,0,192,0,0,0,192,3,0,0,192,3,0,0,192,3,0,0,192,3,0,0,192,255,252,0,192,255,252,0,192,0,48,0,192,0,48,0,192,0,192,63,192,0,192,63,192,3,192,0,192,3,192,0,192,12,48,0,192,12,48,0,192,240,12,0,192,240,12,0,192,0,0,0,192,0,0,0,192,0,0,0,192,0,0,0,192,0,0,0,192,0,0,0,192,0,0,0,192,0,0,0,192,
  // 0xcd08  초
  8,205,26,26,104,32,2,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,3,255,240,0,3,255,240,0,0,0,192,0,0,0,192,0,0,3,0,0,0,3,0,0,0,15,0,0,0,15,0,0,0,48,192,0,0,48,192,0,3,192,48,0,3,192,48,0,0,0,0,0,0,0,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,255,255,255,192,255,255,255,192,
  // 0xcd95  축
  149,205,26,28,112,32,2,254,0,12,0,0,0,12,0,0,3,255,192,0,3,255,192,0,0,12,0,0,0,12,0,0,0,51,0,0,0,51,0,0,3,192,192,0,3,192,192,0,0,0,0,0,0,0,0,0,255,255,255,192,255,255,255,192,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,15,255,252,0,15,255,252,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,
  // 0xcd9c  출
  156,205,26,28,112,32,2,254,0,12,0,0,0,12,0,0,3,255,192,0,3,255,192,0,0,12,0,0,0,12,0,0,0,51,0,0,0,51,0,0,3,192,192,0,3,192,192,0,0,0,0,0,0,0,0,0,255,255,255,192,255,255,255,192,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,15,255,252,0,15,255,252,0,0,0,12,0,0,0,12,0,15,255,252,0,15,255,252,0,12,0,0,0,12,0,0,0,15,255,252,0,15,255,252,0,
  // 0xcda4  춤
  164,205,26,28,112,32,2,254,0,12,0,0,0,12,0,0,3,255,192,0,3,255,192,0,0,12,0,0,0,12,0,0,0,51,0,0,0,51,0,0,3,192,192,0,3,192,192,0,0,0,0,0,0,0,0,0,255,255,255,192,255,255,255,192,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,15,255,252,0,15,255,252,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,15,255,252,0,15,255,252,0,
  // 0xcde8  취
  232,205,24,28,84,32,2,254,0,192,3,0,192,3,0,192,3,0,192,3,63,255,3,63,255,3,0,12,3,0,12,3,0,48,3,0,48,3,0,240,3,0,240,3,3,12,3,3,12,3,60,3,3,60,3,3,0,0,3,0,0,3,255,255,243,255,255,243,0,192,3,0,192,3,0,192,3,0,192,3,0,192,3,0,192,3,0,192,3,0,192,3,
  // 0xce58  치
  88,206,22,26,78,32,4,254,0,0,12,0,0,12,3,0,12,3,0,12,3,0,12,3,0,12,255,252,12,255,252,12,0,48,12,0,48,12,0,192,12,0,192,12,3,192,12,3,192,12,12,48,12,12,48,12,240,12,12,240,12,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,
  // 0xce68  침
  104,206,24,28,84,32,2,254,0,0,3,0,0,3,0,0,3,0,0,3,3,0,3,3,0,3,255,240,3,255,240,3,3,0,3,3,0,3,12,192,3,12,192,3,240,48,3,240,48,3,0,0,3,0,0,3,0,0,0,0,0,0,0,63,255,0,63,255,0,48,3,0,48,3,0,48,3,0,48,3,0,48,3,0,48,3,0,63,255,0,63,255,
  // 0xce74  카
  116,206,24,26,78,32,6,254,0,0,192,0,0,192,0,0,192,0,0,192,255,240,192,255,240,192,0,48,192,0,48,192,0,48,192,0,48,192,0,48,255,0,48,255,255,192,192,255,192,192,0,192,192,0,192,192,3,0,192,3,0,192,12,0,192,12,0,192,240,0,192,240,0,192,0,0,192,0,0,192,0,0,192,0,0,192,
  // 0xcf1c  켜
  28,207,24,26,78,32,6,254,0,0,3,0,0,3,0,0,3,0,0,3,255,240,3,255,240,3,0,48,3,0,48,3,0,48,255,0,48,255,0,48,3,0,48,3,255,192,3,255,192,3,0,192,255,0,192,255,3,0,3,3,0,3,12,0,3,12,0,3,240,0,3,240,0,3,0,0,3,0,0,3,0,0,3,0,0,3,
  // 0xd0d1  탑
  209,208,28,28,112,32,2,254,0,0,3,0,0,0,3,0,0,0,3,0,0,0,3,0,255,240,3,0,255,240,3,0,192,0,3,0,192,0,3,0,255,240,3,240,255,240,3,240,192,0,3,0,192,0,3,0,255,240,3,0,255,240,3,0,0,0,3,0,0,0,3,0,0,0,0,0,0,0,0,0,0,48,3,0,0,48,3,0,0,48,3,0,0,48,3,0,0,63,255,0,0,63,255,0,0,48,3,0,0,48,3,0,0,63,255,0,0,63,255,0,
  // 0xd130  터
  48,209,26,26,104,32,4,254,0,0,0,192,0,0,0,192,0,0,0,192,0,0,0,192,255,252,0,192,255,252,0,192,192,0,0,192,192,0,0,192,192,0,0,192,192,0,0,192,255,252,63,192,255,252,63,192,192,0,0,192,192,0,0,192,192,0,0,192,192,0,0,192,255,252,0,192,255,252,0,192,0,0,0,192,0,0,0,192,0,0,0,192,0,0,0,192,0,0,0,192,0,0,0,192,0,0,0,192,0,0,0,192,
  // 0xd14c  테
  76,209,26,26,104,32,4,254,0,0,12,192,0,0,12,192,0,0,12,192,0,0,12,192,255,252,12,192,255,252,12,192,192,0,12,192,192,0,12,192,192,0,12,192,192,0,12,192,255,252,252,192,255,252,252,192,192,0,12,192,192,0,12,192,192,0,12,192,192,0,12,192,255,252,12,192,255,252,12,192,0,0,12,192,0,0,12,192,0,0,12,192,0,0,12,192,0,0,12,192,0,0,12,192,0,0,12,192,0,0,12,192,
  // 0xd1a0  토
  160,209,26,26,104,32,2,0,63,255,255,0,63,255,255,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,63,255,255,0,63,255,255,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,63,255,255,0,63,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,255,255,255,192,255,255,255,192,
  // 0xd2b8  트
  184,210,26,22,88,32,2,4,63,255,255,0,63,255,255,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,63,255,255,0,63,255,255,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,63,255,255,0,63,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,192,255,255,255,192,
  // 0xd39c  펜
  156,211,24,28,84,32,2,254,0,0,51,0,0,51,0,0,51,0,0,51,255,255,51,255,255,51,12,48,51,12,48,51,12,51,243,12,51,243,12,48,51,12,48,51,255,255,51,255,255,51,0,0,51,0,0,51,0,0,0,0,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,0,0,3,255,255,3,255,255,
  // 0xd504  프
  4,213,26,20,80,32,2,4,63,255,255,0,63,255,255,0,3,0,48,0,3,0,48,0,3,0,48,0,3,0,48,0,3,0,48,0,3,0,48,0,3,0,48,0,3,0,48,0,63,255,255,0,63,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,192,255,255,255,192,
  // 0xd558  하
  88,213,26,26,104,32,4,254,3,0,48,0,3,0,48,0,3,0,48,0,3,0,48,0,255,252,48,0,255,252,48,0,15,192,48,0,15,192,48,0,48,48,48,0,48,48,48,0,192,12,63,192,192,12,63,192,192,12,48,0,192,12,48,0,192,12,48,0,192,12,48,0,48,48,48,0,48,48,48,0,15,192,48,0,15,192,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,0,0,48,0,
  // 0xd569  합
  105,213,28,28,112,32,2,254,3,0,3,0,3,0,3,0,255,252,3,0,255,252,3,0,15,192,3,0,15,192,3,0,48,48,3,0,48,48,3,0,48,48,3,240,48,48,3,240,48,48,3,0,48,48,3,0,15,192,3,0,15,192,3,0,0,0,3,0,0,0,3,0,0,0,0,0,0,0,0,0,0,48,3,0,0,48,3,0,0,48,3,0,0,48,3,0,0,63,255,0,0,63,255,0,0,48,3,0,0,48,3,0,0,63,255,0,0,63,255,0,
  // 0xd648  홈
  72,214,26,30,120,32,2,254,0,12,0,0,0,12,0,0,3,255,240,0,3,255,240,0,0,255,192,0,0,255,192,0,3,0,48,0,3,0,48,0,3,0,48,0,3,0,48,0,0,255,192,0,0,255,192,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,0,255,255,255,192,255,255,255,192,0,0,0,0,0,0,0,0,15,255,252,0,15,255,252,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,15,255,252,0,15,255,252,0,
  // 0xd654  화
  84,214,28,28,112,32,2,254,0,0,12,0,0,0,12,0,0,192,12,0,0,192,12,0,0,192,12,0,0,192,12,0,63,255,12,0,63,255,12,0,0,0,12,0,0,0,12,0,15,252,12,0,15,252,12,0,48,3,15,240,48,3,15,240,48,3,12,0,48,3,12,0,15,252,12,0,15,252,12,0,0,192,12,0,0,192,12,0,0,192,12,0,0,192,12,0,255,255,204,0,255,255,204,0,0,0,12,0,0,0,12,0,0,0,12,0,0,0,12,0,
  // 0xd788  히
  136,215,22,26,78,32,4,254,3,0,12,3,0,12,3,0,12,3,0,12,255,252,12,255,252,12,15,192,12,15,192,12,48,48,12,48,48,12,192,12,12,192,12,12,192,12,12,192,12,12,192,12,12,192,12,12,48,48,12,48,48,12,15,192,12,15,192,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,0,0,12,
};

#endif // HAS_GRAPHICAL_TFT