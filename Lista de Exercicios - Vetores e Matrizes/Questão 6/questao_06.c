/*Em  uma  biblioteca,  uma  estudante  chamada  Laura  estava  pesquisando  livros  para 
seu  projeto  pessoal.  Ela  tinha  uma  lista  de  livros  em  uma  prateleira,  representados 
por um vetor de números inteiros que indicavam o id de cada livro. Então, ela pediu 
sua ajuda para fazer um algoritmo que receba o tamanho de um vetor, depois receba 
os ids dos livros, e no final receba o id de um livro a ser pesquisado. O algoritmo deve 
verificar se o livro está disponível e, se sim, apresentar o índice.*/
#include <stdio.h>
#include <stdio.h>

int main(){
    int lista[10];
    int i, id_livros = 0;

    for(i = 0; i < 10; i++){
        id_livros = lista[id_livros + 1];
    }
    printf("O id do livro eh: %d", lista[id_livros]);

    return 0;
}