#include <stdio.h>
int main(int argc, char const *argv[]){
    int matricula[10], i, contalto=0, contbaixo=0;
    float altura[10], alto, baixo;

    for(i=0; i<3; i++){
        printf("Digite a matricula do aluno %d: ", i+1);
        scanf("%d", &matricula[i]);
        printf("Digite a aultura do aluno %d em CM: ", i+1);
        scanf("%f", &altura[i]);
    }

    alto = altura[0];
    baixo = altura[0];

    for(i=0; i<3; i++){

        if(alto < altura[i]){
        alto = altura[i];
        contalto = i;
        }
        
        if(baixo > altura[i]){
        baixo = altura[i];
        contbaixo = i;
        }
    }

    printf("A matricula do aluno mais alto = %d\n", matricula[contalto]);
    printf("A altura do aluno mais alto = %.2f\n", alto);
    printf("A matricula do aluno mais baixo = %d\n", matricula[contbaixo]);
    printf("A altura do aluno mais baixo = %.2f\n", baixo);
    
    return 0;
}
