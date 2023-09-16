#include <stdio.h>

int main()
{
	float s = 1, div = 2;
	int i;
	
	for(i = 3; i <= 39;i = i + 2 ){
		s = s + (float)i/div;
		div = div * 2;		 
	}
	
	printf("%.2f\n", s);
	
	return 0;
}