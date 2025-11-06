#include <stdio.h>
#include <stdlib.h>

int quadrado(int a){
    return a * a;
}

int main(){
    int n1, n2;
    printf("\n Entre com um numero: ");
    scanf("%d", &n1);

    n2 = quadrado(n1);

    printf("\n O seu quadrado vale: %d", n2);
    return 0;
}