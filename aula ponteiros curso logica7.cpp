#include<stdio.h>
#include<conio.h>

int main()
{
	int valor = 10;
	int *ptr;
	
	ptr = &valor;
	
	printf("Conteudo da variavel valor: %d\n", valor);
	printf("Endereço da variavel valor: &x \n", &valor);
	printf("Conteudo da variavel ponteiro ptr: %d \n", *ptr);
	printf("Endereco do ponteiro ptr: %x", &ptr);
}