/*Faça um programa que receba a idade de uma pessoa e imprima mensagem de maioridade
ou não.*/
#include <stdio.h>

int main() {
    int idade;

    // Entrada da idade
    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    // Verifica se é maior ou menor de idade
    if (idade >= 18) {
        printf("A pessoa é maior de idade.\n");
    } else {
        printf("A pessoa é menor de idade.\n");
    }

    return 0;
}

