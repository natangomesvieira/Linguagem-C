#include <stdio.h>
#include <stdlib.h>

int main () {

    //declarando as variaveis
    float salario, novoSalario;

    //recebendo o valor do salario
    printf("Digite o valor salario:");
    scanf("%f", &salario);

    if (salario > 0 && salario < 300){
        novoSalario = (salario * 50) / 100;
        salario += novoSalario;
        printf("O novo salario e de R$%.2f",salario);
    }
    else if (salario >= 300 && salario < 500){
        novoSalario = (salario * 40) / 100;
        salario += novoSalario;
        printf("O novo salario e de R$%.2f",salario);
    }
    else if (salario >= 500 && salario < 700){
        novoSalario = (salario * 30) / 100;
        salario += novoSalario;
        printf("O novo salario e de R$%.2f",salario);
    }
    else if (salario >= 700 && salario < 800){
        novoSalario = (salario * 20) / 100;
        salario += novoSalario;
        printf("O novo salario e de R$%.2f",salario);
    }
    else if (salario >= 800 && salario < 1000){
        novoSalario = (salario * 10) / 100;
        salario += novoSalario;
        printf("O novo salario e de R$%.2f",salario);
    }
    else if (salario >= 1000){
        novoSalario = (salario * 5) / 100;
        salario += novoSalario;
        printf("O novo salario e de R$%.2f",salario);
    }
    else {
        printf("Salario digitado eh invalido");
    }

    return 0;
}
