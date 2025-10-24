#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Pessoa{
    char nome[50];
    int idade;
};
int main(){
    struct Pessoa p;
    printf("Insira seu nome: ");
    gets(p.nome);
    printf("Insira sua idade: ");
    scanf("%d", &p.idade);
    printf("Seu nome eh %s e vc tem %d anos", p.nome, p.idade);
    return 0;
}
