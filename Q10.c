/*Fa�a um programa que receba um n�mero, verifique se este n�mero � par ou �mpar e
imprima a mensagem.*/

#include <stdio.h>

int main() {
    int numero;

    // Entrada do n�mero
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    // Verifica se � par ou �mpar
    if (numero % 2 == 0) {
    // Sa�da
        printf("O n�mero � par.\n");
    } else {
        printf("O n�mero � �mpar.\n");
    }

    return 0;
}


