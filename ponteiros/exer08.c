#include <stdio.h>
/*O laboratório de agropecuária da Universidade Federal do Capa Bode tem um termômetro de extrema precisão, utilizado para aferir as temperaturas de uma estufa onde cultivam uma variedade de jaca transgênica, com apenas um caroço do tamanho de uma semente de laranja. O problema é que este termômetro dá os resultados na escala Kelvin (K) e os pesquisadores que atuam perto da estufa são americanos, acostumados com a escala Fahrenheit (F). Você deve criar um programa para pegar uma lista de 24 temperaturas em Kelvin e convertê-las para Fahrenheit. O problema maior é que esses pesquisadores querem que você faça essa conversão e imprima os resultados utilizando ponteiros. Para a conversão, observe as fórmulas a seguir:
F = 1.8 x (K - 273) + 32
Em que:
• F = Fahrenheit
• K = Kelvin
*/

void conversor(float *k, float *f, int qnt){
    int i;
    for(i=0; i<qnt; i++){
        f[i] = 1.8 * (k[i] - 273) + 32;             //conversão de Kelvin para Fahrenheit
    }
}

int main(int argc, char const *argv[]){
    int i, qnt=24;
    float k[24], f[24];

    printf("Digite a temperatura em Kelvin\n");
    for(i=0; i<qnt; i++){                            //recebendo as temperaturas em kelvin
        printf("Temperatura %d: ",i+1);
        scanf("%f", &k[i]);
    }

    conversor(k, f, qnt);                          //chamando a função e passando os parametros

    for(i=0; i<qnt; i++){
        printf("Temperatura %d: %.2f Fahrenheit\n",i+1, f[i]);          //exibindo a temperatura em Fahrenheit
    }

    return 0;
}
