#include <stdio.h>

int main()
{
	int i, ciclos, indice, soma, cont;
	double media;
	scanf("%d", &ciclos);
	
	while(ciclos--)
	{
		soma = 0;
		cont = 0;
		scanf("%d", &indice);
		int vet[indice];
		
		for(i = 0; i < indice; i++){
			 scanf("%d", &vet[i]);
			 soma = soma + vet[i];	
		}
		
		media = (double)soma / indice;
		
		for(i = 0; i < indice; i++){
			 if(vet[i] > media){
				cont++; 
			 }  	
		}
		printf("%.3lf%%\n", (cont * 100.00) / indice);
	}	
	return 0;
}