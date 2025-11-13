/*Nesse sistema, há uma função que está apresentando problemas e os
contratantes pediram que você a refaça. Essa função deve receber por parâmetro
dois inteiros A e B e realizar a soma de ambos, armazenando o resultado na
variável A. No entanto, devido às limitações do sistema, essa função não pode ter
nenhum retorno, sendo necessário o uso de lógica de ponteiros. Além disso, na
função ‘main’, deve-se ler A e B do teclado e imprimir o valor atualizado de A e B
após o uso da função criada, a fim de testá-la.*/
#include<stdio.h>
#include<stdlib.h>
void soma(int *a, int *b){
    *a =  *a + *b;
}

int main(){
    int a, b;
    printf("\nInsira o valor de a: ");
    scanf("%d", &a);
    printf("\nInsira o valor de b: ");
    scanf("%d", &b);
    soma(&a, &b);
    printf("\nValor atualiza de a: %d", a);
    printf("\nValor atualiza de b: %d", b);
    return 0;
}