#include <stdio.h>

int main()
{		
    double matriz[12][12], soma = 0;
    int i, j, qtd = 0;
    char opcao;
    
    scanf("%c", &opcao);
	
	for(i = 0; i < 12; i++){
		for(j = 0; j < 12; j++){
			scanf("%lf", &matriz[i][j]);			
			//matriz[i][j] = 1;
			//printf("%.1lf", matriz[i][j]);
			//printf(" ");
		}
		//printf("\n");
	}
	
	//printf("\n\n");
	
	for(i = 0; i < 12; i++){
		for(j = 0; j <12; j++){
			   if( i + j < 11 && i < 11 ){
				soma = soma + matriz[i][j];
				//matriz[i][j] = 2;				
				qtd++;
			}
			//printf("%.1lf", matriz[i][j]);
			//printf(" ");
		}
		//printf("\n");	
	}
			
	if(opcao == 'M'){
		soma /= qtd;
	}
		
	printf("%.1lf\n", soma);			
		    			
	return 0;
}