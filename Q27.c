#include <stdio.h>

int main() {
    int num;
    char quale[20]; 

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num > 0) {
        sprintf(quale, "NUMERO POSITIVO");
    } else {
        if (num < 0) {
            sprintf(quale, "NUMERO NEGATIVO");
        } else {
            sprintf(quale, "zero");
        }
    }

    printf("%s\n", quale);

    return 0;
}

