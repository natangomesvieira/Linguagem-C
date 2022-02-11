#include <stdio.h>
/*No dia da estréia do filme "Procurando Dory", uma grande emissora de TV realizou 
uma pesquisa logo após o encerramento do filme. Cada espectador respondeu
a um questionário no qual constava sua idade e a sua opinião em relação ao filme:
excelente - 3; bom - 2; regular - 1. Criar um programa que receba a idade e a
opinião de 20 espectadores, calcule e imprima:
• A média das idades das pessoas que responderam excelente;
• A quantidade de pessoas que responderam regular;
• A percentagem de pessoas que responderam bom entre todos os expectadores analisados.*/
int main(int argc, char const *argv[]){
    //declaracao de variavel
    int idade[20], op[20], i=0, cont=0, PessoasRegular=0;
    float media=0, porcentagem, qntPor=0;

    //recebendo os dados do usuario
    for(i=0; i<20; i++){
        printf("Espectador %d:\n", i+1);
        printf("Digite a sua idade: ");
        scanf("%d", &idade[i]);
        printf("Qual a sua opniao sobre o filme:\n3-Excelente\n2-Bom\n1-Regular\n");
        scanf("%d", &op[i]);
    }
    //verificando as condicoes exigida do progama
    for(i=0; i<20; i++){
        if(op[i] == 3){             //se a opcao 3 for escolhida 
            media += idade[i];      //calcular a media da idade das pessoas 
            cont++;                 //contador para saber quantas pessoas escolheram a op EXCELENTE
        }
        else if(op[i] == 1){        //se a opcao 1 for escolhida
            PessoasRegular++;       //contador para saber quantas pessoas escolheram a op REGULAR
        }
        else if(op[i] == 2){        //se a opcao 2 for escolhida
            qntPor++;               //contador para saber quantas pessoas escolheram a op BOM
        }
    }

    //calcular a porcentagem de pessoas que escolheram a op BOM
    porcentagem = (qntPor / 20) * 100;          

    //se ninguem escolher a op EXCELENTE entao a media eh igual a zero
    if(cont == 0){                              
        media = 0;
    }
    //se alguem escolher a opcao EXCLENTE entao a media sera calculada
    else{
        media = media / cont;                   
    }

    //exibindo os resultados do programa
    printf("Idade media das pessoas que responderam Excelente: %.1f anos\n", media);
    printf("Quantidade de pessoas que responderam regular: %d\n", PessoasRegular);
    printf("Porcentagem de pessoas que responderam Bom entre todo mundo: %.1f porcento", porcentagem);

    return 0;
}
