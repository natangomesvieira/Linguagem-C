#include <stdio.h>

/*1. Faça um programa em C que calcule, por meio de uma função recursiva, a x b usando a adição, em que a e b são inteiros não-negativos.*/

//função recursiva
int multiplica(int a, int b){
    if (b < 1)  //caso base
        return 0;   
    else 
        return a + multiplica(a, b-1);      //multiplicação por soma ou seja a + a e o b decrementa como um contador
}

int main(int argc, char const *argv[]){
    
    int a, b;       //variaveis
    //recebendo o valor de A e B
    printf("Digite o valor de A:");
    scanf("%d", &a);
    printf("Digite o valor de B:");
    scanf("%d", &b);
    //exibindo o resultado da multiplicação
    printf("O valor da multiplicacao por adicao = %d\n", multiplica(a,b));

    return 0;
}

