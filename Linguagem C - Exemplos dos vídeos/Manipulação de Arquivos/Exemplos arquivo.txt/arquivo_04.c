#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *arq;
    char c;
    arq = fopen("arquivo.txt", "r");
    if(arq == NULL){
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);
    }
    while((c = fgets(arq)) != EOF){
        printf("%c", c);
    }
    fclose(arq);
}