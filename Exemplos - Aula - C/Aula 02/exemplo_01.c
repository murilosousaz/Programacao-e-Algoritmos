#include <stdio.h>
#include <stdlib.h>

struct aluno{
    int matricula;
    float notas[3];
};

int main(){
    struct aluno n;
    int i;
    printf("Insira a matricula: ");
    scanf("%d", &n.matricula);
    for(i = 0; i < 3; i++){
        printf("Insira a nota: ");
        scanf("%f", &n.notas);
    }
    return 0;
}