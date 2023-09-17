#include <stdio.h>

int calcular(int ciclos,  int impr);

int calcular(int ciclos, int impr){
	
	int i, j, contador = 0;
	for(i = 0; i <= ciclos; i++){
			if(i == 1 && impr == 1){
					printf(" ");
			}			
			if(i == 0){
				if(impr == 1){
					printf("%d", i);					
				}						
				contador++;
			}
			for(j = 0; j < i; j++){
				if(impr == 1){
						printf("%d", i);
					if(j < ciclos -1){
						printf(" ");
					}
				}				
				contador++;
			}
    }
	if(impr == 1){
		printf("\n");
	}	
		
	return contador;	
}

int main()
{
	int repet, casos = 0, contador;
	
	while(scanf("%d", &repet) != EOF)
	{
		casos++;
		contador = calcular(repet, 0);		
		
		if(contador == 1){
			printf("Caso %d: %d numero\n", casos, contador);
		}
		else
		{
			printf("Caso %d: %d numeros\n", casos, contador);
		}
		calcular(repet, 1);
		printf("\n");
				
	}
	
	return 0;
}