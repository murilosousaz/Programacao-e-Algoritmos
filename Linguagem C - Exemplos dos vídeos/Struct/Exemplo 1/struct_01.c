#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro{
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};

int main(){
    struct cadastro c;
    printf("Insira o seu nome: ");
    gets(c.nome);
    printf("Insira sua idade: ");
    scanf("%d", &c.idade);

    setbuf(stdin, NULL);
    
    printf("Insira a sua rua: ");
    gets(c.rua);
    printf("Insira seu numero: ");
    scanf("%d", &c.numero);
    return 0;
}