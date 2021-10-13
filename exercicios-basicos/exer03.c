#include <stdio.h>
#include <stdlib.h>

int main () {
    
    //declando as variaveis tipo float, ponto flutuante
    float num1, num2, resul;

    //recebendo o valor 1
    printf("Digite o primeiro valor:");
    scanf("%f", &num1);

    //recebendo o valor 2
    printf("Digite o segundo valor:");
    scanf("%f", &num2);

    //calculando a divisao dos dois numeros
    resul = num1 / num2;

    //exebindo o resultado da divisão
    printf("O resultado da divisao entre os dois numeros = %.2f", resul);

    return 0;
}