#include <stdio.h>
#include <string.h>

int main()
{
	int nAbas, acoes;
	char acao[20];
	
	scanf("%d %d", &nAbas, &acoes);
		
	while(acoes > 0){
		
		scanf("%s", acao);
		
		if(strcmp(acao, "fechou") == 0){
			nAbas = nAbas - 1;
			nAbas = nAbas + 2;
		}
	    if(strcmp(acao, "clicou") == 0){
			nAbas = nAbas - 1;
		}			
		acoes--;		
	}
	
	printf("%d\n", nAbas);
		
	return 0;
}