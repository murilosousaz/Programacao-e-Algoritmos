#include <stdio.h>
#include <stdlib.h>
//copia de um vetor
int main(){
    int v[5] = {1, 2, 3, 4, 5};
    int v1[5];
    int i;
    for(i = 0; i < 5; i++){
        v1[i] = v[i];
    }
    return 0;
}