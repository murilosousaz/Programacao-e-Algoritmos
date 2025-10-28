/*Crie uma struct chamada Jogador com os campos nome e pontos. Leia os dados
de dois jogadores e mostre quem fez mais pontos.*/
#include <stdio.h>
#include <stdlib.h>

struct Jogador{
    char nome[50];
    int pontos;
};

int main(){
    struct Jogador j1, j2;
    printf("\nInsira o nome do Jogador 1: ");
    scanf("%s", j1.nome);
    printf("\nInsira os pontos do Jogador 1: ");
    scanf("%d", &j1.pontos);
    printf("\nInsira o nome do Jogador 2: ");
    scanf("%s", j2.nome);
    printf("\nInsira os pontos do Jogador 2: ");
    scanf("%d", &j2.nome);
    if(j1.pontos > j2.pontos){
        printf("\n %s fez mais pontos que %s", j1.nome, j2.nome);
    }else{
        printf("\n %s fez mais pontos que %s", j2.nome, j1.nome);
    }
    return 0;
}