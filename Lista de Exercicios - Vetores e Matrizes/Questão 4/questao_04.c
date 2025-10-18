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
prejuízo. */
#include <stdio.h>
#include <stdlib.h>

int main() {
    float tabela[10][2]; /* [i][0] = investimento, [i][1] = retorno */

    /* Ler investimento e retorno de cada filial (10 linhas) */
    for (int i = 0; i < 10; ++i) {
        if (scanf("%f %f", &tabela[i][0], &tabela[i][1]) != 2) {
            return 1; /* entrada inválida */
        }
    }

    /* Imprimir índice (1-based) das filiais que deram lucro
       e calcular soma/quantidade dos lucros positivos */
    float soma_lucros = 0.0;
    int qtd_lucros = 0;
    for (int i = 0; i < 10; ++i) {
        float lucro = tabela[i][1] - tabela[i][0];
        if (lucro > 0.0) {
            printf("%d\n", i + 1);
            soma_lucros += lucro;
            qtd_lucros++;
        }
    }

    /* Calcular e imprimir a média dos lucros (desconsiderando prejuízos) */
    if (qtd_lucros > 0) {
        float media = soma_lucros / qtd_lucros;
        printf("Media dos lucros: %.2f\n", media);
    } else {
        printf("Nenhuma filial teve lucro.\n");
    }

    return 0;
}