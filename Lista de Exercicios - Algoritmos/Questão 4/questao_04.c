/*Um aluno de Ciências da Computação da UECE está com dificuldade na cadeira de 
Geometria Analítica e cansado de calcular o produto interno de dois vetores. Faça um 
algoritmo que receba as coordenadas de dois vetores e calcule o produto interno, de 
acordo com as anotações do aluno:*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a1, a2, a3, b1, b2, b3, produto_vetorial;
    printf("Insira o valor de a1: ");
    scanf("%d", &a1);
    printf("Insira o valor de a2: ");
    scanf("%d", &a2);
    printf("Insira o valor de a3: ");
    scanf("%d", &a3);
    printf("Insira o valor de b1: ");
    scanf("%d", &b1);
    printf("Insira o valor de b2: ");
    scanf("%d", &b2);
    printf("Insira o valor de b3: ");
    scanf("%d", &b3);
    produto_vetorial = (a1 *b1) + (a2 * b2) + (a3 * b3);
    printf("O produto vetorial eh: %d", produto_vetorial); 
    return 0;
}