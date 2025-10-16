#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    printf("Digite o valor de a:");
    scanf("%d", &a);
    printf("Digite o valor de b:");
    scanf("%d", &b);
    //o com for abaixo eh um laco infinito
    for(c = a; ;c++){
        printf("%d \n", c);
    }
    return 0;
}