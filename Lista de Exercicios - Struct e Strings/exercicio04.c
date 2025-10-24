#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto{
    char nome[50];
    float preco;
};

int main(){
    struct Produto p[3];
    float soma = 0;

    for(int i = 0; i < 3, i++){
        printf("Produto %d nome: ", i + 1);
        scanf("%s", p[i].nome);
        printf("Preco %d:", i + 1);
        scanf("%f", &p[i].preco);
        soma += p[i].preco;
    }

    printf("Preco medio: %.2f\n", soma / 3);

    for(int i = 0; i < 3; i++){
        printf("%s R$%.2f\n", p[i].nome, p[i].preco);
    }

    return 0;
}