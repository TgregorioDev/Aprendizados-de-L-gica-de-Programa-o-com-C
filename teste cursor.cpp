#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define LIMPA "\x1B[2J"
#define C_ESQ "\x1B[D"
#define C_DIR "\x1B[C"
#define C_SOBE "\x1B[A"
#define C_DESCE "\x1B[B"
#define SETA_ESQ 75
#define SETA_DIR 77
#define SETA_SOBE 72
#define SETA_DESCE 80
#define DUPLO_H 205
#define DUPLO_V 186
int main()
{
	int tecla;
	
	printf(LIMPA);
	
	while((tecla = getch())==0)
	{
		tecla = getch();
		switch(tecla)
		{
			case SETA_ESQ:
				printf(C_ESQ);  putch(DUPLO_H);break;
			case SETA_DIR:
			    printf(C_DIR);  putch(DUPLO_H);break;
			case SETA_SOBE:
			    printf(C_SOBE);  putch(DUPLO_V);break;
			case SETA_DESCE:
			    printf(C_DESCE); putch(DUPLO_V);break;		
		}
		printf(C_ESQ);
	}
	system("pause");
	return 0;
}