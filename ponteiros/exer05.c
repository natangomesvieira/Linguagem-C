#include <stdio.h>
/*Faça um programa que receba dois valores inteiros, após receber esses dois
valores, uma função deve calcular e retornar para o programa o resultado da soma
e da subtração dos valores. Obs.: Apenas uma função deve realizar esta operação, desta forma, faça uso de ponteiros*/

int somasub(int A, int B, int *psoma, int *psub){       //psoma aponta pra var soma(main) e psub para var sub(main)
    *psoma = A + B;                //o resultado da soma vai ser apontado para armazenar na var soma
    *psub = A - B;                 //o resultado da sub vai ser apontado para armazenar na var sub
}

int main(int argc, char const *argv[]){
    
    int valorA, valorB, soma, sub;                          //variaveis

    printf("Digite o valor de A: ");                        //recebendo os valores
    scanf("%d", &valorA);
    printf("Digite o valor de B: ");
    scanf("%d", &valorB);

    somasub(valorA, valorB, &soma, &sub);                   //chamando a função e passando o endereço de soma e sub para qual o psoma e psub vai apontar 

    printf("O valor da soma = %d\n", soma);                 //exibindo os resultados
    printf("O valor da subtracao = %d\n", sub);

    return 0;
}
