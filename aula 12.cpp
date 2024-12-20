#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int vacas, contador = 1;
	float leite, total;
	
	printf("Informe a quantidade de vacas: ");
	scanf("%d", &vacas);
	printf("Informe a quantidade de leite ordenhado por cada vaca:\n");
	
	do
	{
		printf("%d: ", contador++);
		scanf("%f", &leite);
		total += leite;
	}
	while(contador<=vacas);
	
	printf("O total de leite ordenhado foi: %.2f L",total );
	
}