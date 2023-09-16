#include <stdio.h>
#include <string.h>

int main()
{
	char dado1[15];
	char dado2[15];
	char dado3[15];
	
	scanf("%s", dado1);
	scanf("%s", dado2);
	scanf("%s", dado3);
	
	//Verificad primeira string
	if((strcmp(dado1, "vertebrado")) == 0){
		//Verificad segunda string
		if((strcmp(dado2, "ave")) == 0){
			//Verifica terceira string
			if((strcmp(dado3, "carnivoro")) == 0){
				printf("aguia\n");
			}
			else if((strcmp(dado3, "onivoro")) == 0){
		 		printf("pomba\n");
			}
		}
		//verifica segunda string
		else if((strcmp(dado2, "mamifero")) == 0){
			//Verifica terceira string
			if((strcmp(dado3, "onivoro")) == 0){
				printf("homem\n");
			}
			else if((strcmp(dado3, "herbivoro")) == 0){
		 		printf("vaca\n");
			}
		}
	}
	
	//Verifica primeira string
	else if((strcmp(dado1, "invertebrado")) == 0){
		//Verificad segunda string
		if((strcmp(dado2, "inseto")) == 0){
			//Verifica terceira string
			if((strcmp(dado3, "hematofago")) == 0){
				printf("pulga\n");
			}
			else if((strcmp(dado3, "herbivoro")) == 0){
		 		printf("lagarta\n");
			}
		}
		//Verifica segunda string
		else if((strcmp(dado2, "anelideo")) == 0){
			//Verifica terceira string
			if((strcmp(dado3, "hematofago")) == 0){
				printf("sanguessuga\n");
			}
			else if((strcmp(dado3, "onivoro")) == 0){
		 		printf("minhoca\n");
			}
		}
	}
	
	return 0;
}