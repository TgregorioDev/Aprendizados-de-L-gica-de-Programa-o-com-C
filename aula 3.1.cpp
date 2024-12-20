#include<stdio.h>
int main()
{
float lucro_gasolina, lucro_etanol, lucro_diesel, lucro_total;

printf("Informe o lucro total de gasolina R$: ");
scanf("%f", &lucro_gasolina);
printf("Informe o lucro toal de etanol R$: ");
scanf("%f", &lucro_etanol);
printf("Informe o lucro total de diesel R$:");
scanf("%f", &lucro_total);

 lucro_total = lucro_gasolina + lucro_etanol + lucro_diesel;
 printf("Lucro Total: R$ %.3f", lucro_total);



}
