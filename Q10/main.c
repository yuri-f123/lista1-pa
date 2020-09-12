#include <stdio.h>

int main(){

    char x_char[4];
    int x_int[4];
    float x_float[4];
    double x_double[4];

    for(int i=0; i<4; i++){
        printf("&x_char[%d] = %d\n", i, x_char+i); //Na segunda variável usei %d ao invés de %x para poder ver o número do endereço mais facilmente.
    }
    for(int i=0; i<4; i++){
        printf("&x_int[%d] = %d\n", i, x_int+i);
    }
    for(int i=0; i<4; i++){
        printf("&x_float[%d] = %d\n", i, x_float+i);
    }
    for(int i=0; i<4; i++){
        printf("&x_double[%d] = %d\n", i, x_double+i);
    }

    return 0;
}
