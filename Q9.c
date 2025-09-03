/*Faça um programa que receba o preço de um produto e o seu código de orígem e imprima
a sua procedência..*/

#include <stdio.h>

int main() {
    float preco;
    int codigo;

    // Entrada de dados
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    printf("Digite o código de origem do produto: ");
    scanf("%d", &codigo);

    // Determina a procedência com base no código
    printf("Procedência: ");

    if (codigo == 1) {
        printf("Sul\n");
    } else if (codigo == 2) {
        printf("Norte\n");
    } else if (codigo == 3) {
        printf("Leste\n");
    } else if (codigo == 4) {
        printf("Oeste\n");
    } else if (codigo == 5 || codigo == 6) {
        printf("Nordeste\n");
    } else if (codigo == 7 || codigo == 8 || codigo == 9) {
        printf("Sudeste\n");
    } else if (codigo >= 10 && codigo <= 20) {
        printf("Centro-Oeste\n");
    } else if (codigo >= 21 && codigo <= 30) {
        printf("Nordeste\n");
    } else {
        printf("Código inválido.\n");
    }

    return 0;
}

