#include <stdio.h>
#include <stdlib.h>

int main () {
    
    //declarando as variaveis
    float basemaior, basemenor, altura, area;

    //recebendo a base maior
    printf("Digite a base maior do Trapezio:\n");
    scanf("%f", &basemaior);

    //recebendo a base menor
    printf("Digite a base menor do Trapezio:\n");
    scanf("%f", &basemenor);

    //recebendo a altura
    printf("Digite a altura do Trapezio:\n");
    scanf("%f", &altura);

    //calculando a area
    area = ((basemaior + basemenor) * altura) /2;

    //exibindo os resultados
    printf("A area do Trapezio = %.2f", area);

    return 0;
}