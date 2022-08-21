#include <stdio.h>
#include <stdlib.h>

typedef struct nofila{
    float info;
    struct nofila *prox;
}Nofila;

typedef struct fila {
    Nofila *ini;
    Nofila *fim;
}Fila;

Fila *criarFila(){
    Fila *f = malloc(sizeof(Fila));
    f->ini = f->fim = NULL;
    return f;
}

int estaVazia(Fila *f){
    return (f->fim == NULL && f->ini == NULL);
}

void inserirElemento(Fila *f, float v){
    Nofila *no = malloc(sizeof(Nofila));
    if(no != NULL){
        no->info = v;
        no->prox = NULL;
        if(estaVazia(f))
            f->ini = f->fim = no;
        else
            f->fim->prox = no;
        f->fim = no;
    }
    else
        printf("Não foi possivel alocar memoria!\n");
}

float removerElemento(Fila *f){
    if(!estaVazia(f)){
        float aux = f->ini->info;
        Fila *inicio = f->ini->prox;
            free(f->ini);
            f->ini = inicio;
        return aux;
    }
    else{
        return 0;
    }
}

void imprimirFila(Fila *f){
    if(!estaVazia(f)){
        Nofila *aux;
        for(aux = f->ini; aux != NULL; aux = aux->prox)
            printf("%.2f ", aux->info);
        printf("\n");
    }
    else
        printf("A fila esta vazia!\n");
}
int main(int argc, char const *argv[]){
    
    Fila *fila = criarFila();

    inserirElemento(fila, 1);
    inserirElemento(fila, 2);
    inserirElemento(fila, 3);

    imprimirFila(fila);

    float removido = removerElemento(fila);
    printf("O elemento removido foi %.2f\n", removido);

    imprimirFila(fila);

    float removido2 = removerElemento(fila);
    printf("O elemento removido foi %.2f\n", removido2);

    imprimirFila(fila);

    return 0;
}
