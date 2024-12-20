#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
 
  /*Criando a struct */
  struct ficha_de_aluno
  {
    char nome[50];
    char disciplina[50];
    float nota_prova1;
    float nota_prova2;
    float media;  
 
  };
 

int main()
{
 
  setlocale(LC_ALL, "Portuguese");  
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
     printf("\nMédia do Aluno: %.2f", (aluno[i].nota_prova1 + aluno[i].nota_prova2)/2);
     getch();     
     system("cls"); 
	}

 
  return(0);
}