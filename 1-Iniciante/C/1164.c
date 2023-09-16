#include <stdio.h>

int main()
{
	int i, n, x, soma;

	scanf("%d", &x);
	
	while(x--)
	{
		scanf("%d", &n);
		soma = 0;
		for(i = 1; i < n; i++){
			if(n % i == 0){
				soma = soma + i;
			}
		}
		
		if(soma == n){
			printf("%d eh perfeito\n", n);
		}
		else
		{
			printf("%d nao eh perfeito\n", n);
		}		
	}
			
	return 0;
}