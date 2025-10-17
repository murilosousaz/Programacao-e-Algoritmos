/*Elize é dona de um restaurante e está enfrentando um problema com o termostato de 
seu freezer, que possui apenas uma configuração em graus Celsius. No entanto, todo 
o seu estoque de mantimentos está etiquetado com uma temperatura recomendada 
em Fahrenheit, e fazer a conversão a cada vez que ela vai armazenar um novo item, 
é bastante trabalhoso. Portanto, ela precisa de um algoritmo que, dada uma 
temperatura em Fahrenheit, diga seu equivalente em Celsius. Para checar os valores, 
ela também precisa que o mesmo algoritmo, dada uma temperatura em Celsius, diga 
seu equivalente em Fahrenheit. Observe que a conversão de graus Fahrenheit para 
Celsius é obtida por 𝐶 =(5
9)(𝐹−32). Deduza a fórmula de conversão de graus Celsius 
para Fahrenheit. */
#include <stdio.h>
#include <stdlib.h>

int main(){
    float c, f, conversao_c, conversao_f;
    printf("\nInsira o valor em Fahrenheit: ");
    scanf("%f", &f);
    conversao_c = (5.0/9.0) * (f - 32.0);
    printf("\nO valor em Celsius eh: %.2f", conversao_c);
    printf("\nInsira o valor em Celsius: ");
    scanf("%f", &c);
    conversao_f = (9.0/5.0) / (c + 32.0);
    printf("\nO valor em Fahrenheit eh: %.2f", conversao_f);

    return 0;
}