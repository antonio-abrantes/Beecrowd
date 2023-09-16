#include <stdio.h>

int main(){
	
	int A, B, C, D, somaCD, somaAB;
	
	scanf("%d %d %d %d",&A, &B, &C, &D);
	
	//Teste 1 - B for maior do que C e se D for maior do que A
	if(B > C && D > A){
		somaCD = C + D;
		somaAB = A + B;
		//Teste 2 - soma de C com D for maior que a soma de A e B
		if(somaCD > somaAB){
			//Teste 3 - C e D, ambos, forem positivos
			if(C >= 0 && D >= 0){
				//Teste 4 - se a variável A for par
				if((A % 2) == 0)
					printf("Valores aceitos\n");
				else
					printf("Valores nao aceitos\n");
			}	
			else
				printf("Valores nao aceitos\n");	
		}
		else
			printf("Valores nao aceitos\n");
	}
	else
		printf("Valores nao aceitos\n");
	
	return 0;
}