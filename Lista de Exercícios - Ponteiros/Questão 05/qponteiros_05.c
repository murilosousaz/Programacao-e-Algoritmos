/*O sistema está enfrentando problemas com a memória e precisa de um
programa para ajudar a resolver. Após a leitura de 2 variáveis do teclado, a variável
com o maior endereço de memória sempre está incorreta. Sendo assim, foi pedido
que você faça um programa que, ao comparar essas 2 variáveis após a leitura,
informe qual delas possui o maior endereço e qual é esse endereço.*/
int main(){
    int a, b;
    printf("Valor de a:", a);
    scanf("%d", &a);
    printf("Valor de b:", b);
    scanf("%d", &b);
    if(&a > &b){
        printf("a possui valor %d e o endereco %d", a, &a);
    }else{
        printf("a possui valor %d e o endereco %d", b, &b);
    }
    return 0;
}