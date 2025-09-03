#include <stdio.h>

/*2- Uma empresa decide dar um aumento de 30% aos funcionários cujo salário é inferiora 500
reais. Escreva um programa que receba o salário de um funcionário e imprima o valor do
salário reajustado ou uma mensagem caso o funcionário não tenha direito ao aumento.*/
int main() {
    float salario, salarioReajustado;

    // Entrada do salário
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    // Verifica se o salário é inferior a 500
    if (salario < 500) {
        salarioReajustado = salario * 1.30; // Aplicando o  aumento de 30%
        printf("Salário reajustado: R$ %.2f\n", salarioReajustado);
    } else {
        printf("O funcionário não tem direito ao aumento.\n");
    }

    return 0;
}
