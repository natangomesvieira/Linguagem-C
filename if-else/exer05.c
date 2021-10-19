#include <stdio.h>
#include <stdlib.h>

int main () {
    //declarando as variaveis
    float numero1, numero2, diferenca, produto, divisao;
    int menu;
    //recebendo os dois numeros 
    printf("Digite o primeiro numero:");
    scanf("%f", &numero1);
    printf("Digite o segundo numero:");
    scanf("%f", &numero2);

    //exibindo o menu para o usuario
    printf("Escolha uma opcao\n1-Media entre os numeros digitados\n2-Diferenca entre os numeros digitados\n3-Produto entre os numeros digitados\n4-Divisao do primeiro pelo segundo\n");
    scanf("%d", &menu);
    //se opcao escolhida for 1 entra aqui
    if (menu == 1){
        float media;
        media = (numero1 + numero2) / 2;
        printf("A media dos dois numeros = %.2f", media);
    }
    //se opcao escolhida for 2 entra aqui
    else if (menu == 2){
        //se numero 1 for maior que o numero 2
       if (numero1 > numero2){
           diferenca = numero1 - numero2;
           printf("Diferenca entre o maior pelo menor = %.2f",diferenca);
       }
       //se numero 2 for maior que o numero 1
       else if (numero2 > numero1){
           diferenca = numero2 - numero1;
           printf("Diferenca entre o maior pelo menor = %.2f",diferenca);
       }
       //se numero 1 for igual ao numero 2
        else {
           diferenca = numero1 - numero2;
            printf("Diferenca entre os numeros = %.2f",diferenca);
        }
    }
    //se opcao escolhida for 3 entra aqui
    else if (menu == 3){
        produto = numero1 * numero2;
        printf("O produto entre os numeros = %.2f",produto);
    }
    //se opcao escolhida for 4 entra aqui
    else if (menu == 4){
        //se numero 2 for diferente de zero
        if(numero2 != 0){
            divisao = numero1 / numero2;
            printf("A divisao entre os dois numeros = %.2f",divisao);
        }
        //se numero 2 for igual a zero
        else {
            printf("O segundo numero deve  ser diferente de 0");
        }
    }
    //se opcao escolhida nao existir entra aqui
    else {
        printf("Opcao invalida");
    }
    return 0;
}