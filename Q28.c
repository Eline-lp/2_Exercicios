#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite os três lados do triângulo (inteiros): ");
    scanf("%d %d %d", &a, &b, &c);

    // Verifica se formam triângulo
    if (a < b + c && b < a + c && c < a + b) {
        // Verifica o tipo
        if (a == b && b == c) {
            printf("Triângulo Equilátero\n");
        } else if (a == b || b == c || a == c) {
            printf("Triângulo Isósceles\n");
        } else {
            printf("Triângulo Escaleno\n");
        }
    } else {
        printf("Os lados não formam um triângulo.\n");
    }

    return 0;
}

