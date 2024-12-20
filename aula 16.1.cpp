#include <stdio.h>
#include <conio.h>
  /*Criando a struct */
  struct ficha_de_aluno
  {
    char nome[50];
    char disciplina[30];
    float nota_prova1;
    float nota_prova2;
  };
void ImprimeAuno(ficha_de_aluno Aluno)
  {
 
  printf("\n\n --------- Lendo os dados da struct ---------\n\n");
  printf("\nNome ...........: %s", Aluno.nome);
  printf("\nDisciplina ...........: %s", Aluno.disciplina);  
  printf("\nNota Prova 1 .....: %.2f", Aluno.nota_prova1);
  printf("\nNota Prova 2 .....: %.2f", Aluno.nota_prova2);  
  }
int main(void)
{
 
  
  /*Criando a variável aluno que será do
  tipo struct ficha_de_aluno */
  struct ficha_de_aluno aluno;
  printf("\n---------- Cadastro de aluno -----------\n\n\n");
  printf("Nome do aluno ......: ");
  gets(aluno.nome);  
  printf("Disciplina ......: ");
 
  gets(aluno.disciplina);
  printf("Informe a 1a. nota ..: ");
  scanf("%f", &aluno.nota_prova1);
  printf("Informe a 2a. nota ..: ");
  scanf("%f", &aluno.nota_prova2);
  ImprimeAuno(aluno);
  getch();
  return(0);
}