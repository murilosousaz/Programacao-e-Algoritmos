/*Crie um algoritmo que, dado o peso e a altura de um paciente, calcule o IMC e forneça 
uma classificação de acordo com a tabela abaixo: 
 
IMC abaixo de 18.5: Abaixo do peso 
IMC entre 18.5 e 24.9: Peso normal 
IMC entre 25.0 e 29.9: Sobrepeso 
IMC acima de 30.0: Obesidade */
#include <stdio.h>
#include <stdlib.h>

int main(){
    float imc, peso, altura;
    printf("Insira seu peso: ");
    scanf("%f", &peso);
    printf("Insira sua altura: ");
    scanf("%f", &altura);
    imc = peso / altura * altura;
    if(imc < 18.5){
        printf("Voce esta abaixo do peso");
    }else if(imc <= 24.9){
        printf("Voce esta com o peso normal");
    }else if(imc <= 29.9){
        printf("Voce esta com Sobrepeso");
    }else{
        printf("Voce esta com obesidade");
    }

    return 0;
}