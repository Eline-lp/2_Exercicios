/*Fa�a um programa que verifique a validade de uma senha fornecida pelo usu�rio. A senha �
um conjunto de caracteres que s�o: 'ASDFG'. O programa deve imprimir mensagem de
permiss�o ou nega��o de acesso.*/

#include <stdio.h>
#include <string.h>
 int main();
 //declara��o de vari�veis
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
