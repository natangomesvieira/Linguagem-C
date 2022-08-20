#include <stdio.h>
#include <stdlib.h>

typedef struct nolista {
    int info;
    struct nolista *prox;
}Nolista;

typedef struct descritor{
    Nolista *prim, *ult;
    int n;
}Descritor;

void criarLista(Descritor *l){
    l->prim = l->ult = NULL;
    l->n = 0;
}

int estaVazia(Descritor *l){
    return (l->n == 0);
}

void inserirInicio(Descritor *l, int v){
    Nolista *no = (Nolista*)malloc(sizeof(Nolista));
    if(no != NULL){
        no->info = v;
        no->prox = l->prim;
        l->prim = no;
        if(estaVazia(l)){
            l->ult = no;
        }
        l->n++;
    }
    else{
        printf("Nao foi possivel alocar memoria!\n");
    }
}

void insereFinal(Descritor *l, int v){
    Nolista *no = (Nolista*)malloc(sizeof(Nolista));
    if(no != NULL){
        no->info = v;
        no->prox = NULL;
        if(estaVazia(l)){
            l->prim = no;
        }
        else{
            l->ult->prox = no;
        }
        l->ult = no;
        l->n++;
    }
    else{
        printf("Nao foi possivel alocar memoria!\n");
    }
}

void removerElemento(Descritor *l, int v){
    if(!estaVazia(l)){
        Nolista *aux, *ant = NULL;
        for(aux = l->prim; aux != NULL && aux->info != v; aux = aux->prox){
            ant = aux;
        }
        if(aux == NULL){
            printf("Elemento nao encontrado!\n");
        }
        else{
            if(ant == NULL){
                l->prim = aux->prox;
            }
            else{
                ant->prox = aux->prox;
            }
            l->n--;
            free(aux);
        }
    }
    else{
        printf("A lista esta vazia!\n");
    }
}

void liberarLista(Descritor *l){
    if(!estaVazia(l)){
        Nolista *aux, *temp = NULL;
        for(aux = l->prim; aux != NULL; aux = temp){
            temp = aux->prox;
            free(aux);
        }
        l->n = 0;
        l->prim = l->ult = NULL;
    }
    else{
        printf("A lista esta vazia!\n");
    }
}

void imprimirLista(Descritor *l){
    if(!estaVazia(l)){
        Nolista *aux;
        for(aux = l->prim; aux != NULL; aux = aux->prox){
            printf("%d ", aux->info);
        }
        printf("\n");
    }
    else{
        printf("A lista esta vazia!\n");
    }
}

int main(int argc, char const *argv[]){
    
    Descritor lista;

    criarLista(&lista);

    inserirInicio(&lista, 5);
    inserirInicio(&lista, 10);
    inserirInicio(&lista, 15);
    inserirInicio(&lista, 20);

    imprimirLista(&lista);

    insereFinal(&lista, 20);
    imprimirLista(&lista);

    removerElemento(&lista, 20);
    imprimirLista(&lista);

    liberarLista(&lista);
    imprimirLista(&lista);
    
    return 0;
}
