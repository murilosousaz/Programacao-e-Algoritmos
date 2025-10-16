#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[5] = {3, 18, 2, 51, 45};
    int i;
    int maior = A[0];
    for(i = 0; i < 5; i++){
        if(maior < A[i]){
            maior = A[i];
        }
    }
    printf("Maior = %d\n", maior);
    return 0;
}