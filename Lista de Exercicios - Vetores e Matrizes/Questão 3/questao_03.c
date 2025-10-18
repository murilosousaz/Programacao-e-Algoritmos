/*Ricardo precisa de ajuda em outra funcionalidade: o cálculo da ”média perfeita” da 
turma. A média perfeita é a média aritmética simples das notas da turma, mas caso o 
resultado final seja maior que 8, ela será igual a 10. Para isso, considere as notas dos 
15 alunos da turma como um vetor de 15 valores reais e desenvolva um algoritmo que 
resolva esse problema.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float notas[10];
    float soma, media_absoluta;
    int i, contador = 0;

    for (i = 0; i < 10; i++) {
        printf("Insira a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
        contador++;
    }

    if (contador > 0) media_absoluta = soma / contador;

    if (media_absoluta >= 8.0) media_absoluta = 10.0;

    printf("A media absoluta eh: %.2f\n", media_absoluta);

    return 0;
}