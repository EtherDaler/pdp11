#ifndef PDP11_PDP11_FUNCS_H
#define PDP11_PDP11_FUNCS_H
#include "src/init/pdp11.h"


void b_write(Adress adr, byte b);
// Write a byte to the memory adress

byte b_read(Adress adr);
// Read a byte from the memory adress

void w_write(Adress adr, word w);
// Write a word to the momory adress

word w_read(Adress adr);
// Read a word from memory adress

#endif //PDP11_PDP11_FUNCS_H
