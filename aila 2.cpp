#include <stdio.h>
float nota1, nota2, media;
float media_aprovacao;
int main()
{
printf("Informe a media de aprovacao: ");
scanf("%f", &media_aprovacao);

printf("Informe a nota 1: ");
scanf("%f", &nota1);

printf("informe a nota 2: ");
scanf("%f", &nota2);

media = (nota1 + nota2)/2;

printf("media do aluno foi: %.1f", media);
if(media >= media_aprovacao)
{
printf("\nAluno Aprovado");  	
}
else 
{
printf("\nAluno Reprovado");  
}
}