#include <stdio.h>

int main()
{
	int a, b, i = 0, somaImpares = 0;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
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
		
	return 0;
}