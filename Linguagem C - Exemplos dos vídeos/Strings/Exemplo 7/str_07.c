#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str1[15] = "bom";
    char str2[15] = "dia";

    if(strcmp(str1, str2) == 0){
        printf("Strings iguais");
    }else{
        printf("Strings diferentes");
    }

    return 0;
}