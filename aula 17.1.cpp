#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
 
  /*Criando a struct */
  struct ficha_de_aluno
  {
    char nome[50];
    char disciplina[30];
    float nota_prova1;
    float nota_prova2;
    float media;  
 
  };

float CalculaMediaAluno(float nota1, float nota2)
  {
 
   float resultado;
   resultado = (nota1 + nota2) / 2;
   return resultado;   	
  }  
int main()
{
 
  
  /*Criando a variável aluno que será do
  tipo struct ficha_de_aluno */
  struct ficha_de_aluno aluno[3];
 
    
  //Entrada de dados do Aluno
  for(int i=0;i<3;i++)
    {
     printf("\n---------- Cadastro de aluno -----------\n\n\n");
     printf("\nNome do aluno ......: "); 
	 fflush(stdin);
     fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);   
     aluno[i].nome[strcspn(aluno[i].nome, "\n")] = '\0';	   
     printf("\nDisciplina ......: ");
     fgets(aluno[i].disciplina, sizeof(aluno[i].disciplina), stdin);   
     aluno[i].disciplina[strcspn(aluno[i].disciplina, "\n")] = '\0';	         
     printf("\nInforme a 1a. nota ..: ");  
     scanf("%f", &aluno[i].nota_prova1);  
     printf("\nInforme a 2a. nota ..: ");
     scanf("%f", &aluno[i].nota_prova2); 
     system("cls"); 
	}
 
   //Calcula Media dos Alunos
   for(int i=0;i<3;i++)
     {
       float resultado;
       resultado = CalculaMediaAluno(aluno[i].nota_prova1, aluno[i].nota_prova2);
       aluno[i].media = resultado;
	 }
   //Imprimir a média dos Alunos
   printf("\n----------------------------------- Media dos Alunos ------------------------------\n");
   printf("Nome Aluno\t\t\tDisciplina\t\tMedia Final\n");   
   for(int i=0;i<3;i++)
     {
       printf("%s", aluno[i].nome);
	   printf("\t\t\t%s", aluno[i].disciplina);
	   printf("\t\t%.2f\n", aluno[i].media);
	 }
  getch();
  return(0);
}