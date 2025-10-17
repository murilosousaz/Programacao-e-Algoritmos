/*Laura está criando um programa para um projeto de pesquisa sobre o envelhecimento 
humano e precisa de ajuda. 
a. Desenvolva um algoritmo que calcule a idade de uma pessoa de acordo com 
sua data de nascimento.  
b. Na verdade, ela precisa de um algoritmo que converta a data de nascimento, 
fornecida em  anos,  meses e dias,  para  o formato  de dias. Não se preocupe 
com ano bissextos e considere que todos os meses têm 30 dias.*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int d, dd, m, mm, a, aa, aniversario, data_atual, idade, idade_dias;
    printf("Insira a sua data de nascimento: ");
    scanf("%d %d %d", &d, &m, &a);
    printf("Insira a data atual: ");
    scanf("%d %d %d", &dd, &mm, &aa);
    aniversario = (d + (m * 30) + (a * 360));
    data_atual = (dd + (mm * 30) + (aa * 360));
    idade_dias = aniversario + data_atual;
    idade = aa - a;
    printf("Sua idade em anos eh: %d\n", idade);
    printf("Sua idade em dias eh: %d\n", idade_dias);
    return 0;
}