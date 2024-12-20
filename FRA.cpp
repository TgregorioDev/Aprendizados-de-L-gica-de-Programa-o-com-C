#include<locale.h>
#define IDADE_MINIMA 18
#define IDADE_MAXIMA 100
//Escreva uma programa, que permita ao usuário informar uma idade. Verificar se a idade é igual ou maior que 18 ou menor ou igual a 100,
//e mostrar uma mensagem que ele está autorizado a tirar a CNH. 
//Caso contrário mostrar uma mensagem que ele não está autorizado a tirar a CNH
//Iremos utilizar os operadores lógicos && (E) e o operador || (OU)
 
int idade, idade_minima, idade_maxima;
int main()
{
setlocale(LC_ALL, "Portuguese");
printf("Informe a Idade Minima: ");
scanf("%d", &idade_minima);
printf("Informe a Idade Máxima: ");
scanf("%d", &idade_maxima);
printf("Informe a Idade: ");
scanf("%d", &idade);
 
if(idade_minima == 0)
  {
   printf("\nIdade Mínima Inválida!");
  }
 
if(idade_maxima == 0)
  {
   printf("\nIdade Máxima Inválida!");
  }
 
if(idade == 0)
  {
   printf("\nIdade Inválida!");
  }
//OPERADORES LÓGICOS DA LINGUAGEM C
//&& - E
//|| - OU
//!= - DIFERENTE
 
if(idade != 0)
  {
  	if(idade >= idade_minima && idade <= idade_maxima)
	{
	 printf("\nAutorizado para tirar CNH");
	}  
	 if(idade < idade_minima || idade > idade_maxima)
	{
	 printf("\nNão Autorizado tirar CNH");
	}
  }
}