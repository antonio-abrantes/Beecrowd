#include <stdio.h>

int main()
{
	int i, N;
	
	scanf("%d", &N);
	
	if(N > 2){
		for(i = 1; i <= 10; i++){
			printf("%d x %d = %d\n", i, N, (i * N));
		}
	}
	
	return 0;
}