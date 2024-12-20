#include <stdio.h>
#include <locale.h>

int idade_minima, idade_maxima,idade_invalida;
int idade;
int main()
{
setlocale(LC_ALL, "Portuguese");	
printf("Informe a idade Maxima: ");
scanf("%d", &idade_maxima);
	
printf("Informe a idade Minima: ");
scanf("%d", &idade_minima);
	
printf("Informe sua idade: ");
scanf("%d", &idade);
	
if(idade_minima == 0)
	{
	printf("\nIdade Minima Invalida!");
	}
if(idade_maxima == 0)
	{
	printf("\nIdade Maxima Invalida!");
	}
if(idade == 0) {
	printf("\nIdade Invalida!");
	}

if (idade !=0 && idade_minima != 0 && idade_maxima != 0)

	if (idade >= idade_minima  && idade <= idade_maxima) 
	{
	printf("Aprovado para o processo da CNH.\n ");
	}
   if (idade < idade_minima || idade > idade_maxima)
   {
	printf("Reprovado para o processo da CNH.\n ");
	}
}