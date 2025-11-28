/*Juliana possui várias turmas, e ela armazena as informações dos alunos em diversos 
arquivos .txt, seguindo o formato "NOME: JOÃO NOTA: 8", com um aluno por linha. Ela 
solicitou a criação de um programa que lendo um arquivo .txt qualquer no formato dela 
exiba na tela o nome e a nota do aluno que obteve a maior pontuação.*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *arq;
    arq = fopen("notas.txt", "r");
    if(arq == NULL){
        printf("Não foi possivel ler o arquivo");
        system("pause");
        return 1;
    }

    
    fclose(arq);

    return 0;
}
