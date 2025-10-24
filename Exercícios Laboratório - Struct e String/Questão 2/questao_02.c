/*Ricardo  ficou  contente  com  o  resultado,  mas  ele  percebeu  um  erro.  Em  um  dia 
cansativo, ele, com muito sono, colocou 1000 na nota de um aluno, mas a prova só 
vale 10 pontos. Faça um algoritmo que leia apenas notas entre 0 e 10, para finalmente 
calcular a média funcional.*/
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
            if(notas[i] < 1 || notas[i] > 10){
                printf("Valor invalido");
                break;
            }
        }
    }

    if (contador > 0) media_funcional = soma / contador;

    if (contador > 0)
        printf("A media funcional eh: %.2f\n", media_funcional);
    else
        printf("Nenhum aluno com nota > 4. Média funcional indefinida.\n");

    return 0;
}