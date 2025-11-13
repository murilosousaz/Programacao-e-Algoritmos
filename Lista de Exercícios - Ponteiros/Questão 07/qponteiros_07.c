/*Desejando verificar se o resultado será diferente para uma matriz em vez de um
vetor, realize o mesmo procedimento feito no problema anterior, mas desta vez
utilizando uma matriz 3x3 de pontos flutuantes com as 2 abordagens diferentes.*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    //usando array
    float mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    float *p = &mat[0][0];
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d \n", mat[i][j]);
        }
    }
    //usando ponteiro
    for(i = 0; i < 9; i++){
            printf("%d \n", *(p + 1));
    }
    return 0;
}