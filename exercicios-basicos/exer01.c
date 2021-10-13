#include <stdio.h>
#include <stdlib.h>

int main () {
    
    //declando as variaveis tipo inteiro
    int num1, num2, resultado;

    //recebendo o primeiro valor
    printf("Digite o primeiro valor inteiro:");
    scanf("%d", &num1);

    //recebendo o segundo valor
    printf("Digite o segundo valor inteiro:");
    scanf("%d", &num2);

    //calculando a subtração
    resultado = num1 - num2;

    //mostrando o resultado
    printf("O resultado da subtracao dos dois numeros = %d", resultado);

    return 0;
}