#include <stdio.h>
#include <math.h>

int main()
{
	double valor, taxa;
	int meses;

	while(scanf("%lf", &valor) != EOF)
	{
		scanf("%lf", &taxa);
		scanf("%d", &meses);
		
		double simples, comp, montante, diff;
		
		simples = valor * taxa * meses;
		montante = valor * pow(1 + taxa, meses);
		comp = montante - valor;
		diff = fabs(simples - comp);
		
		printf("DIFERENCA DE VALOR = %.2lf\n", diff);
		printf("JUROS SIMPLES = %.2lf\n", simples);
		printf("JUROS COMPOSTO = %.2lf\n", comp);
	}

	return 0;
}