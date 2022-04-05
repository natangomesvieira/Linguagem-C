#include <stdio.h>
/*Crie um programa que contenha um vetor de inteiros com tamanho 5. Utilizando
apenas ponteiros, leia valores e armazene neste vetor e após isso, imprima o dobro de cada valor lido.*/

int main(int argc, char const *argv[]){
    //variaveis
    int vet[5], i, *pvetor;

    printf("Digite os valor para o vetor:\n");  //preenchendo o vetor
    for(i=0; i<5; i++){
        pvetor = &vet[i];                       //apontando para cada posição do meu vetor
        printf("Valor %d: ", i+1);
        scanf("%d", pvetor);
    }

    for(i=0; i<5; i++){
        pvetor = &vet[i];                       //novamente apontando para cada posição do meu vetor 
        printf("O dobro o valor %d: %d\n", i+1, *pvetor * 2);     //exibindo o valor do vetor vezes 2 que no caso o dobro
    }

    return 0;
}