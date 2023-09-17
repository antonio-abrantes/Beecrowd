#include <stdio.h>

int main()
{
	int ciclos, cont;
	float c;
	
	scanf("%d", &ciclos);
	
	while(ciclos--)
	{
		cont = 0;
		scanf("%f",&c);
		while(c > 1){
			c = c / 2;
			cont++;			
		}
		printf("%d dias\n", cont);
	}
	
	return 0;
}