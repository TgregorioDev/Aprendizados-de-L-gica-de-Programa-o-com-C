//estudo das structs corretamente 
#include <stdio.h>
int main(void)
{

	struct ficha_aluno //tipo de dado
	{
	  int numero;
	  float nota;
	  char nome[40];
	};//definiçao da struct
	
	struct ficha_aluno aluno;
	
	printf("\n-------- Cadastro de Aluno --------\n\n\n");
	
	printf("Nome do aluno......: ");
	fgets(aluno.nome, 40, stdin);
	
	printf("Digite o numero do aluno: ");
	scanf("%d", &aluno.numero);
	
	printf("Informe a nota do aluno: ");
	scanf("%f", &aluno.nota);
	
	printf("\n\n ------- Lendo os dados da struct ------- \n\n");
	printf("Nome .......: %s", aluno.nome);
	printf("Numero......: %d \n", aluno.numero);
	printf("Nota........: %.2f \n", aluno.nota);
	
	
	return(0);
		
}