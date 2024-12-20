#include<stdio.h>
#include<string.h>

int idade;
float salario;
double comissao;
char nome_funcionario[30];
double resultado;
int teste;
int main()
{
 idade = 53;
 salario = 1320.4545454589;
 comissao = 30000.542;
 resultado = salario + comissao;
 teste = 99;
 strcpy(nome_funcionario, "TIAGO GREGORIO");
 printf("TIAGO GREGORIO\n");
  printf("BaladApp\n");
  printf("%d", &idade);
  printf("%.2f \n", salario);
  printf("%.3f \n", &comissao);
  printf(nome_funcionario, "\n");
 printf("\n %.2f \n", resultado);
  printf("%d", teste);
}