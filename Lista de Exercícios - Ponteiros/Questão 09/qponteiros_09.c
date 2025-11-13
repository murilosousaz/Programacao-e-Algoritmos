/*Para atender à demanda de modificar uma função no sistema para que ela
receba os parâmetros por referência, foi solicitado que você refaça essa função que
inverte um número dado (231 vira 132) com essa nova exigência.*/
#include<stdio.h>
#include<stdlib.h>

void inverte(int *n){
    int num = *n;
    int invertido = 0;

    while(num > 0){
        invertido = invertido * 10 + (num % 10);
        num /= 10;
    }
    
    *n = invertido;
}

int main(){

    int a;
    printf("Digite um numero: ");
    scanf("%d", &a);

    inverte(&a);
    printf("Numero invertido: %d", a);

    return 0;
}