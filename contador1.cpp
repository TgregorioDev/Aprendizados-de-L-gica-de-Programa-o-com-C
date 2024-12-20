#include<stdio.h>
#include<locale.h>
//LAÇO DE REPETIÇÃO
//OBJETIVO
//   REPETIR UMA INSTRUÇÃO OU UM CONJUTO DE INSTRUÇÕES EM UMA CERTA QUANTIDADE ESTIPULADA NO PROGRAMA   
//
//O QUE É NECESSÁRIO PARA EXECUTAR O LAÇO DE REPETIÇÃO
//1 - DEFINIR UMA VARIÁVEL QUE SERÁ UM CONTADOR
//2 - INICIAR O CONTADOR
//3 - DEFINIR A CONDIÇÃO PARA REPETIÇÃO DO LAÇO
//4 - INCREMENTO DO CONTADR
int contador, quantidade_repeticoes;
 
int main()
{
setlocale(LC_ALL, "Portuguese");
printf("Informe o Quantidade de Repetiçoes: ");
scanf("%d", &quantidade_repeticoes);
 
for(contador = 0; contador <= quantidade_repeticoes; contador++)
   {
   	printf("\n %d ", contador);  
	printf("\nLaço de Repeticao");	    	
   }
}
