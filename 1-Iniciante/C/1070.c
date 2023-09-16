#include <stdio.h>

int main()
{
	int num, contador = 0;
	
	scanf("%d", &num);
	
	while(contador < 6){
		if((num % 2) != 0){
			printf("%d\n", num);
			contador++;
		}
		num++;
	}
	
	return 0;
}