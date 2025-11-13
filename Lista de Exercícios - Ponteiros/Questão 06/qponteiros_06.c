/*A fim de testes do sistema, foi pedido que você faça 2 vetores de pontos
flutuantes de tamanho 10, utilizando 2 abordagens: alocação estática e alocação
dinâmica. Após a criação, imprima o endereço de memória de cada elemento de
ambos os vetores. Não se esqueça de que a memória dinâmica deve ser liberada
após o uso.*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    //usando array
    int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = vet;
    int i;
    for(i = 0; i < 10; i++){
        printf("%d \n", p[i]);
    }
    //usando ponteiro
    for(i = 0; i < 10; i++){
        printf("%d \n", *(p + i));
    }
    free(p);
    return 0;
}