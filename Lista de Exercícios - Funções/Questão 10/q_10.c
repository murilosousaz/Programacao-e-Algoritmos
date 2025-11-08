/*Ele agora precisa de ajuda em recursividade, e um dos tópicos é a potenciação. Ele pediu 
que você crie uma função recursiva que, dada a base '𝑥' e o expoente '𝑦', calcule '𝑥' elevado a 
'𝑦'.*/
#include<stdio.h>
#include<stdlib.h>

int exponenciacao(int a, int b){
    if(b == 0){
        return 1;
    }else{
        return a * exponenciacao(a, b - 1);
    }
}

int main(){
    int base, expoente, res;
    printf("Insira a base: ");
    scanf("%d", &base);
    printf("Insira o expoente: ");
    scanf("%d", &expoente);
    res = exponenciacao(base, expoente);
    printf("%d", res);
    return 0;
}