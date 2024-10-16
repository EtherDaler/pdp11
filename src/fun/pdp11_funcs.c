#include <stdio.h>
#include "pdp11_funcs.h"
#include "src/init/globals.h"


void w_write(Adress adr, word w ) {
    if (adr < 15)
        reg[adr] = w;
    else
        mem[adr]= (byte)(w & 0xFF);
    mem[adr+1]= (byte)((w >> 8) & 0xFF);
}

word w_read(Adress adr) {
    word w= ((b_read(adr+1) << 8) | (b_read(adr) & 0xFF));
    return w;
}

void b_write(Adress adr, byte b) {
    if (adr < 8)
        reg[adr] = ((b >> 7) ? (b | 0xFF00) : b);
    else
        mem[adr] = b;
}
byte b_read(Adress adr) {
    return mem[adr];
}


