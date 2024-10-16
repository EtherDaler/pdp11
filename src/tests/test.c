#include <stdio.h>
#include "src/init/pdp11.h"
#include "src/init/globals.h"
#include "src/fun/pdp11_funcs.h"
#include "test.h"


void test_mem() {
    byte b0 = 0x0a;
    //пишем байт, читаем байт
    b_write(2, b0);
    byte bres = b_read(2);
    printf("%02hhx = %02hhx\n", b0, bres);

    //пишем слово читаем слово
    word w0 = 0xcb0a;
    w_write(2,w0);
    word wres = w_read(2);
    printf("%04hx = %04hx\n", w0, wres);

    //пишем 2 байта читаем слово
    Adress a = 4;
    byte b1 = 0x0b;
    byte b2 = 0x0a;
    b_write(a, b2);
    b_write(a + 1, b1);
    word wrest = w_read(a);
    printf("br/ww \t %04hx=%02hhx%02hhx\n", wrest, b1, b2);

    //пишем слово читаем 2 байт
    Adress z = 8;
    byte b3 = 0x0b;
    byte b4 = 0x0a;
    word w = 0x0b0a;
    w_write(z, w);
    word b3res = b_read(z);
    word b4res = b_read(z+1);
    printf("ww/br \t %04hx=%02hhx%02hhx\n", w, b4res, b3res);
}
