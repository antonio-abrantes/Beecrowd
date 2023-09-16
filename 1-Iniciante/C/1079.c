#include <stdio.h>

int main()
{
	float med1, med2, med3, mediaGeral;
	int n;
	
	scanf("%d", &n);
	
	while(n--)
	{
		scanf("%f %f %f", &med1, &med2, &med3);
		
		mediaGeral = (med1 * 2 + med2 * 3 + med3 * 5)/10;
		
		printf("%.1f\n",mediaGeral);
		
	}
	
	return 0;
}