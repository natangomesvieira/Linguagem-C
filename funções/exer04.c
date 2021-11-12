#include <stdio.h>
#include <stdlib.h>

int main () {
    float DOBRO(float num);
    float num;

    printf("Digite um numero:");
    scanf("%f",&num);

    DOBRO(num);

    return 0;
}

float DOBRO(float num){
    float resul = num + num;
    printf("O numero digitado foi %.2f e o dobro = %.2f",num,resul);
    return 0;
}