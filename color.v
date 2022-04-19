/*
 * Copyright (c) 2022 XXIV
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#flag -Ilib
#flag -Llib
#flag -lcolor
#flag -pthread
#include "lib/libcolor.h"

module color

fn C._BlackString(&char) &char
fn C._RedString(&char) &char
fn C._GreenString(&char) &char
fn C._YellowString(&char) &char
fn C._BlueString(&char) &char
fn C._MagentaString(&char) &char
fn C._CyanString(&char) &char
fn C._WhiteString(&char) &char
fn C._HiBlackString(&char) &char
fn C._HiRedString(&char) &char
fn C._HiGreenString(&char) &char
fn C._HiYellowString(&char) &char
fn C._HiBlueString(&char) &char
fn C._HiMagentaString(&char) &char
fn C._HiCyanString(&char) &char
fn C._HiWhiteString(&char) &char

pub fn black(s string) {
	ns := C._BlackString(&char(s.str))
	print(unsafe{ cstring_to_vstring(ns) })
}
pub fn red(s string) {
	ns := C._RedString(&char(s.str))
	print(unsafe{ cstring_to_vstring(ns) })
}
pub fn green(s string) {
	ns := C._GreenString(&char(s.str))
	print(unsafe{ cstring_to_vstring(ns) })
}
pub fn yellow(s string) {
	ns := C._YellowString(&char(s.str))
	print(unsafe{ cstring_to_vstring(ns) })
}
pub fn blue(s string) {
	ns := C._BlueString(&char(s.str))
	print(unsafe{ cstring_to_vstring(ns) })
}
pub fn magenta(s string) {
	ns := C._MagentaString(&char(s.str))
	print(unsafe{ cstring_to_vstring(ns) })
}
pub fn cyan(s string) {
	ns := C._CyanString(&char(s.str))
	print(unsafe{ cstring_to_vstring(ns) })
}
pub fn white(s string) {
	ns := C._WhiteString(&char(s.str))
	print(unsafe{ cstring_to_vstring(ns) })
}
pub fn blackstring(s string) string {
	ns := C._BlackString(&char(s.str))
	return unsafe{ cstring_to_vstring(ns) }
}
pub fn redstring(s string) string {
	ns := C._RedString(&char(s.str))
	return unsafe{ cstring_to_vstring(ns) }
}
pub fn greenstring(s string) string {
	ns := C._GreenString(&char(s.str))
	return unsafe{ cstring_to_vstring(ns) }
}
pub fn yellowstring(s string) string {
	ns := C._YellowString(&char(s.str))
	return unsafe{ cstring_to_vstring(ns) }
}
pub fn bluestring(s string) string {
	ns := C._BlueString(&char(s.str))
	return unsafe{ cstring_to_vstring(ns) }
}
pub fn magentastring(s string) string {
	ns := C._MagentaString(&char(s.str))
	return unsafe{ cstring_to_vstring(ns) }
}
pub fn cyanstring(s string) string {
	ns := C._CyanString(&char(s.str))
	return unsafe{ cstring_to_vstring(ns) }
}
pub fn whitestring(s string) string {
	ns := C._WhiteString(&char(s.str))
	return unsafe{ cstring_to_vstring(ns) }
}
pub fn hiblack(s string) {
	ns := C._HiBlackString(&char(s.str))
	print(unsafe{ cstring_to_vstring(ns) })
}
pub fn hired(s string) {
	ns := C._HiRedString(&char(s.str))
	print(unsafe{ cstring_to_vstring(ns) })
}
pub fn higreen(s string) {
	ns := C._HiGreenString(&char(s.str))
	print(unsafe{ cstring_to_vstring(ns) })
}
pub fn hiyellow(s string) {
	ns := C._HiYellowString(&char(s.str))
	print(unsafe{ cstring_to_vstring(ns) })
}
pub fn hiblue(s string) {
	ns := C._HiBlueString(&char(s.str))
	print(unsafe{ cstring_to_vstring(ns) })
}
pub fn himagenta(s string) {
	ns := C._HiMagentaString(&char(s.str))
	print(unsafe{ cstring_to_vstring(ns) })
}
pub fn hicyan(s string) {
	ns := C._HiCyanString(&char(s.str))
	print(unsafe{ cstring_to_vstring(ns) })
}
pub fn hiwhite(s string) {
	ns := C._HiWhiteString(&char(s.str))
	print(unsafe{ cstring_to_vstring(ns) })
}
pub fn hiblackstring(s string) string {
	ns := C._HiBlackString(&char(s.str))
	return unsafe{ cstring_to_vstring(ns) }
}
pub fn hiredstring(s string) string {
	ns := C._HiRedString(&char(s.str))
	return unsafe{ cstring_to_vstring(ns) }
}
pub fn higreenstring(s string) string {
	ns := C._HiGreenString(&char(s.str))
	return unsafe{ cstring_to_vstring(ns) }
}
pub fn hiyellowstring(s string) string {
	ns := C._HiYellowString(&char(s.str))
	return unsafe{ cstring_to_vstring(ns) }
}
pub fn hibluestring(s string) string {
	ns := C._HiBlueString(&char(s.str))
	return unsafe{ cstring_to_vstring(ns) }
}
pub fn himagentastring(s string) string {
	ns := C._HiMagentaString(&char(s.str))
	return unsafe{ cstring_to_vstring(ns) }
}
pub fn hicyanstring(s string) string {
	ns := C._HiCyanString(&char(s.str))
	return unsafe{ cstring_to_vstring(ns) }
}
pub fn hiwhitestring(s string) string {
	ns := C._HiWhiteString(&char(s.str))
	return unsafe{ cstring_to_vstring(ns) }
}