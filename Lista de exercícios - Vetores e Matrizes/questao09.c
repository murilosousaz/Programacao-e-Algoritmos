#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[5][5];
    int i, j, num = 1;
    int somaLinha;
    int diagonal[5];

    printf("Matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            matriz[i][j] = num;  
            num++;
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma dos elementos de cada linha:\n");
    for (i = 0; i < 5; i++) {
        somaLinha = 0;
        for (j = 0; j < 5; j++) {
            somaLinha += matriz[i][j];
        }
        printf("Linha %d = %d\n", i + 1, somaLinha);
    }

    printf("\nElementos da diagonal principal:\n");
    for (i = 0; i < 5; i++) {
        diagonal[i] = matriz[i][i];
        printf("%d ", diagonal[i]);
    }
    printf("\n");

    return 0;
}
