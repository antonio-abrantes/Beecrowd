#include <stdio.h>

#define senha 2002

int main()
{
	int senha_digitada;
	
	while(senha_digitada != senha){
		scanf("%d", &senha_digitada);
		if(senha_digitada == senha){
			printf("Acesso Permitido\n");
		}
		else
		{
			printf("Senha Invalida\n");
		}
	}
	
	return 0;
}