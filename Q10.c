/*Faça um programa que receba um número, verifique se este número é par ou ímpar e
imprima a mensagem.*/

#include <stdio.h>

int main() {
    int numero;

    // Entrada do número
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verifica se é par ou ímpar
    if (numero % 2 == 0) {
    // Saída
        printf("O número é par.\n");
    } else {
        printf("O número é ímpar.\n");
    }

    return 0;
}


