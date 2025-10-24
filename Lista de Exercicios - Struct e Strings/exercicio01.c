#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct jogador{
    char nome[50];
    int pontuacao;

};

int main(){

    struct jogador jogador1;
    struct jogador jogador2;
    int maior;
    printf("Insira o nome do jogador 1: ");
    gets(jogador1.nome);
    setbuf(stdin, NULL);
    printf("Insira o nome do jogador 2: ");
    gets(jogador2.nome);
    setbuf(stdin, NULL);
    printf("Insira os pontos do jogador 1: ");
    scanf("%d", &jogador1.pontuacao);
    printf("Insira os pontos do jogador 2: ");
    scanf("%d", &jogador2.pontuacao);

    if(jogador1.pontuacao > jogador2.pontuacao){
        printf("%s fez mais pontos que %s", jogador1.nome, jogador2.nome);
    }else{
        printf("%s fez mais pontos que %s", jogador2.nome, jogador1.nome);
    }

    return 0;
}