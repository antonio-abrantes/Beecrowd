#include <stdio.h>

int main()
{
	int i, ciclos, lim, media[1002], soma;
	double mediaG, media1;
	
	scanf("%d", &ciclos);
	
	while(ciclos--)
	{	soma = 0;			
		for(i = 0; i <= lim; i++){
			scanf("%d", &media[i]);
			if(i == 0){
				lim = media[i];
			}
			if(i > 0){
				soma = soma + media[i];
			}
		}
		media1 = (double)soma / lim;
		soma = 0;
		for(i = 1; i <= lim; i++){
			if(media[i] > media1){
				soma++;
			}
		}		
		
		mediaG = ((double)soma * 100) / lim;
			printf("%.3lf%%\n", mediaG);
	}
	
	return 0;
}