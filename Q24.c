/*Escreva um programa que leia três valores inteiros e mostre-os em ordem crescente.*/
#include <stdio.h>

int main() {
    int a, b, c, temp;

    printf("Digite três números inteiros:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Ordena usando troca simples (bubble sort em 3 elementos)
    if (a > b) {
        temp = a; a = b; b = temp;
    }
    if (a > c) {
        temp = a; a = c; c = temp;
    }
    if (b > c) {
        temp = b; b = c; c = temp;
    }

    printf("Números em ordem crescente: %d %d %d\n", a, b, c);

    return 0;
}

