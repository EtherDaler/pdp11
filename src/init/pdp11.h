#ifndef PDP11_PDP11_H
#define PDP11_PDP11_H


typedef unsigned char byte;         // 8 bit
typedef unsigned short int word;    // 16 bit
typedef word Adress;                // 16 bit

#define pc reg[7]

#define n_pr 0
#define y_xo 1                  //xo= XX Offset (8 bits, -128 to +127)
#define y_ss (1<<1)
#define y_dd (1<<2)
#define y_sup (1<<3)           // sup=NN Number (6 bits)


#define odata 0177566			// регистр данных дисплея
#define ostat 0177564			// регистр данных ввода

struct Command {
    word mask;
    word opcode;
    char * name;
    void (*do_func)();
    byte pr;
};

struct SSDD {
    word val;		//значение аргумента
    word adr;       //адрес аргумента
};


#endif //PDP11_PDP11_H
