#include <stdio.h>
/*Faça um programa que leia os elementos de uma matriz do tipo inteiro com
tamanho 3 X 3 e imprima os elementos multiplicando por 2.*/
int main(int argc, char const *argv[]){
    int matriz [3][3], i, j;

    for(i=0; i<3; i++){
        printf("Digite os elementos da linha %d\n",i+1);
        for(j=0; j<3; j++){
            printf("Digite o elemento da coluna %d: ", j+1);
            scanf("%d", &matriz[i][j]);
            matriz[i][j] *= 2; 
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", matriz[i][j]); 
        }
        printf("\n");
    }

    return 0;
}
