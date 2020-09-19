#include <stdio.h>
#include <stdlib.h>

void soma_vet(int *a, int *b, int *c, int tam);

int main()
{

    int *v1, *v2, *vr, t=0;

    printf("Digite o tamanho do vetor\n");
    scanf("%d", &t);

    v1 = malloc(t*sizeof(int));
    v2 = malloc(t*sizeof(int));
    vr = malloc(t*sizeof(int));

    printf("Digite os elementos do primeiro vetor\n");
    for(int i = 0; i<t; i++){
        scanf("%d", &v1[i]);
    }

    printf("Digite os elementos do segundo vetor\n");
    for(int i = 0; i<t; i++){
        scanf("%d", &v2[i]);
    }

    soma_vet(v1, v2, vr, t);

    for(int i = 0; i<t; i++){
        printf("%d ", vr[i]);
    }
    printf("\n");

    free(v1);
    free(v2);
    free(vr);

    return 0;
}

void soma_vet(int *a, int *b, int *c, int tam){
    for (int j=0; j<tam; j++){
        c[j] = a[j]+b[j];
    }
}
