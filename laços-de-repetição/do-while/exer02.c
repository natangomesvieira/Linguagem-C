#include <stdio.h>
/*Dado um país A, com 5 milhões de habitantes e uma taxa de natalidade de 3% ao
ano, e um país B com 7 milhões de habitantes e uma taxa de natalidade de 2% ao
ano, fazer um programa que calcule e imprima o tempo necessário para que a
população do país A ultrapasse a população do país B*/
int main(int argc, char const *argv[]){

    int i=0;
    float A = 5000000, B = 7000000;

    do{
        A += A * 0.03;
        B += B * 0.02;
        i++;
    }while(B > A);

    printf("E necessario %d anos.\n", i);

    return 0;
}
