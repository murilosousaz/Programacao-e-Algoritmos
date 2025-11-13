/* Vitória estava jogando um jogo em seu celular e gostaria de saber a pontuação total de todas 
as partidas já jogadas. Ela pediu que você criasse uma função que, ao receber dois números (𝑛1 
e 𝑛2), calcule a soma de todos os números no intervalo entre 𝑛1 e 𝑛2 (ambos inclusos) e retorne 
essa soma. Em seguida, crie um pequeno programa utilizando essa função para testá-la.*/
#include<stdio.h>
#include<stdlib.h>

int funcao(int n1,int n2){
    int i, soma = 0;
    int temp;
    if(n1 > n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    for(i = n1; i <= n2; i++){
        soma += i;
    }
    return soma;
}

int main(){
    int a, b, res;
    printf("Insira o valor de a: \n");
    scanf("%d", &a);
    printf("Insira o valor de b: \n");
    scanf("%d", &b);
    res = funcao(a, b);
    printf("A soma do intervalo entre %d e %d eh: %d", a, b, res);
    return 0;
}