#include <stdio.h>

int main()
{
	int a, b, i = 0, somaImpares, testes = 0;
	
	scanf("%d", &testes);
	
	while(testes--){
		scanf("%d %d", &a, &b);
	somaImpares = 0;	
	
	if(a < b){
		for(i = a + 1; i < b; i++ ){
			if( i % 2 != 0){
				somaImpares = somaImpares + i;
			}
		}
		printf("%d\n", somaImpares);
	}
	else if(a > b){
		for(i = b + 1; i < a; i++ ){
			if( i % 2 != 0){
				somaImpares = somaImpares + i;
			}
		}
		printf("%d\n", somaImpares);
	}
	else
		printf("%d\n", somaImpares);
	}
		
	return 0;
}