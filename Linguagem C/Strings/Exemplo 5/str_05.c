#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str1[100], str2[100];
    printf("Entre com uma string: ");
    gets(str1);
    strcpy(str2, str1);
    printf("%s", str2);

    return 0;
}