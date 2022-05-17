//
// Created by Daler Hojimatov on 17.05.2022.
//

#ifndef PDP11_LOAD_DUMP_H
#define PDP11_LOAD_DUMP_H

#include "src/init/pdp11.h"


void load_file();                 // чтение файла
void mem_dump(Adress adr, word n); // печать стандартного потока
void trace(int type, const char * str, ...);   // трассировка
void settings(char * opt);
void print_reg();
void trace_reg(int type_reg, const char * str, ...);

#endif //PDP11_LOAD_DUMP_H
