#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arq;
    char nome[20] = "Ricardo";
    int i = 30;
    float a = 1.74;
    arq = fopen("ArqGrav.txt", "w");
    if(arq == NULL){
        printf("Problema na abertura do arquivo");
        system("pause");
        exit(1);
    }
    fprintf(arq, "Nome: %s\n ", nome);
    fprintf(arq, "Idade: %s\n ", i);
    fprintf(arq, "Altura: %s\n ", a);
    fclose(arq);
        
    return 0;
}