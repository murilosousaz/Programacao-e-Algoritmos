/*Um grupo de amigos está debatendo sobre a altura entre eles para formar um time de 
basquete e  assim  definir  a  posição  de  cada  jogador.  Para  resolver  essa discussão, 
eles pediram que você criasse um algoritmo que fizesse o seguinte: 
a. Leia a altura de 6 jogadores; 
b. Imprima a maior e a menor altura, juntamente com o índice; 
c. Em seguida, imprima as alturas dos jogadores em ordem decrescente, do mais 
alto para o mais baixo.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float altura[6];
    int i;

    for (i = 0; i < 6; i++) {
        printf("Insira a altura do jogador %d: ", i + 1);
        if (scanf("%f", &altura[i]) != 1) return 1;
    }

    float maior = altura[0], menor = altura[0];
    int id_maior = 0, id_menor = 0;
    for (i = 1; i < 6; i++) {
        if (altura[i] > maior) { maior = altura[i]; id_maior = i; }
        if (altura[i] < menor)  { menor  = altura[i]; id_menor  = i; }
    }

    printf("O maior eh: jogador %d com %.2f\n", id_maior + 1, maior);
    printf("O menor eh: jogador %d com %.2f\n", id_menor + 1, menor);

    /* Ordena em ordem decrescente (selection sort) */
    float ordenadas[6];
    for (i = 0; i < 6; i++) ordenadas[i] = altura[i];

    /* Ordena em ordem decrescente (método simples) */
    for (i = 0; i < 5; i++) {
        for (int j = i + 1; j < 6; j++) {
            if (ordenadas[i] < ordenadas[j]) {
                float aux = ordenadas[i];
                ordenadas[i] = ordenadas[j];
                ordenadas[j] = aux;
            }
        }
    }

    printf("Alturas em ordem decrescente:\n");
    for (i = 0; i < 6; i++) printf("%.2f\n", ordenadas[i]);

    return 0;
}