/*Faça um programa que mostre um menu com as seguintes opções:
• soma
• raiz quadrada
• finalizar
O programa deve receber a opção desejada, receber os dados necessários para a
operação de cada opção, realizar a operação e imprimir o resultado. Na opção
finalizar nada deve acontecer.*/

#include <stdio.h>
#include <math.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        // Exibe o menu
        printf("\nMenu:\n");
        printf("1 - Soma\n");
        printf("2 - Raiz Quadrada\n");
        printf("3 - Finalizar\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite o primeiro número: ");
                scanf("%f", &num1);
                printf("Digite o segundo número: ");
                scanf("%f", &num2);
                resultado = num1 + num2;
                printf("Resultado da soma: %.2f\n", resultado);
                break;

            case 2:
                printf("Digite um número para calcular a raiz quadrada: ");
                scanf("%f", &num1);
                if (num1 < 0) {
                    printf("Número inválido! Não existe raiz quadrada de número negativo.\n");
                } else {
                    resultado = sqrt(num1);
                    printf("Raiz quadrada de %.2f é %.2f\n", num1, resultado);
                }
                break;

            case 3:
                printf("Finalizando o programa...\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while(opcao != 3);

    return 0;
}

