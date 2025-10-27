/*O IBGE (Instituto Brasileiro de Geografia e Estatística) precisa de um novo algoritmo. 
Eles  têm  dados  sobre  a  idade  das  6  cidades  mais  velhas  de  6  estados  diferentes, 
organizados  em  uma  matriz  6x6.  Agora,  eles  solicitam  que  você  desenvolva  um 
algoritmo que realize as seguintes tarefas: 
a. Leia a matriz de idade das cidades; 
b. Organize as idades das linhas de forma crescente; 
c. Solicite  ao  usuário  que  informe  o  índice  de  uma  linha  da  matriz  e  calcule  a 
média de idade das 6 cidades daquele estado. */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[6][6];
    int i, j, k, aux, linhaEscolhida;
    float soma = 0, media;

    printf("Digite as idades das 6 cidades mais velhas de 6 estados diferentes:\n");
    for(i = 0; i < 6; i++) {
        printf("\nEstado %d:\n", i);
        for(j = 0; j < 6; j++) {
            printf("Idade da cidade %d: ", j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 5; j++) { 
            for(k = j + 1; k < 6; k++) {
                if(matriz[i][j] > matriz[i][k]) {
                    aux = matriz[i][j];
                    matriz[i][j] = matriz[i][k];
                    matriz[i][k] = aux;
                }
            }
        }
    }
    printf("\nMatriz ordenada por linha (idades em ordem crescente):\n");
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Digite o indice do estado (0 a 5) para calcular a média: ");
    scanf("%d", &linhaEscolhida);

    while(linhaEscolhida < 0 || linhaEscolhida > 5) {
        printf("indice inválido! Digite um valor entre 0 e 5: ");
        scanf("%d", &linhaEscolhida);
    }

    soma = 0;
    for(j = 0; j < 6; j++) {
        soma += matriz[linhaEscolhida][j];
    }
    media = soma / 6.0;

    printf("\nA media das idades das cidades do estado %d eh: %.2f\n", linhaEscolhida, media);

    return 0;
}
