#include <stdio.h>
#include <stdlib.h>

int main () {
    char receberString(void);
    int numeroN(void);

    receberString();
    numeroN();

    return 0;
}

char receberString(void){
    char palavra[10];
    printf("Digite alguma palavra de ate 10 caracter\n");
    scanf("%s",palavra);
    return palavra;
}

int numeroN(void){
    int numero;
    printf("Digite um numero inteiro positivo:\n");
    scanf("%d",&numero);
    return numero;
}
