/*Leia duas strings e indique
qual tem o maior tamanho*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char str1[100], str2[100];
    if (fgets(str1, 100, stdin) == 0) str1[0] = '\0';
    int len1 = (int) strlen(str1);
    if (len1 > 0 && str1[len1 - 1] == '\n') {
        str1[--len1] = '\0';
    }
    printf("%d \n", len1);
    if (fgets(str2, 100, stdin) == 0) str2[0] = '\0';
    int len2 = (int) strlen(str2);
    if (len2 > 0 && str2[len2 - 1] == '\n') {
        str2[--len2] = '\0';
    }
    printf("%d \n", len2);

    if (len1 > len2) {
        printf("str1 eh maior que str2");
    } else if (len1 < len2) {
        printf("str2 eh maior que str1");
    } else {
        printf("str1 e str2 tem o mesmo tamanho");
    }

    return 0;
}
