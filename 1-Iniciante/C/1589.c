#include <stdio.h>

int main()
{
	int ciclos, r1, r2;
	long int soma = 0;
	
	scanf("%d", &ciclos);
	//fflush(stdin);
	
	while(ciclos > 0)
	{
		scanf("%d %d", &r1, &r2);
		
		soma = r1 + r2;
		printf("%ld\n", soma);
		
		ciclos--;
	}
		
	return 0;
}