#include <stdio.h>

int main()
{	
	int val, i, somaPares = 0, somaImpar = 0, somaPosi = 0, somaNeg = 0;
	
	for(i = 0; i < 5; i++){
		scanf("%d", &val);
		
		if(val > 0){
			somaPosi++;
		}
		if(val < 0){
			somaNeg++;
		}
		if((val % 2) == 0){
			somaPares++;
		}
		else{
			somaImpar++;
		}
	}
	
	printf("%d valor(es) par(es)\n", somaPares);
	printf("%d valor(es) impar(es)\n", somaImpar);
	printf("%d valor(es) positivo(s)\n", somaPosi);
	printf("%d valor(es) negativo(s)\n", somaNeg);
	   	
	return 0;
}