#include <stdio.h>
#include <stdlib.h>
/*Uma turma de alunos do curso de Medicina composta por apenas 10 alunos, está cursando 5 disciplinas.
Faça um programa que armazene o nome de cada aluno, o nome de cada disciplina, além de armazenar
a média (antes da Prova Final) em cada uma das 5 disciplinas dos 10 alunos e também a nota obtida na
prova final (se o aluno não ficou de prova final na disciplina será preenchido com 0). A partir disso exiba
o nome dos alunos reprovados e o nome das disciplinas reprovadas.*/

typedef struct turma{                   //criando um tipo de dado definido pelo programador
    char aluno[30];
    char disciplina[15];
    float media, provafinal;
}Turma;

int main() {

    Turma turm1[10];                      //declarando o tipo definido como um vetor
    int i,sim_nao;

    for(i=0; i<10; i++){                    //for criado para rodar o vetor e armazenar os dados
        printf("Digite o nome do aluno: ");
        scanf("%s", &turm1[i].aluno);

        printf("Aluno esta cursando 5 disciplinas, digite uma por vez.\n");
        for(i=0; i<5; i++){                 //for criado para receber as 5 disciplina do mesmo aluno
            printf("Digite a disciplina do aluno: ");
            scanf("%s", &turm1[i].disciplina);
            printf("Digite a media da disciplina: ");
            scanf("%f", &turm1[i].media);

            printf("Aluno ficou de prova final? 1-sim 2-nao");
            scanf("%d", &sim_nao);                      //sim_nao criado como verificador se o aluno ficou de prova final ou nao
            if(sim_nao == 1){                           //para poder ocorrer a validação do if ou do else
                printf("Digite a nota final do aluno:");
                scanf("%f", &turm1[i].provafinal);
        }
            else{                                           //caso o aluno não tenha ficado de prova final sera obtido pontuação 0.
                turm1[i].provafinal = 0;
            }
        }
    }

    for(i=0; i<10; i++){                                     //exibindo os resultados dos alunos
        printf("Situacao do Aluno(a): %s nas seguintes disciplinas:\n", turm1[i].aluno);
        for(i=0; i<5; i++){             //for criado para exibir as 5 notas do mesmo aluno antes de pular para o proximo
            if(turm1[i].media >= 7 || turm1[i].provafinal >= 7){        //se a media ou a nota final foi superior a 7 esta aprovado
                printf("Disciplina de %s APROVADO.\n", turm1[i].disciplina);
            }
            else {                                  //se a media ou a prova final foi inferior a 7 esta reprovado
                printf("Disciplina de %s REPROVADO.\n", turm1[i].disciplina);
            }
        }
    }
    return 0;
}