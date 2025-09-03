/*Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é
um conjunto de caracteres que são: 'ASDFG'. O programa deve imprimir mensagem de
permissão ou negação de acesso.*/

#include <stdio.h>
#include <string.h>
 int main();
 //declaração de variáveis
 char senha[20];
 //entradas de dados
 printf(" entre com a senha: ");
 scanf("%s", &senha);
 //processamento
 if(strcmp(senha, "ASDFG)==0){
 
 	prinf("acesso permitido");
 	
}else
	printf("acesso negado");
	
	
return 0;
