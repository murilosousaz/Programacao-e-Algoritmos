#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Produto{
    char nome[50];
    float preco;
};
int main(){
    struct Produto p[3];
    int i, maior;
    for(i = 0; i < 3; i++){
        printf("Insira o nome do produto: ");
        scanf("%s", p[i].nome);
        printf("Insira o preco do produto: ");
        scanf("%f", &p[i].preco);
        if(p[i].preco > p[maior].preco){
        maior = i;
        }
    }
    printf("Produto %s eh o mais caro valendo R$ %.2f", p[maior].nome, p[maior].preco);
    return 0;
}