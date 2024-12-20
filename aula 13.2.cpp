#include<stdio.h>
#include<string.h>
#include<locale.h>                  
 
int main()
{
  setlocale(LC_ALL, "Portuguese");
  char nome[20], sobrenome[20];
  int tamanho_variavel;
  printf("\nInforme o seu nome: ");
  gets(nome);
  printf("\nInforme seu sobrenome: ");
  gets(sobrenome);
  strcat(nome, " ");
  strcat(nome, sobrenome);
  printf("%s", nome); 
  tamanho_variavel = strlen(nome);
  printf("\nTamanho da variavel nome: %d", tamanho_variavel);  
  printf("\nTamanho da variavel nome: %d", strlen(nome));
 
}