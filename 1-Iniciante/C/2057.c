#include <stdio.h>

int main()
{
	int horaPartida, tempoViagem , trajeto, fuso, resultado = 0;
	
	scanf("%d %d %d", &horaPartida, &tempoViagem, &fuso);
	
	trajeto = horaPartida + tempoViagem;
	
	if(horaPartida == 0){
		resultado = (tempoViagem + 24) + fuso;
	}else{
		if(trajeto <= 24){
			resultado = trajeto + fuso;
		}
		else{
			resultado = trajeto + fuso;
		}			
	}		
	
	if(resultado == 24){
		   printf("%d\n", 0);	
	}
	else if(resultado > 24){
		printf("%d\n", resultado - 24);
	}
	else{
		printf("%d\n", resultado);
	}	
	
	return 0;
}