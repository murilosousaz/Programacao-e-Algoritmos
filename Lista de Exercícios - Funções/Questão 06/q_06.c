/*Marcos possui várias listas onde guarda as notas das equipes de sua empresa e gostaria de 
identificar as melhores notas de cada equipe. Ele pediu que você criasse uma função que receba 
um vetor (lista) como argumento e o retorne ordenado de forma crescente.*/
#include<stdio.h>
#include<stdlib.h>

void listas(float vet[], int n) {
    int i, j;
    float temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (vet[j] > vet[j + 1]) {
                temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }
}

int main(){
    int i;
    int n;

    printf("Insira a quantidade de notas: ");
    scanf("%d", &n);

    float vet[n];

    for(i = 0; i < n; i++){
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &vet[i]);
    }

    listas(vet, n);

    for(i = 0; i < n; i++){
        printf("%.2f \n", vet[i]);
    }

    return 0;
}