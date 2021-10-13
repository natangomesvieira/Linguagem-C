#include <stdio.h>
#include <stdlib.h>

int main () {
    
    //declarando as variaveis
    float ladoesq, ladodir, area;

    //rebendo os lados do quadrado
    printf("Digite o lado ESQUERDO do quadrado em metros:");
    scanf("%f", &ladoesq);

    printf("Digite o lado DIREITO do quadrado em metros:");
    scanf("%f", &ladodir);

    //calculando a area do quadrado
    area = ladoesq * ladodir;

    //exibindo o resultado
    printf("A area desse quadrado = %.2f metros", area);

    return 0;
}