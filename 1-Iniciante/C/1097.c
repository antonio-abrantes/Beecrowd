#include <stdio.h>

int main()
{
	int i, j, cont, aux;
	cont = 7;
	for (i = 1; i <= 9; i = i + 2){
		aux = cont;		
			for(j = 0; j < 3; j++){
				printf("I=%i J=%i\n", i, aux);
				if(j == 2){
					cont = cont + 2;
				}else
				{
					aux--;
				}
			}		
	}

	return 0;
}