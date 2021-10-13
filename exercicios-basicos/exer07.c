#include <stdio.h>
#include <stdlib.h>

int main () {
    
    //declarando as variaveis
    float peso, conversao;

    //recebendo o pesso de uma pessoa
    printf("Digite o peso de uma pessoa em Kg:");
    scanf("%f", &peso);

    //convertendo o peso para gramas
    conversao = peso * 1000;

    //exibindo o resultado
    printf("O pessoa em gramas = %.2fg\n", conversao);

    return 0;
}