 /*Leia 3 palavras separadas (p.ex.: “gato”, “preto”, “rápido”) e junte todas em
uma única string com espaços entre elas.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome1[50];
    char nome2[50];
    char nome3[50];
    printf("Insira o primeiro nome: ");
    gets(nome1);
    printf("Insira o segundo nome: ");
    gets(nome2);
    printf("Insira o terceiro nome: ");
    gets(nome3);
    strcat(nome1, " ");
    strcat(nome1, nome2);
    strcat(nome1, " ");
    strcat(nome1, nome3);
    printf("%s", nome1);
    return 0;
}