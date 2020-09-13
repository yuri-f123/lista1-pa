#include <stdio.h>

void par(int a){
    if(a%2==0){
        printf("%d eh par\n", a);
    }
    else{
        printf("%d nao eh par\n", a);
    }
}

void primo(int b){
    int aux=0;
    for(int i=1; i<=b; i++){
        if(b%i==0){
            aux = aux + 1;
        }
    }
    if(aux==2){
        printf("%d eh primo\n", b);
    }
    else{
        printf("%d nao eh primo\n", b);
    }
}

int main()
{
    void (*p[]) (int) = {par, primo};
    int x, escolha;

    printf("Digite o numero\n");
    scanf("%d", &x);
    printf("0 - Verifica se o numero eh par, 1 - Verifica se o numero eh primo\n");
    scanf("%d", &escolha);
    (*p[escolha])(x);

    return 0;
}
