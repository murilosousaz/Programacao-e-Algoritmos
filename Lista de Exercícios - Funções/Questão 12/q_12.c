#include<stdio.h>
#include<stdlib.h>

int mdc(int x, int y){
    if(y == 0){
        return x;
    }else{
        return mdc(y, y % x);
    }
}

int main(){
    int a, b, res;
    printf("Insira o primeiro valor: ");
    scanf("%d", &a);
    printf("Insira o segundo valor: ");
    scanf("%d", &b);
    res = mdc(a,b);
    printf("%d", res);
    return 0;
}