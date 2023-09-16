#include <stdio.h>

int main()
{	
	float num, lim1 = 0, lim2 = 25, lim3 = 50, 
          lim4 = 75, lim5 = 100;
          
	scanf("%f", &num);
	
	if(num >= lim1 && num <= lim2){
		printf("Intervalo [0,25]\n");
	}
	else if(num >= lim2 && num <= lim3){
		printf("Intervalo (25,50]\n");
	}
	else if(num >= lim3 && num <= lim4){
		printf("Intervalo (50,75]\n");
	}
	else if(num >= lim4 && num <= lim5){
		printf("Intervalo (75,100]\n");
	}
	else
	{
		printf("Fora de intervalo\n");
	}	  
	
	return 0;
}