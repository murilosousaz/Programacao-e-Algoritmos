#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    do{
        printf("Escolha uma opcao\n");
        printf("(1) Opcao 1\n");
        printf("(2) Opcao 1\n");
        printf("(3) Opcao 1\n");
        scanf("%d", &i);
    }while((i < 1) || (i > 3));
    printf("Voce escolheu a opcao %d ", i);
    return 0;
}