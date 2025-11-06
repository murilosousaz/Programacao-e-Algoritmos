#include<stdio.h>
#include<stdlib.h>

int fatorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * fatorial(n - 1);
    }
}

int main(){
    int a, res;
    printf("Insira o numero que voce deseja descobrir o fatorial: ");
    scanf("%d", &a);
    res = fatorial(a);
    printf("O fatorial eh: %d", res);

    return 0;
}