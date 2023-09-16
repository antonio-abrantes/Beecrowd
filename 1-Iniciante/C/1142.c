#include <stdio.h>

int main()
{
	int i, cont = 0, ini = 1;
	
	scanf("%d", &cont);
		
	while(cont--)
	{		
		for(i = 0; i < 3; i++){
			printf("%d ", ini);
			ini++;
			if(i == 2){
				printf("PUM\n");
				ini++;
			}
		}
	}
	
	return 0;
}