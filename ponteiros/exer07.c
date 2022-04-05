#include <stdio.h>
/*Considere um vetor de 10 elementos, contendo valores inteiros. Faça um programa que leia os valores para preencher esse vetor, após a leitura o programa deve invocar uma função que calcule e devolva as frequências absoluta e relativa desses valores no conjunto. (Observação: a frequência absoluta de um valor é o número de vezes que esse valor aparece no conjunto de dados; a frequência relativa é a frequência absoluta dividida pelo número total de dados.). Utilize
outros dois vetores para armazenar as frequências relativas e absolutas e ao final do programa, imprima de forma tabulada os números e suas frequências absoluta e relativa.*/
void freq(int *vet, int *freqAb, float *freqRe){
    int i, j, cont=0, aux;

    //ordenando os numeros do vetor
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(vet[i] < vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    
    //calculando a frequencia absoluta
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(vet[i] == vet[j]){
                cont++;
            }
        }
        freqAb[i] = cont;
        cont = 0;
    }

    //calculando a frequencia relativa
    for(i=0; i<10; i++){
        freqRe[i] = (float)freqAb[i] / 10;
    }
}

int main(int argc, char const *argv[]){
    int i, vet[10], freqAb[10];
    float freqRe[10];

    printf("Digite os valores do vetor: \n");       
    for(i=0; i<10; i++){                            //preenchendo o vetor
        printf("Valor %d: ", i+1);
        scanf("%d", &vet[i]);
    }

    freq(vet, freqAb, freqRe);        //chamando a função

    printf("Num dig |  Freq. Abs   |  Freq. Rel\n");
    for(i=0; i<10; i++){
        printf("%d  |  %d  |  %.2f \n", vet[i], freqAb[i], freqRe[i]);          //exibindo o resultado
    }

    return 0;
}
