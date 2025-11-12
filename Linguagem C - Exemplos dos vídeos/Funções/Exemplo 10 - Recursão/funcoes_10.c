#include<stdio.h>
#include<stdlib.h>

int fibo(int n){
    if(n == 0 || n == 1){
        return n;
    }else{
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main(){
    int a, i, n;
    int res;
    printf("Insira um valor para iniciar a sequencia: ");
    scanf("%d", &a);
    for(i = 0; i < a; i++){
        res = fibo(a);
        printf("%d", res);
    }
    
    return 0;
}