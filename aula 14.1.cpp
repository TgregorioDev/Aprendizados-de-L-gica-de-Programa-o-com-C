#include<stdio.h>
#include<string.h>
#include<locale.h>                  
 
int main()
{
  setlocale(LC_ALL, "Portuguese");
  char numero1[20], numero2[20];
  int retorno;
  printf("\nInforme o numero 1: ");
  gets(numero1);
  printf("\nInforme o numero 2: ");
  gets(numero2);
  retorno = strcmp(numero1, numero2);
  //Retorno = 0 - variaveis são identicas
  //Retorno < 0 - variavel 1 é maior que a variavel 2
  //Retorno > 0 - variavel 1 é menor que a variavel 2
  printf("\nRetorno da execucao da instruacao strcmp: %d", retorno);
  if(retorno < 0)
    {
     printf("\nO numero 1 eh maior que o numero 2! ");
	}
  if(retorno > 0)
    {
     printf("\nO numero 1 eh menor que o numero 2! ");    	
	}
  if(retorno == 0)
    {
     printf("\nO numero 1 eh igual o numero 2! ");    	
	}	
}
