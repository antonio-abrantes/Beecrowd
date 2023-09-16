#include <stdio.h>

int main()
{		
    double matriz[12][12], soma = 0;
    int coluna, i, j, qtd = 0;
    char opcao;
    
    scanf("%d", &coluna);
    getchar();
    scanf("%c", &opcao);
	
	for(i = 0; i < 12; i++){
		for(j = 0; j < 12; j++){
			scanf("%lf", &matriz[i][j]);			
		}
	}
	
		for(i = 0; i < 12; i++){
			for(j = 0; j < 12; j++){
				if(j == coluna){
					soma = soma + matriz[i][j];
					qtd++;
			}
		}
	}

			
	if(opcao == 'M'){
		soma /= qtd;
	}
		
	printf("%.1lf\n", soma);			
		    			
	return 0;
}