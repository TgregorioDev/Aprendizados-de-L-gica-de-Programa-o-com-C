#include <stdio.h>
#include <conio.h>
int main(void){
	struct ficha_de_aluno
	{
		char nome[50];
		char disciplina[30];
		float nota_prova1;
		float nota_prova2;
	};
	
	struct ficha_de_aluno aluno;
	
	printf("\n --------- Cadastro de aluno --------- \n \n \n");
	
	printf("Nome do aluno ........: ");
	gets(aluno.nome);
	
	printf("\n Disciplina ........: ");
	
	gets(aluno.disciplina);
	
	printf("\nInforme a 1a.nota .....: ");
	
	scanf("%f", &aluno.nota_prova1);
	
	printf("\nInforme a 2a.nota .....: ");
	
	scanf("%f", &aluno.nota_prova2);
	
	printf("\n\n ------------- Lendo os dados da struct ---------- \n\n");
	printf("\nNome .........: %s", aluno.nome);
	printf("\nDisciplina ......: %s", aluno.disciplina);
	printf("\nNota da Prova 1 ...: %.2f" , aluno.nota_prova1);
  printf("\nNota da Prova 2 ...: %.2f\n" , aluno.nota_prova2);
  getch();
  return(0);
}
		
