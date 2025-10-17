/*Leia duas strings e indique
qual tem o maior tamanho*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str1[100], str2[100];
    if (fgets(str1, sizeof str1, stdin) == NULL) str1[0] = '\0';
    size_t len1 = strlen(str1);
    if (len1 > 0 && str1[len1 - 1] == '\n') {
        str1[--len1] = '\0';
    }
    printf("%zu \n", len1);
    if (fgets(str2, sizeof str2, stdin) == NULL) str2[0] = '\0';
    size_t len2 = strlen(str2);
    if (len2 > 0 && str2[len2 - 1] == '\n') {
        str2[--len2] = '\0';
    }
    printf("%zu \n", len2);

    if (len1 > len2) {
        printf("str1 é maior que str2");
    } else if (len1 < len2) {
        printf("str2 é maior que str1");
    } else {
        printf("str1 e str2 têm o mesmo tamanho");
    }

    return 0;
}