/*Faça um programa que receba a idade de uma pessoa e classifique-a seguindo o critério
a seguir:

idade Classificação
0 a 2 anos Recém-nascido
3 a 11 anos criança
12 a 19 anos adolescente
20 a 55 anos adulto
Acima de 55 anos idoso*/

#include <stdio.h>

int main() {
    int idade;

    // Entrada da idade
    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    // Classificação da idade
    if (idade >= 0 && idade <= 2) {
        printf("Classificação: Recém-nascido\n");
    } else if (idade >= 3 && idade <= 11) {
        printf("Classificação: Criança\n");
    } else if (idade >= 12 && idade <= 19) {
        printf("Classificação: Adolescente\n");
    } else if (idade >= 20 && idade <= 55) {
        printf("Classificação: Adulto\n");
    } else if (idade > 55) {
        printf("Classificação: Idoso\n");
    } else {
        printf("Idade inválida.\n");
    }

    return 0;
}

