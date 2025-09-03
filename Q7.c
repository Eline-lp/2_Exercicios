/*7-Faça um programa que receba a idade de um nadador e imprima a sua categoria seguindo
as regras:
categoria idade
infantil A 5 – 7 anos
infantil B 8 – 10 anos
juvenil A 11 – 13 anos
juvenil B 14 – 17 anos
sênior maiores de 18 anos*/
#include <stdio.h>

int main() {
    int idade;

    // Entrada da idade
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    // Verifica a categoria de acordo com a idade
    if (idade >= 5 && idade <= 7) {
        printf("Categoria: Infantil A\n");
    } else if (idade >= 8 && idade <= 10) {
        printf("Categoria: Infantil B\n");
    } else if (idade >= 11 && idade <= 13) {
        printf("Categoria: Juvenil A\n");
    } else if (idade >= 14 && idade <= 17) {
        printf("Categoria: Juvenil B\n");
    } else if (idade >= 18) {
        printf("Categoria: Sênior\n");
    } else {
        printf("Idade fora das categorias.\n");
    }

    return 0;
}

