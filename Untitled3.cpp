#include<stdio.h>
int idade;
float salario;
char nome[50];
int main()
{

    printf("Informe seu nome: "); 
    fgets(nome, sizeof(nome), stdin);
	printf("informe a idade: ");
	scanf("%d",&idade);
	printf("\nInforme o salario: ");
	scanf("%f", &salario);
	printf("\nIdade Informada: %d",idade);
	printf("\nSalario Informado: %.2f",salario);
	printf("\nSeu nome : %s", nome);
	
	
	

	 
	
	
	
}
