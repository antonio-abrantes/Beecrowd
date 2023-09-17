#include <stdio.h>
#include <math.h>

int main()
{
	int tempo;
	double capital, juroSimples, juroCompos, diferenca, expo;
	double txJuros;
	
	while(scanf("%lf", &capital) != EOF)
	{
		scanf("%lf", &txJuros);
		scanf("%d", &tempo);
		
		juroSimples = capital * txJuros * tempo;
		expo = pow(1 + txJuros, tempo);
		
		juroCompos = (capital * expo) - capital;
		
		if(juroSimples >= juroCompos)
			diferenca = juroSimples - juroCompos;
		else
			diferenca = juroCompos - juroSimples;
				
		printf("DIFERENCA DE VALOR = %.2lf\n", diferenca);
		printf("JUROS SIMPLES = %.2lf\n", juroSimples);
		printf("JUROS COMPOSTO = %.2lf\n", juroCompos);
		
	}
		
	return 0;
}