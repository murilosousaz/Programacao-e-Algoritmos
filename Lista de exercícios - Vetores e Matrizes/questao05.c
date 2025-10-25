/*Um grupo de amigos está debatendo sobre a altura entre eles para formar um time de 
basquete e  assim  definir  a  posição  de  cada  jogador.  Para  resolver  essa discussão, 
eles pediram que você criasse um algoritmo que fizesse o seguinte: 
a. Leia a altura de 6 jogadores; 
b. Imprima a maior e a menor altura, juntamente com o índice; 
c. Em seguida, imprima as alturas dos jogadores em ordem decrescente, do mais 
alto para o mais baixo.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    float altura[6];
    int i, contador = 0, maior = 0, menor = 0;
    for(i = 0; i < 6; i++){
        printf("Insira a altura do jogador: ");
        scanf("%f", &altura[i]);
        contador++;
    }
    if((altura[i] > altura[i + 1])){
        maior = altura[i];
        menor = altura[i + 1];
        printf("\nO jogador %d eh o maior com %f metros", contador, maior);
        printf("\nO jogador %d eh o menor com %f metros", contador, menor);
    }else{
        maior = altura[i + 1];
        menor = altura[1];
        printf("\nO jogador %d eh o maior com %f metros", contador, maior);
        printf("\nO jogador %d eh o menor com %f metros", contador, menor);
    }
    return 0;
}