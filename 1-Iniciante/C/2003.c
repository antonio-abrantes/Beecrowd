#include <stdio.h>

int main()
{
	int hora, minuto, atraso;
		
	while(scanf("%d:%d", &hora, &minuto) == 2)
	{
		atraso = 0;
		if(hora >= 7 && minuto >= 0){
			atraso = hora - 7;			
				atraso = (atraso * 60) + minuto;
				printf("Atraso maximo: %d\n",atraso );			
		}
		else if(hora < 7)
		{
			printf("Atraso maximo: %d\n",atraso);
		}				
	}
		
	return 0;
}