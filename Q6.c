/*6-Faça um programa que receba a altura e o sexo de uma pessoa, calcule e imprima o seu
peso ideal, utilizando as seguintes fórmulas:
• para homens: (72.7 * H) - 58;
• para mulheres: (62.1 * H) – 44.7.*/

#include <stdio.h>

int main() {
    float altura, pesoIdeal;
    char sexo;

    // Entrada de dados
    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o sexo M para masculino, F para feminino: ");
    scanf(" %c", &sexo);  // Note o espaço antes de %c para consumir o ENTER anterior

    // Cálculo do peso ideal
    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
        printf("Peso ideal para homem: %.2f kg\n", pesoIdeal);
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("Peso ideal para mulher: %.2f kg\n", pesoIdeal);
    } else {
        printf("Sexo inválido. Use 'M' para masculino ou 'F' para feminino.\n");
    }

    return 0;
}

