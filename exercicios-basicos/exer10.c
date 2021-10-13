#include <stdio.h>
#include <stdlib.h>

int main () {
    
    //declarando as variaveis
    float diagmaior, diagmenor, area;

    //recebendo os dados desse losango
    printf("Digite a diagonal maior do Losango:");
    scanf("%f", &diagmaior);

    printf("Digite a diagonal menor do Losango:");
    scanf("%f", &diagmenor);

    //calculando a area
    area = (diagmaior * diagmenor) / 2;

    //exibindo a area do losango
    printf("A area do Losango = %.2f", area);

    return 0;
}