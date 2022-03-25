#include <stdio.h>
/*Construa um programa que armazene dados em uma matriz de ordem 4 e imprima: Todos os elementos com números ímpares.*/
int main(int argc, char const *argv[]){
    int matriz[4][4], i, j;

    for(i=0; i<4; i++){
        printf("Digite os elementos da linha %d\n", i+1);
            for(j=0; j<4; j++){
                printf("Digite os elementos da coluna %d: ", j+1);
                scanf("%d", &matriz[i][j]);
            }
    }

    for(i=0; i<4; i++){
            for(j=0; j<4; j++){
                if((matriz[i][j] % 2) != 0)
                    printf("%d ", matriz[i][j]); 
            }
        printf("\n");
    }

    return 0;
}
