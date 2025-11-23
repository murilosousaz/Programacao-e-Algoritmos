/* Roberto possui dois arquivos de texto (.txt) nos quais estão armazenadas as quantidades 
de estoque de certos itens em duas filiais diferentes. Ele requisitou a criação de um 
programa que gere um terceiro arquivo, o qual deve armazenar a quantidade de estoque de 
cada item em sua empresa, sem considerar a filial. Consequentemente, esse terceiro arquivo 
deve ser preenchido com a soma dos valores presentes nos dois arquivos anteriores, tal 
como exemplificado a seguir:*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arq1;
    FILE *arq2;
    FILE *arq3;

    int num1, num2;

    arq1 = fopen("arquivo_01.txt", "r");
    arq2 = fopen("arquivo_02.txt", "r");
    arq3 = fopen("arquivo_03.txt", "w");

    if(arq1 == NULL || arq2 == NULL || arq3 == NULL){
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);
    }

    while(fscanf(arq1, "%d", &num1) == 1 && fscanf(arq2, "%d", &num2) == 1){
        fprintf(arq3, "%d\n", num1 + num2);
    }

    fclose(arq1);
    fclose(arq2);
    fclose(arq3);

    return 0;
}