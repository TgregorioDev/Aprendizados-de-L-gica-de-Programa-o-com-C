#include <stdio.h>
#include <locale>
int ano;
int resto;
int main()
{
setlocale(LC_ALL, "Portuguese");
printf("Informe o Ano: ");
scanf("%d", &ano);
resto = (ano % 4);
if(resto==0)
  {
   printf("\nO ano informado é Bissexto");
  }
else
  {
   printf("\nO ano Informado não é Bissexto");
  }
}