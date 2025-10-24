#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome[3][50];
    char aux[50];
    int i ,j, k;
    for(i = 0; i <= 2; i++){
        printf("Insira o nome:");
        gets(nome[i]);
    }
    for(i = 0; i <= 2; i++){
        for(j = i+1; j <= 2; j++){
            k = strcmp(nome[i], nome[j]);
            if(k > 0){
                strcpy(aux, nome[i]);
                strcpy(nome[i], nome[j]);
                strcpy(nome[j], aux);
            }
        }
    }
    for(i = 0; i <= 2; i++){
        puts(nome[i]);
    }

    return 0;
}