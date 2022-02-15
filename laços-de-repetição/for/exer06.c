#include <stdio.h>
/*Crie um programa em C que imprima os 20 primeiros termos da série de Fibonacci.
Observação: os dois primeiros termos desta série são 1 e 1 e os demais são gerados
a partir da soma dos anteriores. 
Exemplo:
1 + 1 = 2, terceiro termo;
1 + 2 = 3, quarto termo, etc*/
int main(int argc, char const *argv[]){
    int i, fib[20];
    fib[0] = 1;
    fib[1] = 1;

    for(i=2; i<20; i++){    //for criado para iniciar a sequencia de fib da posicao 2 pq a posicao 0 e 1 ja tem valor
        fib[i] = fib[i-1] + fib[i-2];        //fazendo a soma do fib onde soma o valor fib na pos 0 + valor da pos 1 gerando a terceira pos
    }
    for(i=0; i<20; i++){          //for criado para exibir a sequencia de fib
        printf("%d ", fib[i]);
    }
    return 0;
}
