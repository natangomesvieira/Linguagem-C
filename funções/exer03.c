#include <stdio.h>
#include <stdlib.h>

int main () {
    float CUBO(float num); //declarando a função
    float valor; //declarando a variavel

    printf("Digite um valor:");     //recebendo um valor
    scanf("%f",&valor);

    CUBO(valor);    //chamando a função para calcular e exibir o resultado

    return 0;
}
//função para calcular o numero digitado com potencia 3
float CUBO(float num){
    float resul;
    resul = num * num * num;
    printf("O resultado do numero %.2f com potencia 3 = %.2f",num,resul);
    return 0;
}