#include <stdio.h>
#include <stdlib.h>

void ordenar(int n);

int main()
{

    int a=0;

    printf("Digite a quantidade de valores do vetor\n");
    scanf("%d", &a);

    ordenar(a);

    return 0;
}

void ordenar(int n){

    int i = 0;
    float *vet, aux;

    vet = malloc(n*sizeof(float));

    for(i=0; i<n; i++){
        vet[i] = 0;
    }

    printf("Digite os valores do vetor\n");
    for(i=0; i<n; i++){
        scanf("%f", &vet[i]);
    }

    for(i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(vet[i]>vet[j]){
                aux = vet[j];
                vet[j] = vet[i];
                vet[i] = aux;
            }
        }
    }

    for(i=0; i<n; i++){
        printf("%f ", vet[i]);
    }
    printf("\n");

    free(vet);
}
