#include <stdio.h>
/*Faça um programa em C que imprima todos os números de 1 até 100.*/
int main(int argc, char const *argv[]){
    int i;
    for(i=1; i<101; i++){       //for para rodar uma lista crescente que inicia do 0 ate o 100
        printf("%d ", i);       //exibe cada numero contido nessa lista
    }
    return 0;
}
