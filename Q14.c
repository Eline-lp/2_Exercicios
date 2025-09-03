/*Fa�a um programa que receba o c�digo correspondente ao cargo de um funcion�rio e
imprima seu cargo e o percentual de aumento ao qual este funcion�rio tem direito seguindo
a tabela:

C�digo Cargo Percentual
1 Escritur�rio 50,00%
2 Secret�rio 35,00%
3 Caixa 20,00%
4 Gerente 10,00%
5 Diretor N�o tem aumento*/
#include <stdio.h>

int main() {
    int codigo;//Variaveis

    printf("Digite o c�digo do cargo (1 a 5): ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Cargo: Escritur�rio\n");
            printf("Percentual de aumento: 50%%\n");
            break;
        case 2:
            printf("Cargo: Secret�rio\n");
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
            printf("N�o tem aumento.\n");
            break;
        default:
            printf("C�digo inv�lido.\n");
    }

    return 0;
}

