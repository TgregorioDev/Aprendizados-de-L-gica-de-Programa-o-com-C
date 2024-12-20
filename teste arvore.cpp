#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	char sd, se;
	int i, k, j;
	system("cls");
	printf("\nSinal interno direito: ");
	sd = getche();
	printf("\nSinal interno esquerdo: ");
	se = getche();
	
	printf("\n\n");
	
	for(i=0; i < 4; i++)
	{
		for(k=1; k < 5; k++)
		{
			for(j=1; j<= 40-(2*i+k); j++)
			printf(" ");
			printf("/");
			for(j=1; j < (2*i+k); j++)
			  printf("%c", se);
			for(j=1; j < (2*i+k); j++)
			  printf("%c", sd);
			printf("\\\n");
		}
	}
	
	for(i=0; i < 2; i++)
	{
		for(j=0; j < 38; j++) printf(" ");
		printf("| |\n");
	}
	printf("\n");;
	for(j=0; j < 35; j++) printf(" ");
	printf("FELIZ NATAL\n");
	for(j=0; j < 31; j++) printf(" ");
    printf("E UM PROSPERO 2025!\n");
    system("PAUSE");
    return 0;
}