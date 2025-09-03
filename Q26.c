#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    float resultado;

    printf("Digite o primeiro n�mero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero inteiro: ");
    scanf("%d", &num2);

    printf("Digite a opera��o (+, -, *, /): ");
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
            printf("Erro: divis�o por zero n�o � permitida.\n");
        } else {
            resultado = (float)num1 / num2;
            printf("Resultado: %.2f\n", resultado);
        }
    } else {
        printf("Opera��o inv�lida.\n");
    }

    return 0;
}

