/*Faça um programa que receba o código correspondente ao cargo de um funcionário e
imprima seu cargo e o percentual de aumento ao qual este funcionário tem direito seguindo
a tabela:

Código Cargo Percentual
1 Escriturário 50,00%
2 Secretário 35,00%
3 Caixa 20,00%
4 Gerente 10,00%
5 Diretor Não tem aumento*/
#include <stdio.h>

int main() {
    int codigo;//Variaveis

    printf("Digite o código do cargo (1 a 5): ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Cargo: Escriturário\n");
            printf("Percentual de aumento: 50%%\n");
            break;
        case 2:
            printf("Cargo: Secretário\n");
            printf("Percentual de aumento: 35%%\n");
            break;
        case 3:
            printf("Cargo: Caixa\n");
            printf("Percentual de aumento: 20%%\n");
            break;
        case 4:
            printf("Cargo: Gerente\n");
            printf("Percentual de aumento: 10%%\n");
            break;
        case 5:
            printf("Cargo: Diretor\n");
            printf("Não tem aumento.\n");
            break;
        default:
            printf("Código inválido.\n");
    }

    return 0;
}

