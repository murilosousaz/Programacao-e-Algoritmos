/*Uma outra função no sistema que deve ser atualizada para utilizar ponteiros é 
aquela  que  transforma  letras  minúsculas  em  um  vetor  em  letras  maiúsculas.  Foi 
pedido  que  você  pesquise  e  estude  sobre  a  função  em  C  que  transforma  um 
caractere minúsculo em maiúsculo. */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void maiusculo(char *n){
    while(*n != '\0') {
        *n = toupper(*n);
        n++;
    }
}

int main(){
    char texto[100];
    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);
    maiusculo(texto);
    printf("Texto em maiuscula %s", texto);
    return 0;
}