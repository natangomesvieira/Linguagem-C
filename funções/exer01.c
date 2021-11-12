#include <stdio.h>
#include <stdlib.h>

int main () {
    char Nome(); // declarando a função na main
    
    Nome(); // chamando a função
    return 0;
}
// função para receber e exibir o nome digitado
char Nome(){
    char nome[50];                      // nome com limite de ate 50 caracter
    printf("Digite o seu nome:");
    scanf("%[^\n]s",&nome);             // %[^\n]s foi usando para ler os espaços digitados pelo usuario caso digite sobrenome

    printf("o nome digitado foi %s",nome);
    return nome;
}