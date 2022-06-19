#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
    char nome[80];
    int matricula;
} Aluno;

void inicializa(int n, Aluno **tab) {
    int i;
    for (i = 0; i < n; i++) {
        tab[i] = NULL;
    }
}

void leAluno(int n, Aluno **tab, int i) {
    for (i; i < n; i++) {
        tab[i] = (Aluno*) malloc(sizeof (Aluno));
        printf("Digite o nome do novo aluno: ");
        scanf("%80[^\n]", tab[i]->nome);
        printf("Digite a matricula do aluno: ");
        scanf("%d", &tab[i]->matricula);
        setbuf(stdin, NULL);
    }
}

void imprimeAluno(int n, Aluno **tab, int i) {
    for (i; i < n; i++) {
        printf("Aluno: %s\n", tab[i]->nome);
        printf("Matricula: %d\n", tab[i]->matricula);
    }
}

void removeAluno(int n, Aluno **tab, int i) {
    if (i < n && i >= 0) {
        free(tab[i]);
        tab[i] = NULL;
    }
}

void imprime_tudo(int n, Aluno **tab, int i) {
    printf("\n");
    for (int j = 0; j < n; j++) {
        if (i == j) {

        } else
            printf("Aluno: %s Matricula: %d\n", tab[j]->nome, tab[j]->matricula);
    }
}

int main(int argc, char** argv) {

    Aluno * tab[3];

    inicializa(3, tab);

    leAluno(3, tab, 0);

    imprimeAluno(3, tab, 0);

    removeAluno(3, tab, 0);

    imprime_tudo(3, tab, 0);

    return (EXIT_SUCCESS);
}

