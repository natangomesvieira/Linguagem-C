#include <stdio.h>
/*Construa uma função que, recebendo como parâmetros quatro números inteiros, devolva ao módulo que o chamou os dois maiores números dentre os quatro recebidos. Faça um programa que leia tantos conjuntos de quatro valores quantos o usuário deseje e que acione a função para cada conjunto de valores, apresentando a cada vez os dois maiores números. Se preferir, utilize vetor para armazenar o conjunto de valores*/

int maiores(int *vet, int *maior1, int *maior2){            //recebendo os parametros da função
    int i;
    for(i=0; i<4; i++){             //rodando os valores do vetor
        if(vet[i] > *maior1)        //fazendo a verifição do maior elemento no vetor
            *maior1 = vet[i];
    }
    for(i=0; i<4; i++){             
        if(vet[i] < *maior1 && vet[i] > *maior2)        //verificando o segundo maior elemento do vetor
            *maior2 = vet[i];
    }
}

int main(int argc, char const *argv[]){
    //variaveis
    int op=1, i, vet[4], maior1=0, maior2=0;
    //recebendo os valores
    do{
        printf("Digite os valores do conjunto:\n");
        for(i=0; i<4; i++){
            printf("Valor %d: ", i+1);
            scanf("%d", &vet[i]);           //preenchendo o vetor 
        }

        maiores(vet, &maior1, &maior2);     //passando os parametros

        printf("O maior valor do conjunto = %d\n", maior1);             //exibindo o resultado
        printf("O segundo maior valor do conjunto = %d\n\n", maior2);   //exibindo o resultado

        printf("Digite 1 para inserir um novo conjunto.(qualquer tecla para sair)\n");
        scanf("%d", &op);           //recebendo a condição
    }while(op==1);                  //verificando a condição

    return 0;
}
