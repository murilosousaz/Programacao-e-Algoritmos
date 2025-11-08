/*Utilizando a mesma função já criada, Maria também solicitou que você determine a soma 
apenas dos números primos no intervalo de 1 a 1000.*/
#include<stdio.h>
#include<stdlib.h>

int primo(int x) {
    if (x < 2) {
        return 0;
    }

    for (int i = 2; i <= x / 2; i++) {
        if (x % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main(){
    int x;
    int soma;
    for (x = 1; x <= 1000; x++) {
        if (primo(x)) {
            printf("%d eh primo\n", x);
            soma += x;
        } else {
            printf("%d nao eh primo\n", x);
        }
    }

    printf(" Soma dos primos: %d", soma);
    return 0;
}