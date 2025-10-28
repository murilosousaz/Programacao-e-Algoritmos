/*Crie uma struct chamada Produto com os campos nome e preco. Leia e
armazene 3 produtos e mostre o nome do produto mais caro.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto{
    char nome[50];
    float preco;
};

int main(){
    struct Produto nomes[3];
    int i, maiscaro = 0;

    for(i = 0; i < 3; i++) {
        printf("Insira o nome do produto %d: ", i + 1);
        fflush(stdin);
        fgets(nomes[i].nome, 50, stdin);
        nomes[i].nome[strcspn(nomes[i].nome, "\n")] = '\0';

        printf("Insira o preco do produto %d: ", i + 1);
        scanf("%f", &nomes[i].preco);
    }

    for(i = 0; i < 3; i++){
        if(nomes[i].preco > nomes[maiscaro].preco){
           maiscaro = i;
        }
    }
    printf("\nO produto mais caro eh: %s (R$ %.2f)\n",
        nomes[maiscaro].nome,
        nomes[maiscaro].preco);
    
    return 0;
}