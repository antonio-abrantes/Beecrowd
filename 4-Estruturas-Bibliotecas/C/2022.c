#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct{
	char presente[1000];
	double preco;
	int ordem;
} Lista;

int main()
{
	char nome[1000];
	int num, i, j;

	while(scanf("%s", nome) != EOF){
		
		scanf("%d", &num);
		Lista lista[num], aux;
						
	for(i = 0; i < num; i++){
		getchar();
		gets(lista[i].presente);		
		scanf("%lf %d", &lista[i].preco, &lista[i].ordem);
	}
	
	//Ordenar em ordem decrescente com criterio da ordem	
	for(i = 0; i < num -1; i++){
		for(j = i + 1; j < num; j++){
			if(lista[i].ordem < lista[j].ordem){
				aux = lista[i];
				lista[i] = lista[j];
				lista[j] = aux;
			}			
		}
	}
	
	//Ordenar a diferenca de precos
	int cont = 0;
	for(i = 0; i < num -1; i++){ 
		for(j = i + 1; j < num; j++){
		 if(lista[i].preco > lista[j].preco && lista[i].ordem == lista[j].ordem){
				aux = lista[i];
				lista[i] = lista[j];
				lista[j] = aux;
				cont++;																	
			}			
		}
	}
	
	//Ordenar por ordem alfabtica
	for(i = 0; i < num -1; i++){
		for(j = i + 1; j < num; j++){
			if(lista[i].preco == lista[j].preco && lista[i].ordem == lista[j].ordem){
					if(strcmp(lista[i].presente, lista[j].presente) == 1){
						aux = lista[i];
						lista[i] = lista[j];
						lista[j] = aux;
				   }
			}		 			
		}
	}
		
	printf("Lista de %s\n", nome);
	for(i = 0; i < num; i++){
		printf("%s - R$%.2lf\n", lista[i].presente, lista[i].preco); //Ja tentei sem o "R$"...
	}
	printf("\n");
  }
  	 	 	
	return 0;
}