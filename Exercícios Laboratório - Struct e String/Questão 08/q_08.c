/*Crie uma struct chamada Aluno com o campo nome. Leia dois nomes e diga se
eles são iguais ou diferentes.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno{
    char nome[50];
};

int main(){
    struct Aluno nome1, nome2;
    printf("Insira o primeiro nome: ");
    gets(nome1.nome);
    printf("Insira o segundo nome: ");
    gets(nome2.nome);
    if(strcmp(nome1.nome, nome2.nome) == 0){
        printf("Os nomes sao iguais");
    }else {
        printf("Os nomes sao diferentes");
    }
}
