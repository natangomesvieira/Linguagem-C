#include <stdio.h>
/*Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.*/
int main(int argc, char const *argv[]){
    int a, b;
    if(&a > &b)
        printf("Endereco da variavel A: %d\n",&a);
    else
        printf("Endereco da variavel B: %d\n", &b);
    return 0;
}
