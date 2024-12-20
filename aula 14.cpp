#include<stdio.h>
#include<string.h>
#include<locale.h>                  
 
int main()
{
  setlocale(LC_ALL, "Portuguese");
  char senha1[20], senha2[20];
  int retorno;
  printf("\nInforme a senha: ");
  gets(senha1);
  printf("\nInforme novamente a senha: ");
  gets(senha2);
  retorno = strcmp(senha1, senha2);
  if(retorno != 0)
    {
     printf("\nAs senhas informadas são diferentes! ");
	}
  else
    {
     printf("\nAs senhas informadas são identicas! ");
	}
 
}