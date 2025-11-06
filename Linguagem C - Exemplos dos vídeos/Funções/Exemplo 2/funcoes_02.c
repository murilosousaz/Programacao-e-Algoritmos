#include <stdio.h>
#include <stdlib.h>

int maior(int x, int y){
    if(x > y){
        return x;
    }else{
        return y;
    }
}

int main(){
    int a, b, res;
    printf("Insira o valor de a: ");
    scanf("%d", &a);
    printf("Insira o valor de b: ");
    scanf("%d", &b);
    res = maior(a, b);
    printf("O maior eh: %d", res);
}