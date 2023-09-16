#include <stdio.h>

int main()
{
	int n , m, i, soma;

	while(1)
	{
		scanf("%d %d", &n, &m);
		soma = 0;
		if(n <= 0 || m <= 0){
			break;
		}
		else if(n > m){
			for(i = m; i <= n; i++){
				printf("%d", i);
				printf(" ");
				soma = soma + i;
			}
			printf("Sum=%d\n", soma);
		}
		else if(n < m){
			for(i = n; i <= m; i++){
				printf("%d", i);
				printf(" ");
				soma = soma + i;
			}
			printf("Sum=%d\n", soma);
		}
	}	
	return 0;
}