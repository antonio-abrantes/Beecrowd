#include <stdio.h>

int main()
{
	int i, N, valor, cont100 = 0, cont50 = 0,
	cont20 = 0, cont10 = 0, cont5 = 0, 
	cont2 = 0, cont1 = 0;
	
	scanf("%d", &N);
	
	valor = N;
	i = N;
	while(i >= 0){
		if(N >= 100){
			N = N - 100;
			cont100 = cont100 + 1;
		}
		else if(N >=50 && N < 100 ){
			N = N - 50;
			cont50 = cont50 + 1;
		}
		else if(N >= 20 && N < 50){
			N = N - 20;
			cont20 = cont20 + 1;
		}
		else if(N >= 10 && N < 20){
			N = N - 10;
			cont10 = cont10 + 1;	
		}
		else if(N >= 5 && N < 10){
			N = N - 5;
			cont5 = cont5 + 1;
		}
		else if(N >= 2 && N < 5){
			N = N - 2;
			cont2 = cont2 + 1;
		}
		else if(N >= 1 && N < 2){
			N = N - 1;
			cont1 = cont1 + 1;
		}
		i--;
	}
	
	printf("%d\n", valor);	
	printf("%d nota(s) de R$ 100,00\n", cont100);
	printf("%d nota(s) de R$ 50,00\n", cont50);
	printf("%d nota(s) de R$ 20,00\n", cont20);
	printf("%d nota(s) de R$ 10,00\n", cont10);
	printf("%d nota(s) de R$ 5,00\n", cont5);
	printf("%d nota(s) de R$ 2,00\n", cont2);
	printf("%d nota(s) de R$ 1,00\n", cont1);
	
	return 0;
}