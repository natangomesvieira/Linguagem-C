#include <stdio.h>
#include <stdlib.h>

int main () {

    //declarando as variaveis
    float valor,novoValor;
    //recebendo o valor do produto
    printf("Digite o valor do produto:");
    scanf("%f", &valor);
    //novo valor com ajuste
    if (valor > 0 && valor <= 50){
        novoValor = (valor * 5) /100;
        valor += novoValor;
        printf("O novo valor do produto e R$%.2f\n",valor);
    }
    else if (valor > 50 && valor <= 100){
        novoValor = (valor * 10) /100;
        valor += novoValor;
        printf("O novo valor do produto e R$%.2f\n",valor);
    }
    else if (valor > 100){
        novoValor = (valor * 15) /100;
        valor += novoValor;
        printf("O novo valor do produto e R$%.2f\n",valor);
    }
    else {
        printf("Valor digitado eh invalido\n");
    }
    //classificacao do novo valor
    if (valor > 0 && valor < 80 ) {
        printf("Produto considerado BARATO");
    }
    else if (valor >= 80 && valor < 120){
        printf("Produto considerado NORMAL");
    }
    else if (valor >= 120 && valor < 200){
        printf("Produto considerado CARO");
    }
    else if (valor >= 200){
        printf("Produto considerado MUITO CARO");
    }
    else {
        printf("Produto nao tem valor correto para ser categorizado");
    }
    return 0;
}
