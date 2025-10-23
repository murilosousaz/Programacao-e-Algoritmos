#include <stdio.h>
#include <stdlib.h>

int main(){
    float mat[4][7];
    int i, j, k, aux;
    for(i = 0; i < 4; i++){
        printf("Semana: ");
        scanf("%f", &mat[i][0]);
    }
    for(j = 0; j < 7; j++){
            printf("Consumo: ");
            scanf("%f", &mat[0][j]);
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 7; j++){
        printf("%.2f \n", mat[i][j]);
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 7 - 1; j++){
            if(mat[i][j] > mat[i++][j++]){
                aux = mat[i][j];
                mat[i][j] = mat[i++][j++];
                mat[i++][j++] = aux;
                printf("%.2f \n", mat[i][j]);
            }
        }
    }
    return 0;
}