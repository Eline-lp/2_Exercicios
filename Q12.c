/*Faça um programa que receba três notas de um aluno, calcule e imprima a média
aritmética entre essas três notas e uma mensagem que segue a tabela abaixo:
Média Mensagem
0.0 |__ 5.0 reprovado
5.0 |__ 7.0 exame
7.0 |__| 10.0 aprovado*/
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    // Entrada das notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Cálculo da média
    media = (nota1 + nota2 + nota3) / 3.0;

    // Exibe a média
    printf("Média: %.2f\n", media);

    // Saída conforme a média
    if (media < 5.0) {
        printf("Reprovado\n");
    } else if (media < 7.0) {
        printf("Exame\n");
    } else {
        printf("Aprovado\n");
    }

    return 0;
}

