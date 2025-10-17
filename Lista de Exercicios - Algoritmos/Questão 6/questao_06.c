/*Maria quer revisar um pouco de matemática básica e praticar programação, então ela 
decidiu fazer os dois ao mesmo tempo. Ela precisa de um algoritmo que, lendo os 3 
coeficientes 𝑎, 𝑏 e 𝑐, determine, com base no delta (𝑏²−4𝑎𝑐), o seguinte: 
● Caso o delta seja maior que 0: Informe que existem duas raízes −𝑏±√𝑑𝑒𝑙𝑡𝑎
2𝑎  reais 
e diferentes e apresente apenas as raízes reais positivas da equação; 
● Caso  o  delta  seja  igual  a  0:  Informe  que  existe  uma  raiz  real  repetida  e 
apresente qual é essa raiz; 
● Caso  o  delta  seja  menor  que  0:  Informe  que  não  existem  raízes  reais  para 
aquela equação.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int delta, a, b, c, raiz_x1, raiz_x2;
    printf("Insira o valor de a: ");
    scanf("%d", &a);
    printf("Insira o valor de b: ");
    scanf("%d", &b);
    printf("Insira o valor de c: ");
    scanf("%d", &c);
    delta = (b * b) - (4 * a * c);
    raiz_x1 = (-b) + sqrt(delta) / 2 * a;
    raiz_x2 = (-b) - sqrt(delta) / 2 * a;
    if(delta > 0){
        printf("O delta possui 2 raizes \n");
        printf("Primeira raiz %d\n", raiz_x1);
        printf("Segunda raiz %d\n", raiz_x2);
    }else if(delta = 0){
        printf("O delta possui 1 raiz\n");
        printf("Primeira raiz %d\n", raiz_x1);
    }else{
        printf("O delta nao possui raiz");
    }
    return 0;
}