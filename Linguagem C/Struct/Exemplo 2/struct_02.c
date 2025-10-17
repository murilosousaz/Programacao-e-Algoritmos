#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro{
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};

int main(){
    struct cadastro cad[100];
    int i;
    for(i = 0; i < 100; i++){
        gets(cad[i].nome);
        scanf("%d", &cad[i].idade);
        gets(cad[i].rua);
        scanf("%d", &cad[i].numero);
    }
    system("pause");
    return 0;
}