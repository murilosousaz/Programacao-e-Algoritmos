/*Crie uma struct chamada Produto com os campos nome e preco. Leia 3
produtos e mostre o preço médio. Depois mostre o nome e preço de cada
produto.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto{
    char nome[50];
    float preco;
};

int main(){
    struct Produto precos[3];
    float media, soma;
    int i;

    for(i = 0; i < 3; i++) {
        printf("Insira o nome do produto %d: ", i + 1);
        fflush(stdin);
        fgets(precos[i].nome, 50, stdin);
        precos[i].nome[strcspn(precos[i].nome, "\n")] = '\0';

        printf("Insira o preco do produto %d: ", i + 1);
        scanf("%f", &precos[i].preco);
    }

    for(i = 0; i < 3; i++){
        soma += precos[i].preco;
        media = soma / 3;
    }

    printf("A media eh: %.2f", media);

    return 0;
}