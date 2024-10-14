#ifndef PDP11_GLOBALS_H
#define PDP11_GLOBALS_H
#include "pdp11.h"

#define MEM_SIZE  64*1024

byte mem[MEM_SIZE];
word reg[8];

int type, type_reg;
int N, Z, C;
int bt, xo;
word wd;
#endif //PDP11_GLOBALS_H
