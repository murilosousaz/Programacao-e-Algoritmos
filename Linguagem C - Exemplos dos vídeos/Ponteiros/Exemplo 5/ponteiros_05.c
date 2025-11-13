#include<stdio.h>
#include<stdlib.h>

int main(){
    //usando array
    int mat[2][2] = {{1,2},{3,4}};
    int *p = &mat[0][0];
    int i, j;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d", mat[i][j]);
        }
    }
    //usando ponteiro
    for(i = 0; i < 4; i++){
            printf("%d", *(p + 1));
    }
    return 0;
}