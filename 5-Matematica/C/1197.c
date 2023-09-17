#include <stdio.h>

int main()
{
	int v, t, cont;	
	while(scanf("%d %d",&v, &t) != EOF)
	{
		cont = 0; 
		cont = (v * t) * 2;
		printf("%d\n", cont);		
	}
	
	return 0;
}