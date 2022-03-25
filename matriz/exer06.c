#include <stdio.h>
/*Crie um programa que leia valores inteiros em uma matriz A[2][2] e em uma
matriz B[2][2]. Gerar e imprimir a matriz SOMA[2][2].*/
int main(int argc, char const *argv[]){
    int matrizA[2][2], matrizB[2][2], soma[2][2], i, j;

    for(i=0; i<2; i++){
        printf("Digite os elementos da linha %d\n", i+1);
            for(j=0; j<2; j++){
                printf("Digite os elementos da coluna %d:\n", j+1);
                printf("Matriz A: ");
                scanf("%d", &matrizA[i][j]);
                printf("Matriz B: ");
                scanf("%d", &matrizB[i][j]);
            }
    }

    for(i=0; i<2; i++){
            for(j=0; j<2; j++){
                soma[i][j] = matrizA[i][j] + matrizB[i][j];
                printf("%d ", soma[i][j]);
            }
        printf("\n");
    }

    return 0;
}