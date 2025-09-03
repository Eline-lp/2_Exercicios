#include <stdio.h>

/*2- Uma empresa decide dar um aumento de 30% aos funcion�rios cujo sal�rio � inferiora 500
reais. Escreva um programa que receba o sal�rio de um funcion�rio e imprima o valor do
sal�rio reajustado ou uma mensagem caso o funcion�rio n�o tenha direito ao aumento.*/
int main() {
    float salario, salarioReajustado;

    // Entrada do sal�rio
    printf("Digite o sal�rio do funcion�rio: ");
    scanf("%f", &salario);

    // Verifica se o sal�rio � inferior a 500
    if (salario < 500) {
        salarioReajustado = salario * 1.30; // Aplicando o  aumento de 30%
        printf("Sal�rio reajustado: R$ %.2f\n", salarioReajustado);
    } else {
        printf("O funcion�rio n�o tem direito ao aumento.\n");
    }

    return 0;
}
