
/*QUEST�O 8- Recebe tr�s notas, calcula m�dia e...*/
#include <stdio.h>

int main() {
    float notaLab, notaSemestral, notaExame, mediaFinal;

    // Entrada das 3 notas
    printf("Digite a nota do trabalho de laborat�rio (0 a 10): ");
    scanf("%f", &notaLab);

    printf("Digite a nota da avalia��o semestral (0 a 10): ");
    scanf("%f", &notaSemestral);

    printf("Digite a nota do exame final (0 a 10): ");
    scanf("%f", &notaExame);

    // C�lculo da m�dia ponderada
    mediaFinal = (notaLab * 2 + notaSemestral * 3 + notaExame * 5) / 10;

    // Exibe a m�dia final
    printf("M�dia final: %.2f\n", mediaFinal);

    // Determina e imprime o conceito
    if (mediaFinal >= 8.0 && mediaFinal <= 10.0) {
        printf("Conceito: A\n");
    } else if (mediaFinal >= 7.0) {
        printf("Conceito: B\n");
    } else if (mediaFinal >= 6.0) {
        printf("Conceito: C\n");
    } else if (mediaFinal >= 5.0) {
        printf("Conceito: D\n");
    } else {
        printf("Conceito: E\n");
    }

    return 0;
}

