/* 5-Faça um programa que calcule e imprima o salário reajustado de um funcionário de acordo
com a seguinte regra:
• salários até 300, reajuste de 50%;
• salários maiores que 300, reajuste de 30%.*/
#include <stdio.h>

int main() {
    float salario, salarioReajustado;

    // Entrada do salário
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    // Aplica o reajuste de acordo com a faixa salarial
    if (salario <= 300) {
        salarioReajustado = salario * 1.50;  // 50% de aumento
    } else {
        salarioReajustado = salario * 1.30;  // 30% de aumento
    }

    // Exibe o salário reajustado
    printf("Salário reajustado: R$ %.2f\n", salarioReajustado);

    return 0;
}

