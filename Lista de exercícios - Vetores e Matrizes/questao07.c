/*Gabriel estava desenvolvendo um minigame, mas encontrou dificuldades para 
desenvolver o algoritmo. A ideia do minigame é a seguinte: existe uma matriz 3x3 em 
que  a  cada  elemento  é  atribuído  um  valor  inteiro.  Se  o  valor  for  par,  ele  deve  ser 
substituído  por  1;  se fosse  ímpar,  por  -1.  Após essa  substituição,  o  programa  deve 
exibir a nova matriz atualizada. Gabriel solicitou sua ajuda para realizar essa tarefa. */
#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[3][3];
    int i, j; 
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Insira os elementos da matriz: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(matriz[i][j] % 2 == 0){
                matriz[i][j] = 1;
            }else{
                matriz[i][j] = -1;
            }
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}