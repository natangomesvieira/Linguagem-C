#include <stdio.h>
#include <stdlib.h>

int main () {
    
    //declarando as variaveis
    float nota1, nota2, media;

    //recebendo a primeira nota
    printf("Digite a primeira nota:");
    scanf("%f", &nota1);

    //recebendo a segunda nota
    printf("Digite a segunda nota:");
    scanf("%f", &nota2);

    //calculando a media ponderada levando em cosideracao 
    //peso 2 pra nota1 e peso 3 pra nota 2
    media = ((nota1 * 2) + (nota2 * 3)) / 5;
    
    //exibindo o resultado
    printf("O valor da media ponderada = %.2f", media);

    return 0;
}