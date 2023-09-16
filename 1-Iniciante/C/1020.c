#include <stdio.h>

int main()
{
	int dias, ano = 0, mes = 0, dia;
	
	scanf("%d", &dias);
	
	dia = (dias % 365) % 30; 
	
	do{
		if(dias >= 365){
			dias = dias - 365;
			ano = ano + 1;
		}
		if(dias < 365 && dias >= 30){
			dias = dias - 30;
			mes = mes + 1;
		}
		dias--;
	}while(dias >= 0);
		
	printf("%d ano(s)\n", ano);
	printf("%d mes(es)\n", mes);
	printf("%d dia(s)\n", dia);
	
	return 0;
}