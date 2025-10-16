#include <stdio.h>
#include <stdlib.h>

int main(){
    float A[2][3], B[2][3], S[2][3];
    int i, j;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            S[i][j] = A[i][j] = B[i][j];
        }
    }
}