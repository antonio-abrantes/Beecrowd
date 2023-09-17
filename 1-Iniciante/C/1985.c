#include <stdio.h>

int main()
{
	int ciclos, qtd, codigo;
	double soma = 0;
	
	scanf("%d", &ciclos);
	
	while(ciclos--)
	{
		scanf("%d %d", &codigo, &qtd);
		
		if(codigo == 1001){
			soma = soma + (qtd * 1.50);
		}
		else if(codigo == 1002){
			soma = soma + (qtd * 2.50);
		}
		else if(codigo == 1003){
			soma = soma + (qtd * 3.50);
		}
		else if(codigo == 1004){
			soma = soma + (qtd * 4.50);
		}
		else if(codigo == 1005){
			soma = soma + (qtd * 5.50);
		}
	}
	
	printf("%.2lf\n", soma);
	
	return 0;
}