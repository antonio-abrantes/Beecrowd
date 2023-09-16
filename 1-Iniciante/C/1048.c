#include <stdio.h>

int main()
{
	double salarioFixo, percent, reajuste;
	
	scanf("%lf", &salarioFixo);
	
	if(salarioFixo > 0 && salarioFixo <= 400){
		percent = 15;
		reajuste = (salarioFixo * percent)/100;	
	}
	else if(salarioFixo > 400 && salarioFixo <= 800){
		percent = 12;
		reajuste = (salarioFixo * percent)/100;
	}
	else if(salarioFixo > 800 && salarioFixo <= 1200){
		percent = 10;
		reajuste = (salarioFixo * percent)/100;
	}
	else if(salarioFixo > 1200 && salarioFixo <= 2000){
		percent = 7;
		reajuste = (salarioFixo * percent)/100;
	}
	else{
		percent = 4;
		reajuste = (salarioFixo * percent)/100;
	}
	
		printf("Novo salario: %.2lf\n", salarioFixo + reajuste);
		printf("Reajuste ganho: %.2lf\n", reajuste);
		printf("Em percentual: %d %%\n", (int)percent);
	
	return 0;
}