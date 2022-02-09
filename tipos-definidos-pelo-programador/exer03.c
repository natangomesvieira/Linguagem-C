#include <stdio.h>
#include <stdlib.h>

//OBS: faltando a parte de alteração de notas.


typedef struct alunos{              //criando o tipo da variavel definido pelo programador
    char nome[20];
    float notas,media;
    int matricula;
}Alunos;

int main(){
    Alunos dadosAlunos[6];          //definindo a variavel que foi criada pelo programador
    int i=0, j=0;
    float X;

    for(i=0; i<2; i++){                //for para passar os dados de cada aluno
        printf("Digite a matricula do aluno: ");
        scanf("%d", &dadosAlunos[i].matricula);
        printf("Digite o nome do aluno: ");
        scanf("%s", &dadosAlunos[i].nome);
        printf("Media final do aluno no semestre ");
        scanf("%f", &dadosAlunos[i].media);

        printf("Digite as notas finais do aluno: (Uma por vez)\n");
        for(j=0; j<2; j++){                                 //for para receber as 6 notas de cada aluno
            printf("Digite a nota %d do aluno:", j+1);
            scanf("%f", &dadosAlunos[i].notas);
        }   
    }
    printf("Deseja ver os alunos com notas superior a quantos?\n");
    scanf("%f", &X);

    //criando a listagem dos alunos
    printf("Listagem dos alunos:\n");
    for(i=0; i<2; i++){                         //for para exibir o nome dos alunos informados
        printf("%s\n", dadosAlunos[i].nome);
    }
    //verificando alunos com a nota superior a sugerida pelo usuario >> X
    for(i=0; i<2; i++){         //cada aluno
        printf("Verificando as notas do aluno %s\n", dadosAlunos[i].nome);
       for(j=0; j<2; j++){     //as notas de cada aluno
            if(dadosAlunos[i].notas > X){        //se a nota do aluno for maior que valor de X entra no if
                printf("Possui nota = %.2f\n", dadosAlunos[i].notas);
            }
       }
    }

    return 0;
}