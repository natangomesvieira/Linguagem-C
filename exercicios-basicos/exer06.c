#include <stdio.h>
#include <stdlib.h>

int main () {
    
    //declarando as variaveis
    float salario, vendas, comissao, salariofinal;

    //recebendo o valor do salario
    printf("Digite o valor do salario do funcionario R$");
    scanf("%f", &salario);

    //recebendo o valor das vendas do funcionario
    printf("Digite o valor das vendas efetuadas pelo funcionario R$");
    scanf("%f", &vendas);

    //calculando o valor da comissao
    comissao = vendas * 4 / 100;

    //calculando o valor final do salario
    salariofinal = salario + comissao;

    //exibindo os resultados
    printf("O valor da comissao e de R$ %.2f \n", comissao);
    printf("O valor do salario final e de R$ %.2f \n", salariofinal);

    return 0;
}