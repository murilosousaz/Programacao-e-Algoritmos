/*Carlos  está  desenvolvendo  um  aplicativo  para  sua  academia,  mas  está  enfrentando 
dificuldades ao aplicar o cálculo do peso ideal. Ele solicitou sua ajuda para criar uma função 
chamada "pesoIdeal" que receba a altura e o sexo (1 para masculino e 2 para feminino) como 
argumentos. A função deve calcular e retornar o peso ideal da pessoa. Além disso, crie um 
pequeno programa para testar a função. 
Fórmula do peso ideal: 
• Para homens: (72.7∗ℎ)−58 
• Para mulheres: (62.1∗ℎ)−44.7     
Observação: Altura = ℎ (na fórmula acima).*/

float pesoIdeal(float h, int sexo){
    float res;
    if(sexo = 1){
        res = (72.7 * h) - 58;
        return res;
    }else
        if(sexo = 2){
            res = (62.1 * h) - 44.7;
            return res;
    }
}

int main(){
    int sexo;
    float altura, res;
    printf("Insira o sexo(1 -  Masculino, 2 - Feminino)");
    scanf("%d", &sexo);
    printf("Insira a altura: ");
    scanf("%f", &altura);
    res = pesoIdeal(altura, sexo);
    printf("O peso ideal eh: %.2f", res);
    return 0;
}