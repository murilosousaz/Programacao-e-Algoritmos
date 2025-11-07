/*O IMPA (Instituto de Matemática Pura e Aplicada) solicitou que você desenvolva uma função 
para ser integrada a um programa existente. Esta nova função deve calcular a área de um 
triângulo com base e altura como argumentos. Além disso, crie um pequeno programa para 
testar a função que você criou.*/

float triangulo(float base, float altura){
    float area;
    area = base * altura / 2.0f;
    return area;
}

int main(){
    float b, h, res;

    printf("Insira o valor da base do triangulo: ");
    scanf("%f", &b);

    printf("Insira a altura da base do triangulo: ");
    scanf("%f", &h);

    res = triangulo(b, h);
    printf("O valor da area eh: %.2f", res);

    return 0;
}