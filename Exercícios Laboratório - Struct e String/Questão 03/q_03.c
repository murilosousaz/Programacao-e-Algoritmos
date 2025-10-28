/*Crie uma struct chamada Pessoa que contenha o nome (string) e a idade
(inteiro). O programa deve ler esses dados do teclado e exibir o nome e a idade
da pessoa.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Pessoa{
    char nome[50];
    int idade;
};
int main(){
    struct Pessoa pessoa;
    printf("Insira o nome da pessoa: ");
    gets(pessoa.nome);

    printf("Insira a idade da pessoa: ");
    scanf("%d", &pessoa.idade);

    printf("%s, %d anos", pessoa.nome, pessoa.idade);
    
    return 0;
}