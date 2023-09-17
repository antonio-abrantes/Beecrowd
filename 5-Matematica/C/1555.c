#include <stdio.h>
#include <math.h>

typedef struct{
	int nome;
	int valor;
} Jogador;

int main()
{
	int i, j, ciclos, x, y;
	
	scanf("%d", &ciclos);
	
	while(ciclos--)
	{
		Jogador jogador[3];
		Jogador aux;
		
		scanf("%d %d", &x, &y);
		
		jogador[0].nome = 1;
		jogador[0].valor = pow((3 * x), 2) + pow(y, 2); //Rafael
		//printf("%d\n", vetor[0]);
		
		jogador[1].nome = 2;
		jogador[1].valor =  (2*(pow(x, 2)) + pow((5 * y), 2)); //Beto
		//printf("%d\n", vetor[1]); 
		
		jogador[2].nome = 3;
		jogador[2].valor = (-100 * x) + pow(y, 3); //Carlos
		//printf("%d\n", vetor[2]);
				
        for(i = 0; i < 2; i++){
			for(j = i+1; j < 3; j++){
				if(jogador[i].valor > jogador[j].valor){
					aux = jogador[i];
					jogador[i] = jogador[j];
					jogador[j] = aux;
				}
			}
		}
		
		switch(jogador[2].nome)
		{
		case 1:
			printf("Rafael ganhou\n");
			break;
		case 2:
			printf("Beto ganhou\n");
			break;
		case 3:
			printf("Carlos ganhou\n");
			break;
		}
	}	
	return 0;
}