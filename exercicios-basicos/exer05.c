#include <stdio.h>
#include <stdlib.h>

int main () {
    
    //declarando as variaveis
    float valor, desconto, novovalor;

    //recebendo o valor do produto
    printf("Digite o valor do produto em R$:");
    scanf("%f", &valor);

    //desconto de 10%
    desconto = valor * 10 / 100;
    novovalor = valor - desconto;

    //exibindo o valor com desconto de 10%
    printf("O valor do produto com 10 porcento de desconto = R$ %.2f", novovalor);

    return 0;
}