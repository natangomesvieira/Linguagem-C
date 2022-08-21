#include <stdio.h>
#include <stdlib.h>
#define N 10

typedef struct fila{
    float info[N];
    int n;
    int inicio;
}Fila;

//cria a fila
Fila *criarFila(){
    Fila *cria = malloc(sizeof(Fila));
    cria->n = 0;
    cria->inicio = 0;
    return cria;
}

//verifica se a fila esta vazia
int estaVazia(Fila *f){
    return (f->n == 0);
}

//verifica a fila esta cheia 
int estaCheia(Fila *f){
    return (f->n == N);
}

//insere elemento na fila
void inserirElemento(Fila *f, float v){
    if(!estaCheia(f)){
        int fim = (f->inicio + f->n) % N;
        f->info[fim] = v;
        f->n++;
    }
    else{
        printf("A fila esta cheia!\n");
    }
}
//imprime a fila
void imprimirFila(Fila *f){
    if(!estaVazia(f)){
        int x = f->inicio;
        for(int aux = 0; aux < f->n; aux++){
            printf("%.2f ", f->info[x]);
            x = (x + 1)%N;
        }
        printf("\n");
    }
    else
        printf("A fila esta vazia!\n");
}

//remove e retorna o primeiro elemento da fila
float removerElemento(Fila *f){
    if(!estaVazia(f)){
        float aux = f->info[f->inicio];
        f->n--;
        f->inicio = (f->inicio+1)%N;
        return aux;
    }
    else {
        printf("A fila esta vazia!\n");
        return 0;
    }
}

//libera todos os elementos da fila
void liberarFila(Fila *f){
    free(f);
}

//verificar o maior valor que exite na fila
float maiorValor(Fila *f){
    if(!estaVazia(f)){
        float aux = f->info[f->inicio];
        int x = f->inicio;
        for(int i = f->inicio; i < f->n; i++){
            if(aux < f->info[x]){
                aux = f->info[x];
                x = (x + 1)%N;
            }
            else
                x = (x + 1)%N;

        }
        return aux;
    }
    else
        return 0;
}

int main(int argc, char const *argv[]){
    
    Fila *fila = criarFila();    

    inserirElemento(fila, 3);
    inserirElemento(fila, 1);
    inserirElemento(fila, 2);
    inserirElemento(fila, 5);

    imprimirFila(fila);

    //float primeiro = removerElemento(fila);
    //printf("O primeiro elemento da fila = %.2f\n", primeiro);

    float maior = maiorValor(fila);
    printf("O maior valor da fila = %.2f\n", maior);

    return 0;
}
