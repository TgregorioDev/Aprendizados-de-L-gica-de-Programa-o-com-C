#include<stdio.h>
#include<cstring>
int main()
{
	int idade;
	char nome[50];
	char sexo;
	double salario;
	
	idade = 32;
	salario = 4560.9;
	strcpy(nome, "Maria Silva");
	sexo = 'F';
	
	printf("A funcionaria %s, sexo %c, ganha %2.lf e tem %d anos", nome, sexo, salario, idade);
	
	return 0;
	
	}