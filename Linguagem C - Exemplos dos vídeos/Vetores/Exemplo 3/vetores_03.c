#include <stdio.h>
#include <stdlib.h>

int main(){
    float notas[100];
    int i;
    for(i = 0; i < 100; i++){
        printf("Nota do estudante %d: ", i);
        scanf("%f", &notas[i]);
    }
    float media = 0;
    for(i = 0; i < 100; i++){
        media = media + notas[i];
    }
    media = media / 100;
    for(i = 0; i < 100; i++){
        if(notas[i] > media){
            printf("Notas: %.2f\n", notas[i]);
        }
    }
}