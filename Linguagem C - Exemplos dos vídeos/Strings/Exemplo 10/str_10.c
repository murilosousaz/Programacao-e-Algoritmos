#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str1[15] = "bom";
    char str2[15] = "dia";
    char str3[15] = "amigos";
    strcat(str1, str2);
    strcat(str1, str3);
    printf("%s \n", str1);
    
    return 0;
}