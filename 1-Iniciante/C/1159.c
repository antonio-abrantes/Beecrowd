#include <stdio.h>

int main()
{
	int x, i, cont, soma;
	
	while(1){
		scanf("%d", &x);		
		
		if(x == 0){
			break;
		}		
		cont = 0;
		soma = 0;
			
		for(i = x; cont < 5; i++){
			if(i % 2 == 0){
				soma = soma + i;				
				cont++;
			}
		}
		printf("%d\n", soma);
	}
	
	return 0;
}