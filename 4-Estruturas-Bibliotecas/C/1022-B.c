#include <stdio.h>

void mdc(int a, int b){
	int numer = a, denom = b;
	int resto;
	while(b != 0)
	{
		resto = a % b;
		a = b;
		b = resto;		
	}
	
	numer = numer / a;
	denom = denom / a;

		if(a < 0){
			printf("%d/%d\n", -numer, -denom);
		}else
		{
			printf("%d/%d\n", numer, denom);
		}
}

int main()
{
	int ciclos, n1, n2, d1, d2, numer, denom;
	char oper;
	
	scanf("%d", &ciclos);
	
	while(ciclos--)
	{
		numer = 0;
		denom = 0;
		scanf("%d / %d %c %d / %d", &n1, &d1, &oper, &n2, &d2);
		if(oper == '+'){			
			//(N1*D2 + N2*D1) / (D1*D2);
			numer = (n1 * d2) + (n2 * d1);
			denom = d1 * d2;
			printf("%d/%d = ", numer, denom);
			mdc(numer, denom);			
		}
		else if(oper == '-'){
			//(N1*D2 - N2*D1) / (D1*D2);
			numer = (n1 * d2) - (n2 * d1);
			denom = d1 * d2;
			printf("%d/%d = ", numer, denom);			
			mdc(numer, denom);
		}
		else if(oper == '*'){
			//(N1*N2) / (D1*D2)
			numer = n1 * n2;
			denom = d1 * d2;
			printf("%d/%d = ", numer, denom);
			mdc(numer, denom);
		}
		else{
			//(N1*D2)/(N2*D1)
			numer = n1 * d2;
			denom = n2 * d1;
			printf("%d/%d = ", numer, denom);
			mdc(numer, denom);
		}
	}
	
	return 0;
}