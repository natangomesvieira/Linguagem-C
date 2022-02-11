#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que permita entrar com o nome e o salário bruto de 10 pessoas.
Após ler os dados, imprimir o nome e o valor da alíquota do imposto de renda
calculado conforme a tabela a seguir:
Salário menor que R$1300,00 Isento
Salário maior ou igual a R$1300,00 e menor que R$2300,00 10% do salário bruto
Salário maior ou igual a R$2300,00 15% do salário bruto*/
int main(int argc, char const *argv[]){
    char *nome[10];
    float salario[10], imposto[10];
    int i;

    for(i=0; i<10; i++){                                        //for para receber os dados dos funcionarios
        nome[i] = malloc(sizeof(char) * 50);                    //alocando memoria para o vetor de char
        printf("Digite o nome da pessoa %d: ", i+1);                    
        scanf("%s", nome[i]);                                   //recebendo o nome
        printf("Digite o salario bruto: ");
        scanf("%f", &salario[i]);                               //recebendo o salario bruto
    }

    for(i=0; i<10; i++){                                        //for para fazer a verificacao
        if(salario[i] < 1300){                                  //se o salario for menor de 1300,00 insento de imposto
            printf("Nome: %s\n", nome[i]);
            printf("Insento do imposto de renda.\n");
        }
        else if(salario[i] >= 1300 && salario[i] < 2300){       //se o salario de de 1300,00 ate 2299,00 ele tem uma aliquota de 10%
            imposto[i] = (salario[i] * 10) / 100;
            printf("Nome: %s\n", nome[i]);
            printf("Imposto de renda = R$ %.2f\n", imposto[i]);
        }
        else if(salario[i] >= 2300){                            //se o salario for maior ou igual a 2300,00 ele tem uma aliquota de 15%
            imposto[i] = (salario[i] * 15) / 100;
            printf("Nome: %s\n", nome[i]);
            printf("Imposto de renda = R$ %.2f\n", imposto[i]);
        }
    }
    free(nome);                                                 //libera a memoria alocada
    return 0;
}
