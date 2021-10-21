#include <stdio.h>
#include <stdlib.h>

int main () {

    //declarando as variaveis
    float saldo, credito, saldoMedio;
    //pedindo para o usuario digitar o saldo medio
    printf("Digite o saldo medio do cliente:");
    scanf("%f", &saldo);
    //se o saldo for maior que 400 saldo medio sera de 35%
    if (saldo > 400){
        saldoMedio = (saldo * 35) / 100;
        saldo += saldoMedio;
        printf("O novo saldo sera de R$%.2f",saldo);
    }
    //se o saldo for maior que 300 e igual a 400 saldo medio sera de 25%
    else if (saldo <= 400 && saldo > 300){
        saldoMedio = (saldo * 25) / 100;
        saldo += saldoMedio;
        printf("O novo saldo sera de R$%.2f",saldo);
    }
    //se o saldo for maior que 200 e igual a 300 saldo medio sera de 20%
    else if (saldo <= 300 && saldo > 200) {
        saldoMedio = (saldo * 20) / 100;
        saldo += saldoMedio;
        printf("O novo saldo sera de R$%.2f",saldo);
    }
    //se o saldo for menor que 200 o saldo medio sera de 10%
    else {
        saldoMedio = (saldo * 10) / 100;
        saldo += saldoMedio;
        printf("O novo saldo sera de R$%.2f",saldo);
    }
    return 0;
}