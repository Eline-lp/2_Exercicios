/* 5-Fa�a um programa que calcule e imprima o sal�rio reajustado de um funcion�rio de acordo
com a seguinte regra:
� sal�rios at� 300, reajuste de 50%;
� sal�rios maiores que 300, reajuste de 30%.*/
#include <stdio.h>

int main() {
    float salario, salarioReajustado;

    // Entrada do sal�rio
    printf("Digite o sal�rio do funcion�rio: ");
    scanf("%f", &salario);

    // Aplica o reajuste de acordo com a faixa salarial
    if (salario <= 300) {
        salarioReajustado = salario * 1.50;  // 50% de aumento
    } else {
        salarioReajustado = salario * 1.30;  // 30% de aumento
    }

    // Exibe o sal�rio reajustado
    printf("Sal�rio reajustado: R$ %.2f\n", salarioReajustado);

    return 0;
}

