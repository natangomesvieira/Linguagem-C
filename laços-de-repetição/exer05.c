#include <stdio.h>
/*Sabendo-se que a unidade lógica e aritmética calcula o produto através de somas
sucessivas, crie um programa que calcule o produto de dois números inteiros
lidos. Suponha que os números lidos sejam positivos e que o multiplicando seja
menor do que o multiplicador.*/
int main(int argc, char const *argv[]){
    int i, soma=0, multiplicador, multiplicando;

    printf("Digite o numero multiplicador: ");      //recebdno o numero que ira multiplicar
    scanf("%d", &multiplicador);                    
    printf("Digite o numero multiplicando: ");      //recebendo o numero que sera multiplicado por ele
    scanf("%d", &multiplicando);

    if(multiplicador < 0 || multiplicando < 0){     //se o multiplicador ou o multiplicando for negativo a msg invalida sera exibida
        printf("Invalido - Multiplicando ou o Multiplicador sao negativos.\n");
    }
    else if(multiplicando > multiplicador){         //se o multiplicando for maior que o multiplicador msg invalida sera exibida   
        printf("Invalido - Multiplicando eh maior que o Multiplicador\n");
    }
    else{
        for(i=0; i<multiplicador; i++){         
            soma += multiplicando;              //ira ocorrer a soma por sequencia EX: 3x2 | 0 + 2 = 2 dps 2 = 2 + 2 = 4 dps 4 = 4 + 2 = 6
        }
        printf("Soma = %d\n", soma);            //exibe o resultado final da soma
    }

    return 0;
}
