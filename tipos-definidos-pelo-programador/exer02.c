#include <stdio.h>
#include <stdlib.h>

/*Supondo que todo carro tem um modelo, marca, ano, cor e preço. Faça um programa que leia as
informações de 10 carros que uma concessionária possui para revenda e imprime na tela o modelo,
marca, cor e o ano dos carros que possuem preço abaixo de R$ 20.000,00.*/

typedef struct infocarros{                      //criando um tipo definido pelo programador
    char modelo[15], marca[15], cor[15];
    int ano;
    float preco;
} Infocarros;


int main() {

    Infocarros conce[10];           //declarando o tipo criado
    int i;

    for(i=0; i<10; i++){                        //criando o laço de rep. para rodar o vetor e armazenar cada carro em uma posição
        printf("Digite o modelo do carro:\n");
        scanf("%s", &conce[i].modelo);
        printf("Digite a marca do carro:\n");
        scanf("%s", &conce[i].marca);
        printf("Digite o ano do carro:\n");
        scanf("%d", &conce[i].ano);
        printf("Digite a cor do carro:\n");
        scanf("%s", &conce[i].cor);
        printf("Digite o preco do carro:\n");
        scanf("%f", &conce[i].preco);
    }

    for(i=0; i<10; i++){                        //lendo os vetores preenchidos
        if(conce[i].preco < 20000){                                 //verificando em todas as posicoes se em alguma delas
            printf("Modelo do carro: %s \n", conce[i].modelo);      //tem carro com valor inferior a 20k se tiver sera exibido
            printf("Marca do carro: %s \n", conce[i].marca);        //os dados do carro.
            printf("Ano do carro: %d \n", conce[i].ano);
            printf("Cor do carro: %s \n", conce[i].cor);
        }
    }
    return 0;
}