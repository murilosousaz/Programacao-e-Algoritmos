/*Ricardo precisa de ajuda em outra funcionalidade: o cálculo da ”média perfeita” da 
turma. A média perfeita é a média aritmética simples das notas da turma, mas caso o 
resultado final seja maior que 8, ela será igual a 10. Para isso, considere as notas dos 
15 alunos da turma como um vetor de 15 valores reais e desenvolva um algoritmo que 
resolva esse problema.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float notas[15];
    float media = 0;
    float soma = 0;
    int i, contador = 0;
    for(i = 0; i <= 14; i++){
        printf("Insira a nota: ");
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    media = soma / 15;

    if(media > 8){
        media = 10;
    }

    printf("A media perfeita eh %f", media);
    
    return 0;
}