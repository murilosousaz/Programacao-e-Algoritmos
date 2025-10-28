/*Leia três nomes e imprima aquele que vem primeiro em ordem alfabética.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome[3][20], aux[20];

    for(int i = 0; i < 3; i++) {
        printf("Nome %d: ", i + 1);
        gets(nome[i]);
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(strcmp(nome[j - 1], nome[j]) > 0 ){
                strcpy(aux, nome[j - 1]);
                strcpy(nome[j - 1], nome[j]);
                strcpy(nome[j], aux);
            }
        }
    }

    for(int i = 0; i < 3; i++){
        printf("\n %s", nome[i]);
    }

    return 0;
}