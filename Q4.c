/*Fa�a um programa que receba a idade de uma pessoa e imprima mensagem de maioridade
ou n�o.*/
#include <stdio.h>

int main() {
    int idade;

    // Entrada da idade
    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    // Verifica se � maior ou menor de idade
    if (idade >= 18) {
        printf("A pessoa � maior de idade.\n");
    } else {
        printf("A pessoa � menor de idade.\n");
    }

    return 0;
}

