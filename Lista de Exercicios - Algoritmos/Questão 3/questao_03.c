/*Depois de um longo dia dando aulas, Ricardo precisa de sua ajuda para calcular as 
médias  finais  de  seus  alunos.  Sabendo  que  a  média  final  é  calculada  pela  fórmula 
abaixo, construa um algoritmo que, dadas as notas, calcule a nota final. NF (nota final), 
Av1 (avaliação 1), Tb1 (trabalho 1) e Tb2 (trabalho 2). */
#include <stdio.h>
#include <stdlib.h>

int main(){
    float av1, tb1, tb2, media;
    printf("Insira a sua nota da av1: ");
    scanf("%f", &av1);
    printf("Insira a sua nota do tb1: ");
    scanf("%f", &tb1);
    printf("Insira a sua nota do tb2: ");
    scanf("%f", tb2);
    media = av1 + (tb1 + tb2) / 2.0;
    printf("Sua media eh: %f", media);
    return 0;
}