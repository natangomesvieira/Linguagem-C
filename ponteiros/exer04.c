#include <stdio.h>
/*Elabore um programa que leia um valor do tipo inteiro e, por meio de função,
atualize todas as posições de um vetor com o número inteiro lido, depois imprima
os valores. Utilize ponteiros para as operações*/

int preenchervetor(int valor, int *pvetor){     //função recebe um valor e aponta para um vetor
    int i;
    for(i=0; i<10; i++){                        //for para percorrer o vetor
        pvetor[i] = valor;                      //armazenando em cada posição do vetor o valor digitado pelo usuario
    }                                           //lembrando que pvetor é ponteiro então basicamente estamos preenchendo o vetor que está na main
}

int main(int argc, char const *argv[]){
    //variaveis
    int valor, vetor[10], i;
    //recebendo um valor inteiro
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    //chamando a função
    preenchervetor(valor, vetor);

    //exibindo o vetor preenchido
    for(i=0; i<10; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}
