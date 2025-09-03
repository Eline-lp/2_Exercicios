/*Faça um programa que receba dois números e imprima o menor dos dois.*/
#include <stdio.h>

int main() {
	// Variavéis
    float num1, num2;

    // Entrada dos dois números
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Verifica e imprime o menor número
    if (num1 < num2) {
        printf("O menor número é: %.2f\n", num1);
    } else if (num2 < num1) {
        printf("O menor número é: %.2f\n", num2);
    } else {
        printf("Os dois números são iguais: %.2f\n", num1);
    }

    return 0;
}

