#include <stdio.h>

int main()
{	
	int i, x, y, cont = 0;
	
	scanf("%d %d", &x, &y);
	
	for(i = 0; i < y; i++){
		printf("%d",i + 1 );
		
		cont++;
		if(cont == x || i == y-1){
			printf("\n");
			cont = 0;
		}
		else
		{
			printf(" ");
		}
	}
	
	return 0;
}