#include <stdio.h>

int main()
{
	float a[100], copia[100] = {0};
	int i, j, quant = 0, posi[100] = {0};
	
	j = 0;
	for(i = 0; i < 100; i++){
		scanf("%f", &a[i]);
		if(a[i] <= 10){
			copia[j] = a[i];
			posi[j] = i;
			quant++;
			j++;
		}
	}
	
	for(i = 0; i < quant; i++){
		printf("A[%d] = %.1f\n", posi[i], copia[i]);
	}
		
	return 0;
}