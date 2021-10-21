#include <stdio.h>
#include <stdlib.h>

int main () {

    //declarando as variaveis
    int tipo;
    float investimento,rendimento;

    //recebendo o tipo do investimento
    printf("Digite o tipo do investimento\n1-Poupanca\n2-Renda fixa\n");
    scanf("%d",&tipo);

    if (tipo == 1){
        printf("Digite o valor do investimento\n");
        scanf("%f",&investimento);
        rendimento = (investimento * 0.5) / 100;
        investimento += rendimento;
        printf("O valor final do rendimento final sera de R$%.2f", investimento);
    }
    else if (tipo == 2){
        printf("Digite o valor do investimento\n");
        scanf("%f",&investimento);
        rendimento = (investimento * 4) / 100;
        investimento += rendimento;
        printf("O valor final do rendimento final sera de R$%.2f", investimento);
    }
    else  {
        printf("Tipo de investimento nao disponivel");
    }

    return 0;
}