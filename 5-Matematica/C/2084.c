#include <stdio.h>

int main()
{
	int i, qtdCandidatos, somaVotos = 0, maior = 0, iMaior = 0, cont = 0;
	float pocentGanhador;
	
	scanf("%d", &qtdCandidatos);
	int votos[qtdCandidatos];
	float percVotos[qtdCandidatos];
	
	for(i = 0; i < qtdCandidatos; i++){
		scanf("%d", &votos[i]);
		somaVotos = somaVotos + votos[i];
		if(votos[i] > maior){
			maior = votos[i];
			iMaior = i;
		}
	}
	
	pocentGanhador = ((float)votos[iMaior] * 100) / somaVotos;
	//printf("%.2f\n", pocentGanhador);
	
	if(pocentGanhador >= 45){
		printf("1\n");
	}
	else{
		for(i = 0; i < qtdCandidatos; i++){
			percVotos[i] = ((float)votos[i] * 100) / somaVotos;
			//printf("%.2f\n", percVotos[i]);
			if(i != iMaior && pocentGanhador - percVotos[i] >= 10 && pocentGanhador >= 40){
				//printf("%.2f\n", percVotos[i]);
				cont++;
			}
		}
		if(cont == qtdCandidatos - 1){
			printf("1\n");
	}
		else
		{
			printf("2\n");
		}
	}
	
	return 0;
}