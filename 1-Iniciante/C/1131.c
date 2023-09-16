#include <stdio.h>

int main()
{
	int golGremio, golInter, controle = 0;
	int vitGremio = 0, vitInter = 0, empates = 0, qtdGrenais = 0;
	
	while(1)
	{
		scanf("%d %d", &golInter, &golGremio);
		
		if(golInter >  golGremio){
			vitInter++;
		}
		else if(golGremio > golInter){
			vitGremio++;
		}
		else{
			empates++;
		}
		
		qtdGrenais++;
		
		printf("Novo grenal (1-sim 2-nao)\n");
		
		scanf("%d", &controle);
		if(controle	== 2){
			break;
		}
		else{
			controle = 0;
			continue;
		}
		
	}
	
	printf("%d grenais\n", qtdGrenais);
	printf("Inter:%d\n", vitInter);
	printf("Gremio:%d\n", vitGremio);
	printf("Empates:%d\n", empates);
	if(vitGremio > vitInter){
		printf("Gremio venceu mais\n");
	}
	else if(vitInter > vitGremio){
		printf("Inter venceu mais\n");
	}
	else{
		printf("Nao houve vencedor\n");
	}
	
	return 0;
}