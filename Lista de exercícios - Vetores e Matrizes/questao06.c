/*Em  uma  biblioteca,  uma  estudante  chamada  Laura  estava  pesquisando  livros  para 
seu  projeto  pessoal.  Ela  tinha  uma  lista  de  livros  em  uma  prateleira,  representados 
por um vetor de números inteiros que indicavam o id de cada livro. Então, ela pediu 
sua ajuda para fazer um algoritmo que receba o tamanho de um vetor, depois receba 
os ids dos livros, e no final receba o id de um livro a ser pesquisado. O algoritmo deve 
verificar se o livro está disponível e, se sim, apresentar o índice.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int id[10];
    int i, contador = 0;
    int idBusca;
    int encontrado = -1;

    for(i = 0; i < 10; i++){
        contador ++;
        printf("Insira o id do livro %d: ", contador);
        scanf("%d", &id[i]);
    }
    printf("\nDigite o ID do livro a ser pesquisado: ");
    scanf("%d", &idBusca);

    for (i = 0; i < 10; i++) {
        if (id[i] == idBusca) {
            encontrado = i; 
            break;           
        }
    }
    if (encontrado != -1) {
        printf("\nO livro com ID %d foi encontrado no indice %d.\n", idBusca, encontrado);
    } else {
        printf("\nLivro com ID %d nao encontrado.\n", idBusca);
    }

    return 0;
}