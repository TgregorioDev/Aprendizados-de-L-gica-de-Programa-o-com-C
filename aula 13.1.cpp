#include<stdio.h>
#include<string.h>
#include<locale.h>                   
 
int main()
{
  char nome[20], sobrenome[20];
  setlocale(LC_ALL, "Portuguese");
  printf("\nInforme o seu nome: ");
  gets(nome);
  printf("\nInforme seu sobrenome: ");
  gets(sobrenome);
  strcat(nome, " ");
  strcat(nome, sobrenome);
  printf(" %s ", nome);
 
}