#include<stdio.h>
#include<stdlib.h>

int main(){
    // alocacao com malloc
    int *p;
    p = (int *) malloc(50*sizeof(int));
    if(p == NULL){
        printf("ERRO! Memoria insuficiente");
    }
    //alocacao com calloc
    int *p1;
    p1 = (int *) calloc(50, sizeof(int));
    if(p == NULL){
        printf("ERRO! Memoria insuficiente");
    }

    return 0;
}