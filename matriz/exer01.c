#include <stdio.h>
/*Faça um programa em C que leia os elementos de uma matriz do tipo inteiro com
tamanho 10 X 10. Ao final, imprima todos os elementos.*/
int main(int argc, char const *argv[]){
    int matriz[5][5], i, j;

    for(i=0; i<5; i++){
        printf("Digite os elementos da linha %d\n", i);
        for(j=0; j<5; j++){
            printf("Digite o elemento da coluna %d: ", j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
