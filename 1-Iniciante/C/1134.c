#include <stdio.h>

int main()
{
	int combustivel, contAlco = 0, contGaso = 0, ContDies = 0;
	
	while(1){
		scanf("%d", &combustivel);
		
		if(combustivel < 1 || combustivel > 4){
			continue;
		}
		if(combustivel == 4){
			break;
		}
		else if(combustivel == 1){
			contAlco++;
		}
		else if(combustivel == 2){
			contGaso++;
		}
		else if(combustivel == 3){
			ContDies++;
		}
	}
	
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", contAlco);
	printf("Gasolina: %d\n", contGaso);
	printf("Diesel: %d\n", ContDies);
	
	return 0;
}