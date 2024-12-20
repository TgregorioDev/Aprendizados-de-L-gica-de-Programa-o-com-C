#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct calculo_da_comissao {
		char nome_do_vendedor[50];
		float venda_mensal;
		float valor_da_comissao;
	};
	
	struct calculo_da_comissao comissao;
	
	printf("Digite o nome do vendedor: ");
	fgets(comissao.nome_do_vendedor, 50, stdin);
	
	printf("\nDigite o valor de vendas mensal: ");
	scanf("%d", &comissao.venda_mensal);
	
	if(comissao.venda_mensal >= 100000.00 && comissao.venda_mensal < 200000.00){
		comissao.valor_da_comissao = comissao.venda_mensal * 0.01;
		
	} else if (comissao.venda_mensal >= 200000.00 && comissao.venda_mensal < 300000.00){
		comissao.valor_da_comissao = comissao.venda_mensal * 0.02;

	} else if (comissao.venda_mensal >= 300000.00){
		comissao.valor_da_comissao = comissao.venda_mensal * 0.03;
		
	}else {
		comissao.valor_da_comissao = 0.0;
		
	}
	
	float calculo_da_comissao = comissao.valor_da_comissao;
	
	printf("\n O valor da comissao foi de: %.2f ", comissao.valor_da_comissao);
	
	
	
	
	return 0;
}
