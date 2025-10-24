#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno{
    char nome[50];
};

int main(){
    struct Aluno n1, n2;
    printf("Insira o nome do primeiro aluno: ");
    gets(n1.nome);
    printf("Insira o nome do segundo aluno: ");
    gets(n2.nome);
    if(strcmp(n1.nome,n2.nome) == 0){
        printf("Os nomes sao iguais");
    }else{
        printf("Os nomes sao diferentes");
    }
    return 0;
}