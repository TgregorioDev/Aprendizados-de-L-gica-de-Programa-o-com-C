#include <stdio.h>
#include<stdlib.h>
int main(){
	int i;
	int soma;
	for (i=1; i<10; i++){
		int soma=0;
		soma += i*i;
	}
    printf("%d\n", soma);
    
    return 0;
	
}