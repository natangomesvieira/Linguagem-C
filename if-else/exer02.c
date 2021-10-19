#include <stdio.h>
#include <stdlib.h>

int main () {
    //declarando as variaveis
    float nota1, nota2, media;
    //recebendo as notas
    printf("Digite a primeira nota:");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:");
    scanf("%f", &nota2);
    //calculando a media
    media = (nota1 + nota2) / 2;
    //exibindo a media
    printf("Media = %.2f \n", media);

    //conferindo situação do aluno
    if (media >= 0 && media < 4){
        printf("REPROVADO");
    }
    else if (media >= 4 && media < 7){
        printf("EXAME");
    }
    else if(media >= 7 && media <=10){
        printf("APROVADO");
    }
    else {
        printf("Notas inseridas estao invalidas.");
    }


    return 0;
}