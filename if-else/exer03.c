#include <stdio.h>
#include <stdlib.h>

int main () {
    //declarando as variaveis
    float numero1, numero2;
    //recebendo os dois numeros 
    printf("Digite o primeiro numero:");
    scanf("%f", &numero1);
    printf("Digite o segundo numero:");
    scanf("%f", &numero2);

    //verificando qual dos dois é maior
    if (numero1 < numero2){
        printf("%.2f e menor que %.2f",numero1,numero2);
    }
    else {
        printf("%.2f e menor que %.2f",numero2,numero1);
    }
    return 0;
}