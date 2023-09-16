#include <stdio.h>

int main()
{
	float nota, notasValidas = 0, mediaGeral = 0;
	int cont = 0;
		
	while(1)
	{
		scanf("%f", &nota);
		
		if(nota < 0 || nota > 10){
			printf("nota invalida\n");
		}
		else{
			notasValidas = notasValidas + nota;
			cont++;
		}
		
		if(cont == 2){
			mediaGeral = notasValidas /2;
			printf("media = %.2f\n",mediaGeral);
			break;
		}
	}
	
	return 0;
}