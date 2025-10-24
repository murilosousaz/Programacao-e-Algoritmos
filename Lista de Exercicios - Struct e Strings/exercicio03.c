#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome1[50];
    char nome2[50];
    char nome3[50];
    gets(nome1);
    gets(nome2);
    gets(nome3);
    strcat(nome1, " ");
    strcat(nome1, nome2);
    strcat(nome1, " ");
    strcat(nome1, nome3);
    printf("%s", nome1);

    return 0;
}