/*Receba uma string e verifique
se ela contem a letra A*/

#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    if (!fgets(string, 100, stdin)) return 0;
    size_t len = strlen(string);
    if (len && string[len-1] == '\n') string[len-1] = '\0';

    if (strpbrk(string, "Aa"))
        printf("A encontrada na string.\n");
    else
        printf("A nao encontrada na string.\n");

    return 0;
}