/*Joaquim precisa de ajuda para estudar para a prova de M.D. Um dos tópicos que ele não 
compreende bem é o de arranjos. Ele solicitou que você criasse uma função que calcule o 
número de arranjos de '𝑛' elementos tomados ' 𝑝 ' a ' 𝑝 '*/
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
    int arranjo, n, p;
    printf("Insira o valor de n: ");
    scanf("%d", &n);
    printf("Insira o valor de p: ");
    scanf("%d", &p);
    arranjo = fatorial(n) / fatorial(n - p);
    printf("Arranjo: %d", arranjo);
    return 0;
}