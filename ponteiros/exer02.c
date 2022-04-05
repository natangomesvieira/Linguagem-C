#include <stdio.h>
/*Crie um programa que leia números reais em um vetor de tamanho 10. Imprima
o endereço de cada posição desse vetor.*/

int main(int argc, char const *argv[]){
    //variaveis
    int i;
    float vet[10];
    //preenchendo o vetor
    printf("Preencha o vetor com mumeros reais:\n");
    for(i=0; i<10; i++){
        printf("Posicao %d: ", i+1);
        scanf("%f", &vet[i]);
    }
    //exibindo o endereço de cada posição do vetor
    for(i=0; i<10; i++){
        printf("Endereco da posicao %d: %d \n", i+1, &vet[i]);
    }

    return 0;
}