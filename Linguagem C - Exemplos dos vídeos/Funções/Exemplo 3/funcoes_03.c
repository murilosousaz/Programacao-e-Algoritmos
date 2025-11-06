#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
    if (n < 0) {
        printf("Nao existe fatorial de numero negativo!\n");
        return -1; 
    }

    int f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i;
    }

    return f;
}

int main(){
    int a, res;
    printf("Insira o numero que vc quer descobrir o fatorial: \n");
    scanf("%d", &a);

    res = fatorial(a);

    if (res != -1) {
        printf("O fatorial de %d eh %d\n", a, res);
    }

    return 0;
}