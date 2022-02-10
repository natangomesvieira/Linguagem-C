#include <stdio.h>
/*Faça um programa que imprima os múltiplos de 5, no intervalo de 1 até 500.*/
int main(int argc, char const *argv[]){
    int i;
    for(i=1; i<501; i++){               //for para rodar a lista de 1 ate 500
        if(i % 5 == 0){                 // se o resto da divisao por 5 for igual a 0 entao ele eh multiplo de 5 
            printf("%d ", i);           //exibe o numero que for multiplo de 5
        }
    }
    return 0;
}
