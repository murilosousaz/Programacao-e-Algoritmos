#include<stdio.h>
#include<stdlib.h>

int main(){
    int x = 10;
    int *p1 = &x;
    int **p2 = &p1;
    printf("Endereco em p2: %p\n", p2);
    printf("Endereco em *p2: %p\n", *p2);
    printf("Endereco em **p2: %p\n", **p2);
    return 0;
}