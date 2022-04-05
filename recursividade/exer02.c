#include <stdio.h>

/*2. Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos números de 1 a N.*/
//função criada para fazer o somatorio
int somatorio(int a){
    if(a < 0)       //caso base
        return 0;
    else 
        return a + somatorio(a-1);  //recursão onde A soma com o valor anterior de A até chegar no valor 1
}

int main(int argc, char const *argv[]){
    //variaveis
    int N;
    //recebendo dados do usuario
    printf("Digite o valor no N:");
    scanf("%d", &N);
    //exibindo o resultado feito pela função
    printf("O valor do somatorio = %d\n", somatorio(N));

    return 0;
}
