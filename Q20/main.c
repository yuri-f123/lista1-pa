#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <gc.h>

int main(){

    //Programa que soma dois vetores
    int t=0, *v1, *v2, *v3, *v4, *v5, *v6;
    clock_t start1=0, end1=0, start2=0, end2=0;

    printf("Digite o tamanho do vetor\n");
    scanf("%d", &t);

    start1 = clock();

    v1 = malloc(t*sizeof(int));
    v2 = malloc(t*sizeof(int));
    v3 = malloc(t*sizeof(int));

    for(int i=0; i<t; i++){
        v1[i] = i+1;
        v2[i] = i+2;
        v3[i] = v1[i] + v2[i];
    }

    for(int i=0; i<t; i++){
        printf("%d ", v3[i]);
    }
    printf("\n");

    free(v1);
    free(v2);
    free(v3);

    end1 = clock();

    printf("Tempo das funcoes do tradicionais: %f s\n", (double)(end1 - start1)/CLOCKS_PER_SEC);

    start2 = clock();

    v4 = GC_malloc(t*sizeof(int));
    v5 = GC_malloc(t*sizeof(int));
    v6 = GC_malloc(t*sizeof(int));

    for(int i=0; i<t; i++){
        v4[i] = i+1;
        v5[i] = i+2;
        v6[i] = v4[i] + v5[i];
    }

    for(int i=0; i<t; i++){
        printf("%d ", v6[i]);
    }
    printf("\n");

    end2 = clock();

    printf("Tempo das funcoes da biblioteca libgc: %f s\n", (double)(end2 - start2)/CLOCKS_PER_SEC);

    printf("Diferenca de tempo (funcao tradicional - funcao da libgc): %f s\n", ((double)(end1 - start1)/CLOCKS_PER_SEC) - ((double)(end2 - start2)/CLOCKS_PER_SEC));

    return 0;
}
