#include <stdio.h>
#include <stdlib.h>
int main(){
    int dia, mes, ano;
    //Leitura de 3 valores inteiros
    printf("Digite o dia, o mes e ano:");
    scanf("%d %d %d", &dia, &mes, &ano);
    printf("Data digitada: %d/%d/%d", dia, mes, ano);
    return 0;
}