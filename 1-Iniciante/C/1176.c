#include <stdio.h>

int main (){

	int testes;
	long long unsigned int fib[61];
	fib[0] = 0;
	fib[1] = 1;
	int num, i;

	for (i = 2 ;i <= 60; i++)
		fib[i] = fib[i-1] + fib[i-2];

	scanf("%d", &testes);
	while(testes--){

		scanf("%d", &num);		
		printf("Fib(%d) = %lld\n", num, fib[num]);
	}
	
	return 0;

}