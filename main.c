#include <stdio.h>
#include <stdlib.h>


void troca(int *a, int *b){
    int aux;
    printf("x = %d, y = %d\n", *a, *b);
    aux = *a; *a = *b; *b = aux;
    printf("x = %d, y = %d\n", *a, *b);

}



int main()
{
    int x = 3; int y = 4;
    printf("x = %d, y = %d\n", x, y);
    troca(&x, &y);
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
