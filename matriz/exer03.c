#include <stdio.h>
/*Crie um programa que armazene dados inteiros em uma matriz de ordem 5 e
imprima: Todos os elementos que se encontram em posições cuja linha mais
coluna formam um número par.*/
int main(int argc, char const *argv[]){
    int matriz[5][5], i, j, aux;

    for(i=0; i<5; i++){
        printf("Digite os elementos da linha %d:\n", i+1);
        for(j=0; j<5; j++){
            printf("Digite o elemento da coluna %d: ", j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            aux = i + j;
            aux = aux % 2;
            if(aux == 0)
                printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
