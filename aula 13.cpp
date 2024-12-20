#include <stdio.h>
#include <locale.h>
#include <string.h>
int main ()
{
  setlocale(LC_ALL, "Portuguese"); 
  char str1[30], str2[30], str3[30], str4[30];
  printf("\nDigite uma string: ");
  gets(str1);
  //Copia a str1 para a str2
  strcpy(str2, str1);
  //Copia o texto para a str4
  strcpy(str3, " GREGORIO VAZ TELES");
  printf("\n%s%s\n\n", str2, str3);
}