/*Fa�a um programa que receba tr�s notas de um aluno, calcule e imprima a m�dia
aritm�tica entre essas tr�s notas e uma mensagem que segue a tabela abaixo:
M�dia Mensagem
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

    // C�lculo da m�dia
    media = (nota1 + nota2 + nota3) / 3.0;

    // Exibe a m�dia
    printf("M�dia: %.2f\n", media);

    // Sa�da conforme a m�dia
    if (media < 5.0) {
        printf("Reprovado\n");
    } else if (media < 7.0) {
        printf("Exame\n");
    } else {
        printf("Aprovado\n");
    }

    return 0;
}

