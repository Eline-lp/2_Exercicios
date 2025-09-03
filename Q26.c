#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    float resultado;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &op);  

    if (op == '+') {
        resultado = num1 + num2;
        printf("Resultado: %.2f\n", resultado);
    } else if (op == '-') {
        resultado = num1 - num2;
        printf("Resultado: %.2f\n", resultado);
    } else if (op == '*') {
        resultado = num1 * num2;
        printf("Resultado: %.2f\n", resultado);
    } else if (op == '/') {
        if (num2 == 0) {
            printf("Erro: divisão por zero não é permitida.\n");
        } else {
            resultado = (float)num1 / num2;
            printf("Resultado: %.2f\n", resultado);
        }
    } else {
        printf("Operação inválida.\n");
    }

    return 0;
}

