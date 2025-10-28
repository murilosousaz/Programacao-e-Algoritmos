/*Peça para o usuário digitar uma senha e compare com a senha correta
"senha123". Se for igual, mostre "Acesso permitido". Caso contrário, mostre
"Acesso negado".*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char senhaCorreta[50] = "senha123";
    char senha[50];
    printf("Insira a senha: ");
    gets(senha);
    if(strcmp(senha, senhaCorreta) == 0){
        printf("Acesso permitido.");
    }else{
        printf("Acesso negado.");
    }
    return 0;
}