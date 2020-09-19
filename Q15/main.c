#include <stdio.h>
#include <stdlib.h>

float compara(float a, float b);
void ordenar(int n, float (*comp) (float, float));

int main()
{

    int a=0;
    float (*p) (float, float) = compara;

    printf("Digite a quantidade de valores do vetor\n");
    scanf("%d", &a);

    ordenar(a, p);

    return 0;
}

float compara(float a, float b){
    if((a-b)>0){
        return 1;
    }
    else{
        return 0;
    }
}

void ordenar(int n, float (*comp) (float, float)){

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
            if(comp(vet[i], vet[j]) == 1){
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
