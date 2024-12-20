#include<stdio.h>

int numero;
int main()
{
	printf("Informe um numero: ");
	scanf("%d", &numero);
	
	if(numero != 0 && numero > 0)
	{
		printf("\nVoce digitou um numero valido!");
	}
	else
	{
		printf("\nVoce digitou um numero invalido!");
	}
}