#include <stdio.h>
/*Faça um programa que permita entrar com valores em uma matriz A de tamanho
3 X 4. Gerar e imprimir uma matriz B que é o triplo da matriz A.*/
int main(int argc, char const *argv[]){
    int matrizA[3][4], matrizB[3][4], i, j;

    for(i=0; i<3; i++){
        printf("Digite os elementos da linha %d\n", i+1);
            for(j=0; j<4; j++){
                printf("Digite os elementos da coluna %d: ", j+1);
                scanf("%d", &matrizA[i][j]);
            }
    }

    for(i=0; i<3; i++){
            for(j=0; j<4; j++){
                 matrizB[i][j] = matrizA[i][j] * 3; 
                 printf("%d ", matrizB[i][j]);
            }
        printf("\n");
    }

    return 0;
}