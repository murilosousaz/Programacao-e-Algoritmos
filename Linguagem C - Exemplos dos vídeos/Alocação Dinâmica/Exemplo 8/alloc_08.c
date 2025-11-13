#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct cadastro{
    char nome[50];
    int idade;
};

int main(){
    struct cadastro *vcad = (struct cadastro *) malloc(10 * sizeof(struct cadastro));
    
    strcpy(vcad[0].nome, "Maria");
    vcad[0].idade = 30;
    strcpy(vcad[1].nome, "Ana");
    vcad[1].idade = 20;
    strcpy(vcad[2].nome, "Cecilia");
    vcad[2].idade = 10;

    free(vcad);

    return 0;
}