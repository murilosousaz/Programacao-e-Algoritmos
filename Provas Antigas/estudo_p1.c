#include <stdio.h>
#include <stdlib.h>
/*150500.50,
70300.75
77200.00
220299.99
79999.99*/
int main(){
    float valores[5];
    int i, aux;
    for(i = 0; i < 5; i++){
        printf("Insira os valores: ");
        scanf("%f", &valores[i]);
    }
    
    for(i = 0; i < 4; i++){
     if(valores[i] < valores[i + 1]){
        aux = valores[i];
        valores [i] = valores[i + 1];
        valores[i + 1] =  aux;
        }
    }
    for(i = 0; i < 5; i++){
        printf("%.2f ", valores[i]);
    }
    return 0;
}