/*Fa�a um programa que receba dois n�meros e imprima o menor dos dois.*/
#include <stdio.h>

int main() {
	// Variav�is
    float num1, num2;

    // Entrada dos dois n�meros
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%f", &num2);

    // Verifica e imprime o menor n�mero
    if (num1 < num2) {
        printf("O menor n�mero �: %.2f\n", num1);
    } else if (num2 < num1) {
        printf("O menor n�mero �: %.2f\n", num2);
    } else {
        printf("Os dois n�meros s�o iguais: %.2f\n", num1);
    }

    return 0;
}

