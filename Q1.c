#include <stdio.h>
#include <math.h>
/*1- Faça um programa que receba quatro notas de um aluno, calcule e imprima a média aritmética
das notas e a mensagem de aprovado para média superior ou igual a 7.0 ou a mensagem de
reprovado para média inferior a 7.0. */


int main() {
	//declaração de variavéis
	float n1, n2, n3, n4, media=0;
	//entrada de dados
	printf("insira as 4 notas: \n");
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	//processamento
	 media=(n1+n2+n3+n4)/4;
	 //saídas
	 if(media>=7){
	 	printf("Aprovado %2.f\n", media);
	 }else
	 	printf("Reprovado %2.f\n", media);
	 
	 
	 return 0;
	
}

