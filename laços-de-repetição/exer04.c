#include <stdio.h>
/*Faça um programa em C que permita entrar com o nome, a idade e o sexo de 20
pessoas. O programa deve imprimir o nome da pessoa se ela for do sexo masculino
e tiver mais de 21 anos.*/
int main(int argc, char const *argv[]){
    char nome[100];     //nome de ate 100 caracter
    int idade, sexo, i;

    for(i=0; i<20; i++){       //for para um total de 20 pessoas
        printf("Digite o nome da pessoa %d: ", i+1);
        scanf("%s", nome);     //recebendo o nome da pessoa
        printf("Digite a idade da pessoa: ");
        scanf("%d", &idade);    //recebendo a idade da pessoa
        printf("Escolha uma opcao:\n1 - Feminino | 2 - Masculino\n");
        scanf("%d", &sexo);     //recebendo o sexo da pessoa
        if(sexo == 2 && idade > 21){        //se a idade for maior de 21 anos e o sexo for masculino imprime o nome da pessoa 
            printf("Nome: %s\n", nome);
        }
    }
    return 0;
}
