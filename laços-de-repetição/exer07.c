#include <stdio.h>
#include <stdlib.h>
/*Crie um programa em linguagem C que permita entrar com o nome, a nota da
prova 1 e da prova 2 de 15 alunos. Ao final, imprimir uma listagem, contendo:
nome, nota da prova 1, nota da prova 2, e média das notas de cada aluno. Ao final,
imprimir a média geral da turma.*/
int main(int argc, char const *argv[]){
    char *nome[15];                                             //criado um ponteiro pra um vetor
    float p1[15], p2[15], mediaIndv[15], mediageral=0;          
    int i;

    for(i=0; i<15; i++){                                        //for para receber os dados
        printf("Digite o nome do aluno(a): ");
        nome[i] = malloc(sizeof(char) * 50);                    //alocando memoria para cada posicao do vetor de tamanho 15 poder receber um nome de ate 50 caracter 
        scanf("%s", nome[i]);                                   //preenchando esse vetor com o nome da pessoa
        printf("Digite a nota da Prova 1: ");                  
        scanf("%f", &p1[i]);                                    //recebendo a nota da prova 1
        printf("Digite a nota da Prova 2: ");
        scanf("%f", &p2[i]);                                    //recebendo a nota da prova 2
    }
    
    for(i=0; i<15; i++){                                        //for para exibir os dados individuais
        printf("Nome do aluno(a) %d: %s\n", i+1, nome[i]);      //exibindo o nome de cada aluno
        printf("A nota da prova 1: %.1f\n", p1[i]);             //exibindo a nota da prova 1
        printf("A nota da prova 2: %.1f\n", p2[i]);             //exibindo a nota da prova 2
        mediaIndv[i] = (p1[i] + p2[i]) / 2;                     //calculando a media individual do aluno
        printf("Media = %.1f\n", mediaIndv[i]);                 //exibindo a media do aluno
        mediageral += mediaIndv[i];                             //calculando a media geral da turma
    }
    printf("A media geral da turma = %.1f\n", mediageral);      //exibindo a media geral da turma
    free(nome);                                                 //liberando a memoria alocada
    return 0;
}
