#include <stdio.h>

int main()
{
	double value;
	double imposto = 0;
	
	scanf("%lf", &value);
	
	if( value > 4500)
		imposto += (value - 4500) * 0.28 + 1500*0.18 +1000*0.08;
	else if( value > 3000)
		imposto += (value - 3000) *0.18 + 1000*0.08;
	else if(value > 2000)
		imposto += (value - 2000) * 0.08;

	if( imposto == 0)
		printf("Isento\n");
	else	
		printf("R$ %.2f\n", imposto);
	return 0;
	
	return 0;
}