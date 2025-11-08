 /*Outro tópico é sobre os divisores de um número. Ele pediu que você criasse uma função que, 
dado um número '𝑥', informe quantos e quais são os divisores inteiros desse número.*/
#include<stdio.h>
#include<stdlib.h>

int divisores(int x){
    int i;
    int contador = 0;
    for(i = 0; i < x; i++){
        if(x % i == 0){
            contador++;
        }
    }
    return contador;
}

int main(){
    int a;
    int i;
    printf("Insira o valor de a: ");
    scanf("%d", &a);
    i = divisores(a);
    printf("%d", i);
    return 0;
}