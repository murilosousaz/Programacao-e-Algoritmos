#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str1[15] = "bom \0";
    char str2[15] = "dia \0";
    char str3[15] = "amigos\0";
    strcat(str1, str2);
    strcat(str1, str3);
    printf("%s \n", str1);
    
    return 0;
}