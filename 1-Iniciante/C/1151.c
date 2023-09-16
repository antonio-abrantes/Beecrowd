#include <stdio.h>

int main()
{
		
    int i, X, Y, aux, qtd;

	X = 0;
	Y = 1;

	scanf("%d", &qtd);
	
	printf("%d %d", X, Y);
	for(i = 2; i < qtd; i++){
		aux = Y;
		Y = X + aux;
		X = aux;
		printf(" %d", Y);
	}	    
	printf("\n");
		
	return 0;
}