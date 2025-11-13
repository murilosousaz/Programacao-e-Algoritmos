/* Para lidar com o bug estranho no sistema, onde apenas os números pares de um
vetor lido pelo teclado estão incorretos, o contratante pediu que você faça um
pequeno programa que tenha um vetor de 5 inteiros com números lidos pelo
usuário. Após a leitura, imprima apenas os endereços de memória dos números
pares.*/
int main(){
    int vet[10];
    int i, *p;
    p = 1;
    for(i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
    }
    for(i = 0; i < 10; i++){
        if(vet[i]%2 == 0){
            printf("%d \n", &i);
        }
    }
    return 0;
}