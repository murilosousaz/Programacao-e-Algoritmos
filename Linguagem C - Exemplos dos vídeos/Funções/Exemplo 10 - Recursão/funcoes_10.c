#include<stdio.h>
#include<stdlib.h>

int fibo(int n){
    if(n == 0 || n == 1){
        return n;
    }else{
        return fibo(n - 1) * fibo(n - 2);
    }
}

int main(){
    int a;
    int res;
    printf("Insira um valor para iniciar a sequencia: ");
    scanf("%d", &a);
    res = fibo(a);
    printf("Fibonacci: %d", res);
    
    return 0;
}