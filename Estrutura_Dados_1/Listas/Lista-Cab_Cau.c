#include <stdio.h>
#include <stdlib.h>

typedef struct nolista {
    int info;
    struct nolista *prox;
} Nolista;

typedef struct lista {
    Nolista *cab;
    Nolista *cau;
} Lista;

void criarLista(Lista *l) {
    Nolista *cabeca = (Nolista*) malloc(sizeof (Nolista));
    Nolista *cauda = (Nolista*) malloc(sizeof (Nolista));

    l->cab = cabeca;
    l->cau = cauda;

    l->cab->prox = l->cau;
    l->cau->prox = NULL;
}

int estaVazia(Lista *l) {
    return (l->cab->prox == l->cau);
}

void insereInicio(Lista *l, int v) {
    Nolista *novo = (Nolista*) malloc(sizeof (Nolista));
    novo->info = v;
    if (estaVazia(l)) {
        novo->prox = l->cau;
        l->cab->prox = novo;
    } else {
        novo->prox = l->cab->prox;
        l->cab->prox = novo;
    }
}

void insereFinal(Lista *l, int v){
    Nolista *novo = (Nolista*)malloc(sizeof(Nolista));
    novo->info = v;
    if(estaVazia(l)){
        novo->prox = l->cau;
        l->cab->prox = novo;
    }
    else{
        Nolista *aux;
        for(aux = l->cab->prox; aux->prox != l->cau; aux = aux->prox);
        novo->prox = l->cau;
        aux->prox = novo;
    }
}

void imprimirLista(Lista *l){
    Nolista *p = (Nolista*)malloc(sizeof(Nolista));
    if(estaVazia(l))
        printf("Lista Vazia!\n");
    else{
        for(p = l->cab->prox; p != l->cau; p = p->prox)
            printf("%d ", p->info);
    }
}

int main(int argc, char** argv) {
    
    Lista lista;
    
    criarLista(&lista);
    
    insereInicio(&lista, 1);
    insereInicio(&lista, 2);
    insereInicio(&lista, 3);
    
    imprimirLista(&lista);
    
    printf("\n");
    
    insereFinal(&lista, 0);
    imprimirLista(&lista);
    
    return (EXIT_SUCCESS);
}

