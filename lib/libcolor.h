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
#ifndef __COLOR_CGO_H__
#define __COLOR_CGO_H__
/* Code generated by cmd/cgo; DO NOT EDIT. */

/* package command-line-arguments */


#line 1 "cgo-builtin-export-prolog"

#include <stddef.h> /* for ptrdiff_t below */

#ifndef GO_CGO_EXPORT_PROLOGUE_H
#define GO_CGO_EXPORT_PROLOGUE_H

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef struct { const char *p; ptrdiff_t n; } _GoString_;
#endif

#endif

/* Start of preamble from import "C" comments.  */


#line 24 "color.go"

 #include <stdlib.h>
 #include <stdarg.h>
 
#line 1 "cgo-generated-wrapper"


/* End of preamble from import "C" comments.  */


/* Start of boilerplate cgo prologue.  */
#line 1 "cgo-gcc-export-header-prolog"

#ifndef GO_CGO_PROLOGUE_H
#define GO_CGO_PROLOGUE_H

typedef signed char GoInt8;
typedef unsigned char GoUint8;
typedef short GoInt16;
typedef unsigned short GoUint16;
typedef int GoInt32;
typedef unsigned int GoUint32;
typedef long long GoInt64;
typedef unsigned long long GoUint64;
typedef GoInt64 GoInt;
typedef GoUint64 GoUint;
typedef __SIZE_TYPE__ GoUintptr;
typedef float GoFloat32;
typedef double GoFloat64;
typedef float _Complex GoComplex64;
typedef double _Complex GoComplex128;

/*
  static assertion to make sure the file is being used on architecture
  at least with matching size of GoInt.
*/
typedef char _check_for_64_bit_pointer_matching_GoInt[sizeof(void*)==64/8 ? 1:-1];

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef _GoString_ GoString;
#endif
typedef void *GoMap;
typedef void *GoChan;
typedef struct { void *t; void *v; } GoInterface;
typedef struct { void *data; GoInt len; GoInt cap; } GoSlice;

#endif

/* End of boilerplate cgo prologue.  */

