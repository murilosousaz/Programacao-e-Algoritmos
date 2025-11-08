/*Agora, ele precisa de uma função que calcule o número de combinações.*/
#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * fatorial(n - 1);
    }
}

int main(){
    int combinacao, n, p;
    printf("Insira o valor de n: ");
    scanf("%d", &n);
    printf("Insira o valor de p: ");
    scanf("%d", &p);
    combinacao = fatorial(n) / fatorial(p) * fatorial(n - p);
    printf("Combinacao: %d", combinacao);
    return 0;
}