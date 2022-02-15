#include <stdio.h>

int main(int argc, char const *argv[]){
    
    int num , cont=0;           //declaração de variaveis

    do{
        printf("Digite um numero: (Digite 0 para sair): ");
        scanf("%d", &num);                                  //recebendo o numero digitado
        if(num >= 100 && num <= 200){                       //se o numero for entre 100 e 200 entra aqui
            cont++;                                         //contador vai acrescentando de 1 em 1 
        }
    }while(num != 0);                                       //se for igual a zero encerra o programa

    printf("Foram digitados %d numeros entre 100 e 200.\n", cont);          //exibindo o resultado

    return 0;
}
