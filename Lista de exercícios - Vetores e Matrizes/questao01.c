/*Ricardo viu um potencial em você depois de ver seus algoritmos da atividade passada, 
agora ele precisa calcular a "média funcional" da turma, que consiste na média das 
notas de todos os alunos que não foram reprovados, ou seja, aqueles que obtiveram 
nota  maior  que  4.  Para  isso,  considere  as  notas  dos  10  alunos  da  turma.  Faça  um 
algoritmo que o ajude nesse cálculo.*/
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
        if(notas[i] < 4){
            soma += notas[i];
            contador++;
        }
    }
    if(contador > 0){
        media =  soma / contador;
        printf("\nMédia funcional da turma: %.2f\n", media);
    } else {
        printf("\nNenhum aluno foi aprovado.\n");
    }
    
    return 0;
}