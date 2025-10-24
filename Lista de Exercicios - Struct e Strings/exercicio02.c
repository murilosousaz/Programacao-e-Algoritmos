#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char senha[50];
    char senha_nova[50];
    printf("Insira a senha original: ");
    gets(senha);
    printf("Insira a nova senha: ");
    gets(senha_nova);
    if(strcmp(senha, senha_nova) == 0){
        printf("Senhas iguais");
    }else{
        printf("Senhas diferentes");
    }

    return 0;
}