 #include<stdio.h>
 int nota0,nota1,nota2,nota3,nota4,media;

int main()
{
int media;
 printf("Digite a notado aluno0: ");
 scanf("%d", &nota0);
 printf("Digite a nota do aluno1: ");
 scanf("%d", &nota1);
 printf("Digite a nota do aluno2: ");
 scanf("%d", &nota2);
 printf("Digite a nota do aluno3: ");
 scanf("%d", &nota3);
 printf("Digite a nota do aluno4: ");
 scanf("%d", &nota4);
 media= (nota0+nota1+nota2+nota3+nota0)/5;
  printf("media: %d\n",media);
}