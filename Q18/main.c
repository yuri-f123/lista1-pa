#include <stdio.h>
#include <stdlib.h>

void multiplica(int **m1, int **m2, int **mr, int m1l, int m1c, int m2c);

int main()
{

    int **a, **b, **c, al=0, ac=0, bl=0, bc=0, cl=0, cc=0;

    printf("Digite o numero de linhas da primeira matriz\n");
    scanf("%d", &al);
    printf("Digite o numero de colunas da primeira matriz\n");
    scanf("%d", &ac);
    printf("Digite o numero de colunas da segunda matriz\n");
    scanf("%d", &bc);
    bl = ac;
    cl = al;
    cc = bc;

    a = malloc(al*sizeof(int*));
    a[0] = malloc(al*ac*sizeof(int));
    for(int i = 1; i<al; i++){
        a[i] = a[i-1] + ac;
    }
    b = malloc(bl*sizeof(int*));
    b[0] = malloc(bl*bc*sizeof(int));
    for(int i = 1; i<bl; i++){
        b[i] = b[i-1] + bc;
    }
    c = malloc(cl*sizeof(int*));
    c[0] = malloc(cl*cc*sizeof(int));
    for(int i = 1; i<cl; i++){
        c[i] = c[i-1] + cc;
    }

    printf("Digite os elementos da primeira matriz\n");
    for(int i = 0; i<al; i++){
        for(int j = 0; j<ac; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Digite os elementos da segunda matriz\n");
    for(int i = 0; i<bl; i++){
        for(int j = 0; j<bc; j++){
            scanf("%d", &b[i][j]);
        }
    }

    multiplica(a, b, c, al, ac, bc);

    printf("Primeira matriz:\n");
    for(int i = 0; i<al; i++){
        for(int j = 0; j<ac; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Segunda matriz:\n");
    for(int i = 0; i<bl; i++){
        for(int j = 0; j<bc; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("Matriz resultante:\n");
    for(int i = 0; i<cl; i++){
        for(int j = 0; j<cc; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    free(a[0]);
    free(a);
    free(b[0]);
    free(b);
    free(c[0]);
    free(c);

    return 0;
}

void multiplica(int **m1, int **m2, int **mr, int m1l, int m1c, int m2c){

    int soma = 0;

    for(int i = 0; i<m1l; i++){
        for(int j = 0; j<m2c; j++){
            for(int k = 0; k<m1c; k++){
               soma = soma + (m1[i][k]*m2[k][j]);
            }
            mr[i][j] = soma;
            soma = 0;
        }
    }

}
