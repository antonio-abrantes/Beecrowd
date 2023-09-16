#include <stdio.h>

int main()
{
	int n, quantidade, qtdCoelho = 0, qtdRato = 0, qtdSapo = 0, totCobaias = 0;
	double perCoelho, perRato, perSapo;	
	char cobaia[2];
	
	scanf("%d", &n);
	
	while(n > 0){
		
		scanf("%d %s", &quantidade, cobaia );
		
		if(cobaia[0] == 'C'){
			qtdCoelho = qtdCoelho + quantidade;
		}
		else if(cobaia[0] == 'R'){
			qtdRato = qtdRato + quantidade;
		}
		else if(cobaia[0] == 'S'){
			qtdSapo = qtdSapo + quantidade;
		}
		
		totCobaias = totCobaias + quantidade;
			
		n--;
	}
		
	perCoelho = (qtdCoelho * 100) / (double)totCobaias;
	perRato = (qtdRato * 100) / (double)totCobaias;
	perSapo = (qtdSapo * 100) / (double)totCobaias;
	
	printf("Total: %d cobaias\n", totCobaias);
	printf("Total de coelhos: %d\n", qtdCoelho);
	printf("Total de ratos: %d\n", qtdRato);
	printf("Total de sapos: %d\n", qtdSapo);
	
	printf("Percentual de coelhos: %.2lf %%\n", perCoelho);
	printf("Percentual de ratos: %.2lf %%\n", perRato);
	printf("Percentual de sapos: %.2lf %%\n", perSapo);
	
	return 0;
}