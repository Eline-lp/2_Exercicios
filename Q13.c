/*Fa�a um programa que receba a idade de uma pessoa e classifique-a seguindo o crit�rio
a seguir:

idade Classifica��o
0 a 2 anos Rec�m-nascido
3 a 11 anos crian�a
12 a 19 anos adolescente
20 a 55 anos adulto
Acima de 55 anos idoso*/

#include <stdio.h>

int main() {
    int idade;

    // Entrada da idade
    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    // Classifica��o da idade
    if (idade >= 0 && idade <= 2) {
        printf("Classifica��o: Rec�m-nascido\n");
    } else if (idade >= 3 && idade <= 11) {
        printf("Classifica��o: Crian�a\n");
    } else if (idade >= 12 && idade <= 19) {
        printf("Classifica��o: Adolescente\n");
    } else if (idade >= 20 && idade <= 55) {
        printf("Classifica��o: Adulto\n");
    } else if (idade > 55) {
        printf("Classifica��o: Idoso\n");
    } else {
        printf("Idade inv�lida.\n");
    }

    return 0;
}

