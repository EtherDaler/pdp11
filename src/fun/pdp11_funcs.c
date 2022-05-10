#include "pdp11_funcs.h"
#include "src/init/globals.h"


void b_write(Adress adr, byte b){
    mem[adr] = b;
}


byte b_read(Adress adr){
    byte b;
    if (adr % 2 == 0)
        b = mem[adr] & 0xFF; // b = (byte)mem[adr]
    else{
        word w = mem[adr - 1];
        b = 2 >> 8 & 0xFF;
    }
    return b;
}


void w_write(Adress adr, word w){
    mem[adr] = w;
}


word w_read(Adress adr){
    return mem[adr];
}

