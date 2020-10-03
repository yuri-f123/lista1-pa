#include <stdio.h>
#include <gc.h>

int main()
{
    //Programa que soma dois vetores
    int t=0, *v1, *v2, *v3;

    printf("Digite o tamanho do vetor\n");
    scanf("%d", &t);

    v1 = GC_malloc(t*sizeof(int));
    v2 = GC_malloc(t*sizeof(int));
    v3 = GC_malloc(t*sizeof(int));

    for(int i=0; i<t; i++){
        v1[i] = i+1;
        v2[i] = i+2;
        v3[i] = v1[i] + v2[i];
    }

    for(int i=0; i<t; i++){
        printf("%d ", v3[i]);
    }
    printf("\n");

    return 0;
}
