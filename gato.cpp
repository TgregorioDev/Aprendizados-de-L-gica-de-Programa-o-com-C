#include <stdio.h>
#include <string.h>
//Gasto com nosso gatinho
int main(){
	
float valor_alimento, valor_areia, valor_caixa, valor_gaiola, valor_vacina, valor_total;

 printf("Informe o valor do alimento: ");
 scanf("%f", &valor_alimento);
 printf("Informe o valor da areia: ");
 scanf("%f", &valor_areia);
 printf("Informe o valor da caixa: ");
 scanf("%f", &valor_caixa);
 printf("Informe o valor da gaiola: ");
 scanf("%f", &valor_gaiola);
 printf("Iforme o valor da vacina: ");
 scanf("%f", &valor_vacina);
 
 valor_total = valor_alimento + valor_areia + valor_caixa + valor_gaiola + valor_vacina;
 printf("\nValor total dos produtos: R$ %.2f", valor_total);

    

}
