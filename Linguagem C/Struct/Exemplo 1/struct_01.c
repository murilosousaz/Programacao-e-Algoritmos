#include <stdio.h>
#include <stdlib.h>

int main(){
    struct cadastro{
        char nome[50];
        int idade;
        char rua[50];
        int numero;
    };
    struct cadastro c1, c2, c3, c4, c5;
    printf("Insira o nome do paciente:");
    gets(c1.nome);
    printf("Insira a idade do paciente: ");
    scanf("%d", &c1.idade);
    printf("Insira a rua do paciente:");
    gets(c1.rua);
    printf("Insira o numero do paciente:");
    scanf("%d", &c1.idade);

    return 0;
}