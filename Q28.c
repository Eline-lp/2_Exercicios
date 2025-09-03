#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite os tr�s lados do tri�ngulo (inteiros): ");
    scanf("%d %d %d", &a, &b, &c);

    // Verifica se formam tri�ngulo
    if (a < b + c && b < a + c && c < a + b) {
        // Verifica o tipo
        if (a == b && b == c) {
            printf("Tri�ngulo Equil�tero\n");
        } else if (a == b || b == c || a == c) {
            printf("Tri�ngulo Is�sceles\n");
        } else {
            printf("Tri�ngulo Escaleno\n");
        }
    } else {
        printf("Os lados n�o formam um tri�ngulo.\n");
    }

    return 0;
}

