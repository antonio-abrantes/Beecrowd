#include <stdio.h>

int main()
{
	long int tempo, anos;
	int casos;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%ld", &tempo);
		anos = 0;
		
		if(tempo >= 2015){
			anos = tempo - 2014;
			printf("%ld A.C.\n", anos);
		}
		else{
			anos = 2015 - tempo;
			printf("%ld D.C.\n", anos);
		}	
	}
	
	return 0;
}