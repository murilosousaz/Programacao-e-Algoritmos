/* Imagine  que  você  está  organizando  um  encontro  com  amigos  em  uma  cafeteria 
movimentada.  Você  deseja  chegar  um  pouco  mais  cedo  para  garantir  uma  mesa  e 
talvez  fazer  um  pedido  antecipado.  Para  ajudá-lo  a  planejar,  você  decide  criar  um 
programa simples que solicita o horário em que você e seus amigos desejam chegar 
à cafeteria e retorna o horário correspondente a uma hora antes. */
#include <stdio.h>
#include <stdlib.h>

int main(){
    int hora, minutos, hora_chegada;
    printf("Insira a hora em que seus amigos desejam chegar: ");
    scanf("%d %d", &hora, &minutos);
    hora_chegada = hora - 1;
    printf("A hora que voce deve chegar eh: %d %d", hora_chegada, minutos);
}