/*O  sistema  roda  em  uma  máquina  antiga  e  com  diversos  outros  programas 
rodando ao mesmo tempo. Sendo assim, toda eficiência é importante. No entanto, 
uma  função  não  está  sendo  a  mais  eficiente  possível.  Foi  pedido  que  você  refaça 
essa função utilizando alocação dinâmica. Essa função deve ler um número N, criar 
dinamicamente um vetor com esse tamanho N, preenchê-lo com dados do usuário 
e, em seguida, ordená-lo e imprimi-lo*/
#include<stdio.h>
#include<stdlib.h>


int main(){
    int i, j, n, temp;
    int *p;
    printf("Insira o valor de n: ");
    scanf("%d", &n);
    p = (int *) malloc(sizeof(int));

    if(p = NULL){
        printf("Erro! Memoria insuficiente");
    }

    for(i = 0; i < n; i++){
        scanf("%d", &p[i]);
    }

    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(p[i] > p[j]){
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    for(i = 0; i < n; i++){
        printf("%d \n", p[i]);
    }


    free(p);

    return 0;
}