#include <stdio.h>

//[0][0] = 100000.00
//[0][1] = 1.0;
//[1][0] = 200000.00
//[1][1] = 2.0;
//[2][0] = 300000.00
//[2][1] = 3.0;
double calcula_comissao(double valor_vendas, double valor_percentual);
int main ()
{
  double valores[3][2];                                    //LINHA   COLUNA            LINHA    COLUNA
  valores[0][0] = 100000.00;                                         
  valores[0][1] = 1.0;                                     //    0   0  100000.00        0        1    1.0
  valores[1][0] = 200000.00;                               //    1   0  200000.00        1        1    2.0
  valores[1][1] = 2.0;                                     //    2   0  300000.00        2        1    3.0
  valores[2][0] = 300000.00;
  valores[2][1] = 3.0;  
  double valor_vendas, valor_percentual, valor_comissao;  
    
  for(int linha=0;linha<3;linha++)
    {
	 valor_vendas = valores[linha][0];
	 valor_percentual = valores[linha][1];
	 valor_comissao = calcula_comissao(valor_vendas, valor_percentual);    
     printf("\nO valor da comissao para o valor de vendas e de: %.2lf e o valor de comissao e de: %.2lf", valor_vendas, valor_comissao);
    }
}  
 
double calcula_comissao(double valor_vendas, double valor_percentual)
{
    float valor_comissao;
    valor_comissao = (valor_vendas * valor_percentual)/100;
    return valor_comissao; 	   
}