/*Maria tem como tarefa semanal verificar se um número '𝑥' é primo. Para evitar ter que pedir 
ajuda toda vez, ela pediu que você crie uma função que, ao receber um número '𝑥', retorne se 
'𝑥' é primo ou não. Em seguida, crie um pequeno programa que utilize essa função para testar e 
imprimir se cada número de 1 a 1000 é primo ou não.*/
#include <stdio.h>
#include <stdlib.h>

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
    for (x = 1; x <= 1000; x++) {
        if (primo(x)) {
            printf("%d eh primo\n", x);
        } else {
            printf("%d nao eh primo\n", x);
        }
    }
    return 0;
}