#include<stdio.h>
int main()

{
float valor_vendas, valor_comissao;
char nome_vendedor[30];

	printf("Informe o valor de vendas: ");
	scanf("%f", &valor_vendas);
	if (valor_vendas >= 100000.00 && valor_vendas <= 199999.99)
	{ valor_comissao = (valor_vendas * 0.01);
	}
	if (valor_vendas >= 200000.00 && valor_vendas < 299999.99)
	{ valor_comissao = (valor_vendas * 0.02);
	}
	if (valor_vendas >= 300000.00){
	
		valor_comissao = (valor_vendas *0.03);
	}
	printf("\nO valor da Comissao e de: %.2f", valor_comissao);

     return 0;	
 }