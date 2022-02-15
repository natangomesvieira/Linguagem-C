#include <stdio.h>
/*Em um campeonato Europeu de Volleyball, se inscreveram 30 países. Sabendo-se
que na lista oficial de cada país consta, além de outros dados, peso e idade de 12
jogadores, crie um programa que apresente as seguintes informações:
O peso médio e a idade média de cada um dos times;
O atleta mais pesado de cada time;
O atleta mais jovem de cada time;194 Apêndice C.
O peso médio e a idade média de todos os participantes*/
int main(int argc, char const *argv[]){
    //declaração das variaveis
    int i, j, idade[12], jovem;
    float peso[12], PesoMedio = 0, IdadeMedia=0, pesado, PMedioTds=0, IMediaTds=0;
    
    for(i=0; i<30; i++){                                        //for para rodar os países
        printf("Digite os dados do Pais %d:\n", i+1);
        for(j=0; j<12; j++){                                    //for para os jogadores de cada país
            printf("Digite a idade do jogador %d: ", j+1);
            scanf("%d", &idade[j]);
            printf("digite o peso do jogador %d: ", j+1);
            scanf("%f", &peso[j]);
            PesoMedio += peso[j];                               //soma do peso dos 12 jogadores
            IdadeMedia += idade[j];                             //soma da idade dos 12 jogadoes
            pesado = peso[0];                                   
            if(pesado < peso[j]){                               //verificar quem é o mais pesado
                pesado = peso[j];
            }   
            jovem = idade[0];
            if(jovem > idade[j]){                               //verificar quem é o mais jovem
                jovem = idade[j];
            }
        }
        IMediaTds += IdadeMedia;                                //somar a idade de todos os jogadores de cada país
        PMedioTds += PesoMedio;                                 //somar o peso de todos os jogares de cada país
        PesoMedio /= 12;                                        // calcular o peso medio dos jogadores de cada país
        IdadeMedia /= 12;                                       //calcular a idade media dos jogadores de cada país
        printf("Peso medio do time do pais %d: %.1fKg\n", i+1, PesoMedio);
        printf("Idade media do time do pais %d: %.1f Anos\n", i+1, IdadeMedia);
        printf("O mais pesado do time do pais %d: %.1f Kg\n", i+1, pesado);
        printf("O mais jovem do time do pais %d: %d Anos\n\n", i+1, jovem);
        PesoMedio = 0;      //zerano o peso medio dos jogadores para poder calcular o peso do proximo país
        IdadeMedia = 0;     //zerano a idade media dos jogadores para poder calcular a idade media do proximo país
    }
    IMediaTds /= 360;       //calculando a media da idade de todos o jogadores de todos o países
    PMedioTds /= 360;       //calculando a media do peso de todos o jogadores de todos o países
    printf("\nA idade media de todos os participantes = %.1f anos\n", IMediaTds);
    printf("O peso medio de todos os participantes = %.1f Kg\n\n", PMedioTds);
    return 0;
}

