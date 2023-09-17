#include <stdio.h>

int main()
{
	long long int sA, sB, dif;	
	
	while(scanf("%lld %lld",&sA, &sB) != EOF)
	{
		if(sA >= sB){
			dif = sA - sB;
		}
		else{
			dif = sB - sA;
		}
		printf("%lld\n", dif);		
	}
		
	return 0;
}