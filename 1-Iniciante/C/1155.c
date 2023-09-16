#include <stdio.h>

int main()
{
	double s = 0;
	int i;
	
	for(i = 1; i <= 100; i++){
		s = s +(float) 1/i; 
	}
	
	printf("%.2lf\n", s);
	
	return 0;
}