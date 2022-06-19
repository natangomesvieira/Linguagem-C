#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int info;
    struct no *prox;
} Nolista;

typedef struct descritor {
    Nolista *prim, *ult;
    int n;
} Descritor;

void criarLista(Descritor *l) {
    l->prim = l->ult = NULL;
    l->n = 0;
}

int estaVazia(Descritor *l) {
    return (l->n == 0);
}

void insereInicio(Descritor *l, int valor) {
    Nolista *n = (Nolista*) malloc(sizeof (Nolista));
    if (n != NULL) {
        n->info = valor;
        n->prox = l->prim;
        l->prim = n;
        if (estaVazia(l))
            l->ult = n;
        l->n++;
    } else {
        printf("Nao foi possivel alocar memoria!!\n");
    }
}

void inserirFinal(Descritor *l, int valor) {
    Nolista *aux = (Nolista*) malloc(sizeof (Nolista));
    if (aux != NULL) {
        aux->info = valor;
        aux->prox = NULL;
        if (estaVazia(l))
            l->prim = aux;
        else
            l->ult->prox = aux;
        l->ult = aux;
        l->n++;
    } else {
        printf("Nao foi possivel alocar memoria!\n");
    }
}

void imprimirLista(Descritor *l) {
    if (!estaVazia(l)) {
        Nolista *aux;
        for (aux = l->prim; aux != NULL; aux = aux->prox) {
            printf("%d ", aux->info);
        }
    } else {
        printf("A lista esta vazia!\n");
    }
}

int main(int argc, char** argv) {

    Descritor lista;

    criarLista(&lista);

    insereInicio(&lista, 5);
    insereInicio(&lista, 10);
    insereInicio(&lista, 15);
    insereInicio(&lista, 20);

    imprimirLista(&lista);

    printf("\n");

    inserirFinal(&lista, 0);
    imprimirLista(&lista);

    return (EXIT_SUCCESS);
}

