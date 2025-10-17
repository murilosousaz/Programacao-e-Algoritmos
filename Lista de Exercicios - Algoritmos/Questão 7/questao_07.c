/*Ricardo ainda precisa de uma última ajuda. Dadas três notas diferentes, ele precisa 
de um programa que compare as notas e determine, e por fim, imprima: 
● A menor nota; 
● A maior nota; 
● A nota média. */
#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, n3;
    int maior, menor;
    printf("Insira a nota 1: ");
    scanf("%f", &n1);
    printf("Insira a nota 2: ");
    scanf("%f", &n2);
    printf("Insira a nota 3: ");
    scanf("%f", &n3);
    if(n1 > n2){
        maior = n1;
        printf("\nA maior nota eh: %.2f", n1);
        menor = n2;
        printf("\nA menor nota eh: %.2f", n2);
    }else if(n2 > n3){
        maior = n2;
        printf("\nA maior nota eh: %.2f", n2);
        menor = n3;
        printf("\nA menor nota eh: %.2f", n3);
    }else if(n3 > n1){
        maior = n3;
        printf("\nA maior nota eh: %.2f", n3);
        menor = n1;
        printf("\nA menor nota eh:%.2f", n1);
    }else{
        maior = n3;
        printf("\nA maior nota eh: %.2f", n1);
        menor = n1;
        printf("\nA menor nota eh:%.2f", n3);
    }
    return 0;
}