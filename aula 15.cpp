#include <stdio.h>
 
double calcula_comissao(double valor_vendas, double valor_percentual);
int main ()
{
  double valor_vendas, valor_percentual, valor_comissao;  

  printf("\nInforme o Valor de Vendas: ");
  scanf("%lf", &valor_vendas);
  
  printf("\nInforme o Valor de Percentual de Comissao: ");
  scanf("%lf", &valor_percentual);
  
  valor_comissao = calcula_comissao(valor_vendas, valor_percentual);    
  printf("\nO valor da comissao para o valor de vendas e de %.2lf e o valor da comissao e de %.2lf", valor_vendas, valor_comissao);
}  
 
double calcula_comissao(double valor_vendas, double valor_percentual)
{
    float valor_comissao;
    valor_comissao = (valor_vendas * valor_percentual)/100;
    return valor_comissao; 	   
}