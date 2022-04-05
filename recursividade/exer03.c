#include <stdio.h>
/*Considere um vetor vet de tamanho 20. Construa um programa com algoritmos recursivos para calcular:
• o elemento máximo do vetor;
• o elemento mínimo do vetor;
• a soma dos elementos do vetor;
• o produto dos elementos do vetor;
• a média dos elementos do vetor.*/

//achar o elemento maximo do vetor
int maximo(int *vet, int tam){              //passando o vetor como parametro e recebendo o tamanho do vetor
    int aux;                                //variavel auxiliar
    if(tam == 1)                            //caso base
        return vet[0];                      //retorna o primeiro elemento do vetor
    else {
        aux = maximo(vet, tam-1);           //recursão
        if(aux > vet[tam-1])                //fazendo a comparação por cada elemento do vetor
            return aux;                     
        else 
            aux = vet[tam-1];
    }
    return aux;
}
//achar o elemento minimo do vetor 
int minimo(int *vet, int tam){
    int aux;
    if(tam == 1) //caso base
        return vet[0];
    else{
        aux = minimo(vet, tam-1);
        if(aux > vet[tam-1])
            return aux = vet[tam-1];
        else 
            return aux;
    }
}
//fazer a soma dos elementos do vetor
int somaEle(int *vet, int tam){
    int aux;                        
    if(tam == 1)
        return vet[0];
    else {
        aux = somaEle(vet, tam-1);
        return aux + vet[tam-1]; 
    }
}
//calcula o produto do vetor
int produtoVet(int *vet, int tam){
    int aux;
    if(tam == 1)
        return vet[0];
    else {
        aux = produtoVet(vet, tam-1);
        return aux * vet[tam-1];
    }
}
//calcula a media do vetor
float mediaVet(int *vet, int tam){
    float aux=0;
    if(tam == 1)
        return vet[0];
    else {
        aux += mediaVet(vet, tam-1);
        if (tam == 20)
            return (aux + vet[tam-1]) / 5;
        else
            return aux + vet[tam-1];
    }
}

int main(int argc, char const *argv[]){
    int vet[20], i;

    printf("Digite os valores do vetor:\n");
    for(i=0; i<20; i++){
        printf("Valor %d: ", i+1);
        scanf("%d", &vet[i]);
    }

    printf("O elemento maximo do vetor = %d\n", maximo(vet, 5));
    printf("O elemento minimo do vetor = %d\n", minimo(vet, 5));
    printf("A soma dos elementos do vetor = %d\n", somaEle(vet, 5));
    printf("O produto do vetor = %d\n", produtoVet(vet, 5));
    printf("A media do vetor = %.1f\n", mediaVet(vet, 5));

    return 0;
}
