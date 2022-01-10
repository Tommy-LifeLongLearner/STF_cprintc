#include "stf-printc.h"

int main() {
  int i = 0;
  printc(GREY, "Printing text in [GREY] %d\n", i++);
  printc(YELLOW, "Printing text in [YELLOW] %d\n", i++);
  printc(RED, "Printing text in [RED] %d\n", i++);
  printc(GREEN, "Printing text in [GREEN] %d\n", i++);
  printc(BLUE, "Printing text in [BLUE] %d\n", i++);
  printc(WHITE, "Printing text in [WHITE] %d\n", i++);
  return 0;
}