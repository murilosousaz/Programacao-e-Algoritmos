/*Roberto  é  o  dono  de  uma  empresa  com  10  filiais  e  precisa  de  ajuda  para  criar  um 
algoritmo. Ele possui uma tabela com 10 linhas e 2 colunas. Na primeira coluna, estão 
registrados os investimentos que ele fez em cada filial, enquanto na segunda coluna, 
está indicado o valor de retorno obtido por cada uma dessas filiais, veja o exemplo a 
seguir. 
 
Analisando a tabela vemos que a filial 
1 investiu 3000R$ e obteve 5000R$ de 
retorno, logo teve um lucro de 2000R$, 
já a filial 2 investiu 30000R$ mas 
obteve  de  retorno  apenas  10000R$, 
tendo um prejuízo de 2000R$
  
Você deve desenvolver um algoritmo 
que faça o seguinte: 
a. Imprima o índice da linha de todas as filiais que deram lucro; 
b. Calcule  a  média  dos  lucros,  desconsiderando  todas  as  filiais  que  deram 
prejuízo.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    float matriz[10][2];
    float lucro, soma, media;
    int i, filial = 0;
    for(i = 0; i < 10; i++){
        printf("Insira o investimento: ");
        scanf("%f", &matriz[i][0]);
        printf("Insira o retorno: ");
        scanf("%f", &matriz[i][1]);
    }
    for(i = 0; i < 10; i++){
        lucro = matriz[i][1] - matriz[i][0];
        if(lucro > 0){
            printf("\nFilial %d obteve lucro de R$%.2f", i, lucro);
            soma += lucro;
            filial++;
        }
    }
    if(filial > 0){
        media = soma / filial;
        printf("\nA media dos lucros foi R$%.2f", media);
    }
    return 0;
}