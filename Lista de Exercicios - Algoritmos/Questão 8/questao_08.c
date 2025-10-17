/*Em  uma  partida  de  RPG,  o  mestre  está  determinando  o  resultado  de  uma  batalha 
para  um  jogador  usando  um  dado.  Escreva  um  algoritmo  que  receba  um  número 
inteiro como entrada e, com base nesse número, determine se o jogador ganhou ou 
perdeu a batalha. Se o número for par, o jogador vence; se for ímpar, o jogador perde. 
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int dado;
    printf("Insira o numero que o dado caiu: ");
    scanf("%d", &dado);
    if(dado%2 == 0){
        printf("Voce venceu!");
    }else{
        printf("Voce perdeu!");
    }
    return 0;
}