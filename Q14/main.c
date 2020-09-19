#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)  //criando a função compare que vai ser usada pelo qsort para comparar os elementos do vetor
{
  return ( *(int*)a - *(int*)b );  //comparação dos elementos do vetor, se retornar um valor negativo, os elementos são trocados, se retornar um valor positivo ou zero, não são trocados
}

int main()
{

    int i = 0, n = 0;
    float *vet;  //declarando o ponteiro para float que apontará ao endereço do primeiro byte do vetor

    printf("Digite a quantidade de valores do vetor\n");
    scanf("%d", &n);  //recebe a quantidade de elementos a serem ordenados

    vet = malloc(n*sizeof(float));  //aloca na memória espaço suficiente para todos os elementos do vetor

    for(i=0; i<n; i++){
        vet[i] = 0;  //enche o vetor de zeros para que ele não fique cheio de lixo
    }

    printf("Digite os valores do vetor\n");
    for(i=0; i<n; i++){
        scanf("%f", &vet[i]);  //recebe os valores do vetor a serem ordenados
    }

    qsort(vet, n, sizeof(float), compare);  //chama a função qsort que ordena os elementos do vetor

    for(i=0; i<n; i++){
        printf("%f ", vet[i]);  //imprime os elementos do vetor já ordenados
    }
    printf("\n");

    free(vet);  //libera da memória o espaço que estava sendo utilizado pelo vetor

    return 0;
}
