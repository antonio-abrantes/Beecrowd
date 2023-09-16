#include <stdio.h>

int main()
{
	int n, fatorial = 0;
	
	scanf("%d", &n);
	
	if(n < 13){
		fatorial = n;
		for(; n > 1; n-- ){
			fatorial = fatorial * (n -1);
		}
		printf("%d\n", fatorial);
	}
	
	return 0;
}