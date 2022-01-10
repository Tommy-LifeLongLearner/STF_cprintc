#ifndef STF_PRINTC_H
#define STF_PRINTC_H

#if defined _WIN32 || defined _WIN64
  #include <windows.h>
  #define GREY FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN
  #define YELLOW FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY
  #define RED FOREGROUND_RED| FOREGROUND_INTENSITY
  #define GREEN FOREGROUND_GREEN | FOREGROUND_INTENSITY
  #define BLUE FOREGROUND_BLUE | FOREGROUND_INTENSITY
  #define WHITE FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY
#else
  #define GREY 0
  #define YELLOW 1
  #define RED 2
  #define GREEN 3
  #define BLUE 4
  #define WHITE 5
#endif

#include <stdio.h>
#include <stdarg.h>

void printc(int color, char *output, ...);

#endif //STF_PRINTC_H