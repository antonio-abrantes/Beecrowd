#include <stdio.h>
#include <math.h>

int main()
{
	int n, i;
	
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		if(i % 2 == 0){
			printf("%d^%d = %.0lf\n", i, 2, pow(i,2));
		}
	}
	
	return 0;
}