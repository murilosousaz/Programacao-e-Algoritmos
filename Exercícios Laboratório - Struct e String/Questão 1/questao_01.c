/*Ricardo viu um potencial em você depois de ver seus algoritmos da atividade passada, 
agora ele precisa calcular a "média funcional" da turma, que consiste na média das 
notas de todos os alunos que não foram reprovados, ou seja, aqueles que obtiveram 
nota  maior  que  4.  Para  isso,  considere  as  notas  dos  10  alunos  da  turma.  Faça  um 
algoritmo que o ajude nesse cálculo.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float notas[10];
    float soma, media_funcional;
    int i, contador = 0;

    for (i = 0; i < 10; i++) {
        printf("Insira a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        if (notas[i] > 4.0) {
            soma = soma + notas[i];
            contador++;
        }
    }

    if (contador > 0) media_funcional = soma / contador;

    if (contador > 0)
        printf("A media funcional eh: %.2f\n", media_funcional);
    else
        printf("Nenhum aluno com nota > 4. Média funcional indefinida.\n");

    return 0;
}