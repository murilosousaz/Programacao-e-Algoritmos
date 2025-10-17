/*Henrique  conseguiu  um  novo  emprego  como  desenvolvedor,  que  paga  muito  bem, 
mas agora ele precisa pagar imposto de renda. Faça um algoritmo que leia o salário 
dele  e  mostre  o  salário  após  a  retirada  do  imposto  de  renda*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario_bruto, salario_liquido, taxa;
    printf("Insira o seu salario: ");
    scanf("%f", &salario_bruto);

    if (salario_bruto <= 2259.20) {
        taxa = 0.00;
    } else if (salario_bruto <= 2826.65) {
        taxa = 0.07;
    } else if (salario_bruto <= 3751.05) {
        taxa = 0.15;
    } else if (salario_bruto <= 4664.68) {
        taxa = 0.22;
    } else {
        taxa = 0.27;
    }

    salario_liquido = salario_bruto + (salario_bruto * taxa);

    printf("O seu salario bruto eh: %.2f\n", salario_bruto);
    printf("O seu salario liquido eh: %.2f\n", salario_liquido);
    
    return 0;
}