#include <stdio.h>

int main()
{
	double nota, soma = 0, controle = 0;
	int opcao = 1, sair = 0;
	
	while(1)
	{
		scanf("%lf", &nota);
		
		if(nota < 0 || nota > 10){
			printf("nota invalida\n");
			continue;
		}else
		{
			soma = soma + nota;
			controle++;
		}
		
		if(controle == 2){
			printf("media = %.2lf\n", soma / 2);
			
			while(1){
				printf("novo calculo (1-sim 2-nao)\n");
				scanf("%d", &opcao);
		
				if(opcao < 1 || opcao > 2){
					continue;
				}
				else if(opcao == 2){
					sair = 1;
					break;
				}
				else if(opcao == 1){
					soma = 0;
					controle = 0;
					break;
				}
			}
		}
		
		if(sair == 1){
			break;
		}			
	}
	
	return 0;
}