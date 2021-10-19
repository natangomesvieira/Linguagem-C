#include <stdio.h>
#include <stdlib.h>

int main () {
    //declarando as variaveis
    float numero1, numero2, numero3;
    //recebendo os tres numeros 
    printf("Digite o primeiro numero:");
    scanf("%f", &numero1);
    printf("Digite o segundo numero:");
    scanf("%f", &numero2);
    printf("Digite o terceiro numero:");
    scanf("%f", &numero3);

    //conferindo qual é o menor numero
    if (numero1 > numero2 && numero1 > numero3){
        printf("O primeiro numero digitado (%.2f) eh o maior.", numero1);
    }
    else if(numero2 > numero1 && numero2 > numero3){
        printf("O segundo numero digitado (%.2f) eh o maior.", numero2);
    }
    else {
        printf("O terceiro numero digitado (%.2f) eh o maior.", numero3);
    }
    return 0;
}