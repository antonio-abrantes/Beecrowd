#include <stdio.h>

int main()
{
	int cont, i, n, x, y, soma;
	
	scanf("%d", &n);
	
	while(n > 0){
		scanf("%d %d", &x, &y);
		soma = 0;
		cont = 0;				
		for(i = x; cont < y; i++){												
			if(i % 2 != 0){
				soma = soma + i;
				cont++;					
			}
		}
		printf("%d\n", soma);
		n--;
	}
	
	return 0;
}