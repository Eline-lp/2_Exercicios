/*Fa�a um programa que mostre um menu com as seguintes op��es:
� soma
� raiz quadrada
� finalizar
O programa deve receber a op��o desejada, receber os dados necess�rios para a
opera��o de cada op��o, realizar a opera��o e imprimir o resultado. Na op��o
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
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite o primeiro n�mero: ");
                scanf("%f", &num1);
                printf("Digite o segundo n�mero: ");
                scanf("%f", &num2);
                resultado = num1 + num2;
                printf("Resultado da soma: %.2f\n", resultado);
                break;

            case 2:
                printf("Digite um n�mero para calcular a raiz quadrada: ");
                scanf("%f", &num1);
                if (num1 < 0) {
                    printf("N�mero inv�lido! N�o existe raiz quadrada de n�mero negativo.\n");
                } else {
                    resultado = sqrt(num1);
                    printf("Raiz quadrada de %.2f � %.2f\n", num1, resultado);
                }
                break;

            case 3:
                printf("Finalizando o programa...\n");
                break;

            default:
                printf("Op��o inv�lida! Tente novamente.\n");
        }
    } while(opcao != 3);

    return 0;
}

