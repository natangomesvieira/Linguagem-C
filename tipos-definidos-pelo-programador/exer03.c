#include <stdio.h>
#include <stdlib.h>
/*Uma turma de alunos do curso de Medicina composta por apenas 10 alunos, está cursando 5 disciplinas.
Faça um programa que armazene o nome de cada aluno, o nome de cada disciplina, além de armazenar
a média (antes da Prova Final) em cada uma das 5 disciplinas dos 10 alunos e também a nota obtida na
prova final (se o aluno não ficou de prova final na disciplina será preenchido com 0). A partir disso exiba
o nome dos alunos reprovados e o nome das disciplinas reprovadas.*/

struct turma{
    char aluno[30];
    char disciplina[15];
    float media, provafinal;
};

typedef struct turma Turma;

int main() {

    Turma turm1[10];
    int i,sim_nao;

    for(i=0; i<2; i++){
        printf("Digite o nome do aluno: ");
        scanf("%s", &turm1[i].aluno);

        printf("Aluno esta cursando 5 disciplinas, digite uma por vez.\n");
        for(i=0; i<5; i++){
            printf("Digite a disciplina do aluno: ");
            scanf("%s", &turm1[i].disciplina);
            printf("Digite a media da disciplina: ");
            scanf("%f", &turm1[i].media);

            printf("Aluno ficou de prova final? 1-sim 2-nao");
            scanf("%d", &sim_nao);
            if(sim_nao == 1){
                printf("Digite a nota final do aluno:");
                scanf("%f", &turm1[i].provafinal);
        }
            else{
                turm1[i].provafinal = 0;
            }
        }
    }

    for(i=0; i<2; i++){
        printf("Situacao do Aluno(a): %s nas seguintes disciplinas:\n", turm1[i].aluno);
        for(i=0; i<5; i++){
            if(turm1[i].media >= 7 || turm1[i].provafinal >= 7){
                printf("Disciplina de %s APROVADO.\n", turm1[i].disciplina);
            }
            else {
                printf("Disciplina de %s REPROVADO.\n", turm1[i].disciplina);
            }
        }
    }



    return 0;
}