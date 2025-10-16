#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num == 10){
        printf("O numero eh igual a 10.\n");
    }
    else{
        printf("O numero eh diferente de 10.\n");
    }
    return 0;
}