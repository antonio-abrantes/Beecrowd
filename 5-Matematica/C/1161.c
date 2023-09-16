#include <stdio.h>

int main()
{	
	int fatorial1, fatorial2;
	long long int soma, resposta1, resposta2;
	
	while(scanf("%d %d", &fatorial1, &fatorial2 ) == 2){

		soma = 0;
		resposta1 = 1;
		resposta2 = 1;
		
		for(; fatorial1 >= 1; fatorial1--){
			resposta1 = resposta1 * fatorial1;		
		}
	
		for(; fatorial2 >= 1; fatorial2--){
			resposta2 = resposta2 * fatorial2;		
		}
	
		soma = resposta1 + resposta2;
	
		printf("%lld\n", soma);
	}
	
	return 0;
}