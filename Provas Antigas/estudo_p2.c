#include <stdio.h>
#include <stdlib.h>

int main() {
    float mat[4][7];
    int i, j;
    float aux;

    for(i = 0; i < 4; i++) {
        scanf("%f", &mat[i][0]);
    }
    
    for(j = 0; j < 7; j++){
        scanf("%f", &mat[0][j]);
    }

    printf("\nMatriz:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 7; j++) {
            printf("%.2f ", mat[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 7; j++) {
            for(int k = 0; k < 4; k++) {
                for(int l = 0; l < 7; l++) {
                    if(mat[i][j] > mat[k][l]) {
                        aux = mat[i][j];
                        mat[i][j] = mat[k][l];
                        mat[k][l] = aux;
                    }
                }
            }
        }
    }

    printf("\nMatriz decrescente: \n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 7; j++) {
            printf("%.2f ", mat[i][j]);
        }
        printf("\n");
    }
       
    return 0;
}