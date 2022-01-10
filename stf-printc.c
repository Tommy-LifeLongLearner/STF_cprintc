#include "stf-printc.h"

void printc(int color, char *output, ...) {    
  va_list args;
  va_start(args, output);

  #if defined _WIN32 || defined _WIN64
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    // save the config
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &consoleInfo);
 
    SetConsoleTextAttribute(hConsole, color);
    vprintf(output, args);
    // restore the config
    SetConsoleTextAttribute(hConsole, consoleInfo.wAttributes);
  #else
    switch(color) {
      case 0: printf("\033[30m"); break;
      case 1: printf("\033[1;33m"); break;
      case 2: printf("\033[1;31m"); break; 
      case 3: printf("\033[1;32m"); break; 
      case 4: printf("\033[1;34m"); break; 
      case 5: printf("\033[1;37m"); break;
      default: printf("%s", output); break;
    }
    vprintf(output, args);
  #endif
  va_end(args);
}