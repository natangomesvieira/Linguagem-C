#include <stdio.h>
#include <stdlib.h>

int main () {

    //declarando as variaveis
    float salario, aumento;
    //pedindo para o usuario digitar o salario
    printf("Digite o salario do funcionario:");
    scanf("%f", &salario);

    //verificando o valor do aumento
    if (salario < 300) {
        aumento = (salario * 35) / 100;
        salario += aumento;

        printf("O salario com ajuste sera de R$%.2f",salario);
    }
    else {
        aumento = (salario * 15) / 100;
        salario += aumento;

        printf("O salario com ajuste sera de R$%.2f",salario);   
    }

    return 0;
}