#ifdef __cplusplus
extern "C" {
#endif

extern __declspec(dllexport) void _Black(char* format);
extern __declspec(dllexport) void _Red(char* format);
extern __declspec(dllexport) void _Green(char* format);
extern __declspec(dllexport) void _Yellow(char* format);
extern __declspec(dllexport) void _Blue(char* format);
extern __declspec(dllexport) void _Magenta(char* format);
extern __declspec(dllexport) void _Cyan(char* format);
extern __declspec(dllexport) void _White(char* format);
extern __declspec(dllexport) char* _BlackString(char* format);
extern __declspec(dllexport) char* _RedString(char* format);
extern __declspec(dllexport) char* _GreenString(char* format);
extern __declspec(dllexport) char* _YellowString(char* format);
extern __declspec(dllexport) char* _BlueString(char* format);
extern __declspec(dllexport) char* _MagentaString(char* format);
extern __declspec(dllexport) char* _CyanString(char* format);
extern __declspec(dllexport) char* _WhiteString(char* format);
extern __declspec(dllexport) void _HiBlack(char* format);
extern __declspec(dllexport) void _HiRed(char* format);
extern __declspec(dllexport) void _HiGreen(char* format);
extern __declspec(dllexport) void _HiYellow(char* format);
extern __declspec(dllexport) void _HiBlue(char* format);
extern __declspec(dllexport) void _HiMagenta(char* format);
extern __declspec(dllexport) void _HiCyan(char* format);
extern __declspec(dllexport) void _HiWhite(char* format);
extern __declspec(dllexport) char* _HiBlackString(char* format);
extern __declspec(dllexport) char* _HiRedString(char* format);
extern __declspec(dllexport) char* _HiGreenString(char* format);
extern __declspec(dllexport) char* _HiYellowString(char* format);
extern __declspec(dllexport) char* _HiBlueString(char* format);
extern __declspec(dllexport) char* _HiMagentaString(char* format);
extern __declspec(dllexport) char* _HiCyanString(char* format);
extern __declspec(dllexport) char* _HiWhiteString(char* format);

extern __declspec(dllexport) int Black(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return -1;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  _Black(str);
  return 0;
}

extern __declspec(dllexport) int Red(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return -1;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  _Red(str);
  return 0;
}

extern __declspec(dllexport) int Green(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return -1;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  _Green(str);
  return 0;
}

extern __declspec(dllexport) int Yellow(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return -1;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  _Yellow(str);
  return 0;
}

extern __declspec(dllexport) int Blue(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return -1;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  _Blue(str);
  return 0;
}

extern __declspec(dllexport) int Magenta(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return -1;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  _Magenta(str);
  return 0;
}

extern __declspec(dllexport) int Cyan(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return -1;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  _Cyan(str);
  return 0;
}

extern __declspec(dllexport) int White(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return -1;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  _White(str);
  return 0;
}

extern __declspec(dllexport) char* BlackString(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return NULL;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  return _BlackString(str);
}

extern __declspec(dllexport) char* RedString(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return NULL;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  return _RedString(str);
}

extern __declspec(dllexport) char* GreenString(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return NULL;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  return _GreenString(str);
}

extern __declspec(dllexport) char* YellowString(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return NULL;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  return _YellowString(str);
}

extern __declspec(dllexport) char* BlueString(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return NULL;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  return _BlueString(str);
}

extern __declspec(dllexport) char* MagentaString(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return NULL;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  return _MagentaString(str);
}

extern __declspec(dllexport) char* CyanString(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return NULL;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  return _CyanString(str);
}

extern __declspec(dllexport) char* WhiteString(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return NULL;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  return _WhiteString(str);
}

extern __declspec(dllexport) int HiBlack(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return -1;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  _HiBlack(str);
  return 0;
}

extern __declspec(dllexport) int HiRed(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return -1;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  _HiRed(str);
  return 0;
}

extern __declspec(dllexport) int HiGreen(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return -1;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  _HiGreen(str);
  return 0;
}

extern __declspec(dllexport) int HiYellow(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return -1;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  _HiYellow(str);
  return 0;
}

extern __declspec(dllexport) int HiBlue(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return -1;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  _HiBlue(str);
  return 0;
}

extern __declspec(dllexport) int HiMagenta(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return -1;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  _HiMagenta(str);
  return 0;
}

extern __declspec(dllexport) int HiCyan(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return -1;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  _HiCyan(str);
  return 0;
}

extern __declspec(dllexport) int HiWhite(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return -1;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  _HiWhite(str);
  return 0;
}

extern __declspec(dllexport) char* HiBlackString(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return NULL;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  return _HiBlackString(str);
}

extern __declspec(dllexport) char* HiRedString(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return NULL;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  return _HiRedString(str);
}

extern __declspec(dllexport) char* HiGreenString(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return NULL;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  return _HiGreenString(str);
}

extern __declspec(dllexport) char* HiYellowString(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return NULL;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  return _HiYellowString(str);
}

extern __declspec(dllexport) char* HiBlueString(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return NULL;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  return _HiBlueString(str);
}

extern __declspec(dllexport) char* HiMagentaString(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return NULL;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  return _HiMagentaString(str);
}

extern __declspec(dllexport) char* HiCyanString(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return NULL;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  return _HiCyanString(str);
}

extern __declspec(dllexport) char* HiWhiteString(char *format, ...)
{
  va_list arg;
  int len;
  va_start (arg, format);
  
  len = vsnprintf(0, 0, format, arg);
  char* str = (char*) malloc((len + 1) * sizeof(char));
  if (str == NULL)
  {
    return NULL;
  }
  va_start (arg, format);
  vsnprintf(str, (len + 1), format, arg);
  va_end (arg);
  return _HiWhiteString(str);
}

#ifdef __cplusplus
}
#endif

#endif // __COLOR_CGO_H__