#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main(){
    char *hello;
    hello = (char*)malloc(15 * sizeof(char));
    hello = "Hello World";
    printf("%s", hello);
    return 0;
}