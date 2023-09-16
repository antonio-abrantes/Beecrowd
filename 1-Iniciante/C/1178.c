#include <stdio.h>

int main()
{
	double n[100], t, sub;
	int i;
	scanf("%lf", &t);
	sub = t;
		
	for(i = 0; i < 100; i++){
			n[i] = sub;
			printf("N[%d] = %.4lf\n", i, n[i]);
			sub = sub /2;						
    }		

	return 0;
}