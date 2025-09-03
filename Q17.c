
#include <stdio.h>

int main() {
    int horasExtrasMin, horasFaltaMin;
    float horasExtras, horasFalta;
    float H;
    int premio;

    // Entrada
    printf("Digite o número de horas extras em minutos: ");
    scanf("%d", &horasExtrasMin);

    printf("Digite o número de horas-falta em minutos: ");
    scanf("%d", &horasFaltaMin);

    // Converte minutos para horas
    horasExtras = horasExtrasMin / 60.0;
    horasFalta = horasFaltaMin / 60.0;

    // Calcula H (em minutos)
    // Note que horasExtrasMin e horasFaltaMin já estão em minutos
    H = horasExtrasMin - (2.0 / 3.0) * horasFaltaMin;

    // Verifica o prêmio conforme tabela
    if (H > 2400) {
        premio = 500;
    } else if (H > 1800) {
        premio = 400;
    } else if (H > 1200) {
        premio = 300;
    } else if (H > 600) {
        premio = 200;
    } else {
        premio = 100;
    }

    // Saída
    printf("\nHoras extras: %.2f horas\n", horasExtras);
    printf("Horas-falta: %.2f horas\n", horasFalta);
    printf("Valor do prêmio: R$ %d\n", premio);

    return 0;
}

