# STF C print colored output

## Introduction

This is a simple library for printing colored output to the console in **c**

## Usage

Include the `stf-printc.h` header file
```c
#include "stf-printc.h"
```
Print some colored text
```c
  printc(GREY, "Printing text in [GREY]\n");
  printc(YELLOW, "Printing text in [YELLOW]\n");
  printc(RED, "Printing text in [RED]\n");
  printc(GREEN, "Printing text in [GREEN]\n");
  printc(BLUE, "Printing text in [BLUE]\n");
  printc(WHITE, "Printing text in [WHITE]\n");
```
Output

![output](./output.png)

## Supported colors:

Grey, Yellow, Red, Green, Blue and White

## Extend the library with other colors

To add custom colors you should define them in the header using the correct values

## Documentation

For more infos read the [docs](https://github.com/Tommy-LifeLongLearner/STF_cprintc/wiki/Documentation)