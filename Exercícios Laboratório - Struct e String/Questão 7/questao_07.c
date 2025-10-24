/*Gabriel estava desenvolvendo um minigame, mas encontrou dificuldades para 
desenvolver o algoritmo. A ideia do minigame é a seguinte: existe uma matriz 3x3 em 
que  a  cada  elemento  é  atribuído  um  valor  inteiro.  Se  o  valor  for  par,  ele  deve  ser 
substituído  por  1;  se fosse  ímpar,  por  -1.  Após essa  substituição,  o  programa  deve 
exibir a nova matriz atualizada. Gabriel solicitou sua ajuda para realizar essa tarefa.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int mat[3][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (scanf("%d", &mat[i][j]) != 1) return 0;
            if (mat[i][j] % 2 == 0)
                mat[i][j] = 1;
            else
                mat[i][j] = -1;
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d", mat[i][j]);
            if (j < 2) printf(" ");
        }
        printf("\n");
    }

    return 0;
}