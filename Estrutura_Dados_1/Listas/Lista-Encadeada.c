#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int info;
    struct no *prox;
} Nolista;

Nolista* criarlista() {
    return NULL;
}

int listavazia(Nolista **l) {
    return (*l == NULL);
}

void insereElemento(Nolista **l, int v) {
    Nolista *n = malloc(sizeof (Nolista));
    if (n != NULL) {
        n->info = v;
        n->prox = *l;
        *l = n;
    } else {
        printf("Nao foi possivel alocar memoria! \n");
    }
}

void imprime(Nolista **l) {
    if (!listavazia(l)) {
        Nolista *p;
        for (p = *l; p != NULL; p = p->prox) {
            printf("%d ", p->info);
        }
        printf("\n");
    } else {
        printf("A lista esta vazia!\n");
    }
}

int busca(Nolista **l, int n) {
    if (!listavazia(l)) {
        Nolista *p;
        int cont = -1;
        for (p = *l; p != NULL; p = p->prox) {
            ++cont;
            if (p->info == n) {
                return cont;
            }
        }
    } else {
        printf("A lista esta vazia!\n");
    }
}

void insereOrdenado(Nolista **l, int v) {
    Nolista *p, *ant = NULL;
    Nolista *n = (Nolista*) malloc(sizeof (Nolista));
    if (n != NULL) {
        n->info = v;
        for (p = *l; p != NULL && p->info < v; p = p->prox) {
            ant = p;
        }
        if (ant == NULL) {
            n->prox = p;
            *l = n;
        } else {
            ant->prox = n;
            n->prox = p;
        }
    } else
        printf("Nao foi possivel alocar memoria!\n");
}

void insereFinal(Nolista **l, int v) {
    Nolista *n = (Nolista*) malloc(sizeof (Nolista));
    if (n != NULL) {
        if (!listavazia(l)) {
            Nolista *aux;
            for (aux = *l; aux != NULL && aux->prox != NULL; aux = aux->prox);
            n->info = v;
            n->prox = NULL;
            aux->prox = n;
        } else
            printf("Lista vazia!\n");
    } else
        printf("Nao foi possivel alocar memoria!\n");
}

void removeElemento(Nolista **l, int v) {
    Nolista *p, *ant = NULL;
    for (p = *l; p != NULL && p->info != v; p = p->prox) {
        ant = p;
    }
    if (p == NULL) {
        printf("Elemento nao encontrado na lista!\n");
    } else {
        if (ant == NULL)
            *l = p->prox;
        else
            ant->prox = p->prox;
        free(p);
    }
}

int Busca(Nolista **l, int v) {
    if (!listavazia(l)) {
        Nolista *aux;
        int cont = 0;
        for (aux = *l; aux != NULL && aux->info != v; aux = aux->prox)
            cont++;
        if (aux == NULL)
            printf("Elemento não encontrado!\n");
        else
            return cont;
    } else
        printf("Lista vazia!\n");
}

int main(int argc, char** argv) {
    Nolista *lista;

    lista = criarlista();

    listavazia(&lista);

    insereOrdenado(&lista, 5);
    insereOrdenado(&lista, 1);
    insereOrdenado(&lista, 2);
    insereOrdenado(&lista, 9);

    imprime(&lista);

    insereFinal(&lista, 100);
    imprime(&lista);

    printf("Posicao: %d\n", Busca(&lista, 1));

    //insereElemento(&lista, 1);
    //insereElemento(&lista, 2);
    //insereElemento(&lista, 3);
    

    return (EXIT_SUCCESS);
}

