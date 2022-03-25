#include <stdio.h>

int main(int argc, char const *argv[]){
    int matriz[2][3], i, j;

    for(i=0; i<2; i++){
        printf("Digite os elementos da linha %d\n", i+1);
            for(j=0; j<3; j++){
                printf("Digite os elementos da coluna %d:\n", j+1);
                printf("Matriz A: ");
                scanf("%d", &matriz[i][j]);
            }
    }

    for(j=0; j<3; j++){
            for(i=0; i<2; i++){
                printf("%d ", matriz[j][i]);
            }
        printf("\n");
    }

    return 0;
}