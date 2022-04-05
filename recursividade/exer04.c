#include <stdio.h>
/*A sequência de Fibonacci é a sequência de inteiros: 0,1,1,2,3,5,8,13,21,34,....
Implemente uma função recursiva que calcule e imprima todos os elementos da série Fibo*/

int Fibo(int num){
    int aux=0;
    if(num==1 || num==2)
        return 1;
    else 
        return Fibo(num-1) + Fibo(num-2);
}

int main(int argc, char const *argv[]){
    int num, i;
    printf("Digite um numero: ");
    scanf("%d", &num);

    for(i=0; i<num; i++){
        printf("%d ", Fibo(i+1));
    }
    return 0;
}
