#include <stdio.h>
#include <math.h>
/*1- Fa�a um programa que receba quatro notas de um aluno, calcule e imprima a m�dia aritm�tica
das notas e a mensagem de aprovado para m�dia superior ou igual a 7.0 ou a mensagem de
reprovado para m�dia inferior a 7.0. */


int main() {
	//declara��o de variav�is
	float n1, n2, n3, n4, media=0;
	//entrada de dados
	printf("insira as 4 notas: \n");
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	//processamento
	 media=(n1+n2+n3+n4)/4;
	 //sa�das
	 if(media>=7){
	 	printf("Aprovado %2.f\n", media);
	 }else
	 	printf("Reprovado %2.f\n", media);
	 
	 
	 return 0;
	
}

