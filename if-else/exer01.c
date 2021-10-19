#include <stdio.h>
#include <stdlib.h>

int main () {
    //declarando as variaveis
    float nota1, nota2, nota3, nota4, media;
    //recebendo as notas do aluno
    printf("Digite a primeira nota do aluno:");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno:");
    scanf("%f", &nota2);
    printf("Digite a terceira nota do aluno:");
    scanf("%f", &nota3);
    printf("Digite a quarta nota do aluno:");
    scanf("%f", &nota4);
    //calculando a media 
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    //exibindo a media
    printf("Media do aluno = %.2f \n", media);
    //conferindo se a media é maior que 7 para ser aprovado
   if (media < 7) {
        printf("REPROVADO");
    }
    else {
        printf("APROVADO");
    }

    return 0;
}