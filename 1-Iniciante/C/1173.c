#include <stdio.h>

int main()
{
	int n[10];
	int i, num, anterior;
	
	scanf("%d", &num);
	anterior = num;
	for(i = 0; i < 10; i++){		
		n[i] = anterior;
		anterior = anterior * 2;
		printf("N[%d] = %d\n", i, n[i]);
	}
	
	return 0;
}