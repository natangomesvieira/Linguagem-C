#include <stdio.h>
/*Faça um programa que imprima todos os números pares de 100 até 1.*/
int main(int argc, char const *argv[]){
    int i;
    for(i=100; i>0; i--){       //for para rodar uma lista decrescente iniciando em 100 ate o 1
        if(i % 2 == 0){         //se o numero divido por 2 tiver o resto igual a 0 entao ele eh par
            printf("%d ", i);   //imprime os numeros que forem pares
        }
    }
    return 0;
}
