#include <stdio.h>
#include <stdlib.h>

int main () {
    
    //declando as variaveis tipo inteiro
    int num1, num2, num3, resul;

    //recebendo o valor do primeiro numero
    printf("Digite o valor do primeiro numero inteiro:");
    scanf("%d", &num1);

    //recebendo o valor do segundo numero
    printf("Digite o valor do segundo numero inteiro:");
    scanf("%d", &num2);

    //recebendo o valor do terceiro numero
    printf("Digite o valor do terceiro numero inteiro:");
    scanf("%d", &num3);

    //calculando a multiplicação dos tres numeros
    resul = (num1 * num2) * num3;

    printf("O valor da multiplicacao dos tres numeros = %d", resul);

    return 0;
}