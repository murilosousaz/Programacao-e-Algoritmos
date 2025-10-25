/*Ricardo  ficou  contente  com  o  resultado,  mas  ele  percebeu  um  erro.  Em  um  dia 
cansativo, ele, com muito sono, colocou 1000 na nota de um aluno, mas a prova só 
vale 10 pontos. Faça um algoritmo que leia apenas notas entre 0 e 10, para finalmente 
calcular a média funcional.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float notas[10];
    float media = 0;
    float soma = 0;
    int i, contador = 0;
    for(i = 0; i <= 9; i++){
        printf("Insira a nota: ");
        scanf("%f", &notas[i]);
        media += notas[i] / 10;
        if(notas[i] > 10){
        printf("Insira notas entre 0 e 10");
        break;
        }
        if(notas[i] < 4){
            soma += notas[i];
            contador++;
        }
    }
    if(contador > 0){
        media =  soma / contador;
        printf("\nMédia funcional da turma: %.2f\n", media);
    }else {
        printf("\nNenhum aluno foi aprovado.\n");
    }
    
    return 0;
}