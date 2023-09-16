#include <stdio.h>

int main(){
	
	int C, S, N, i, controle;
	
	scanf("%d",&C);
	
	while(C--){
		scanf("%d", &N);
		controle = 0;
		S = 1;
		for(i = N; i > 1; i--){
			
			if((controle % 2) == 0){
				S = S - 1;
			}
			else if((controle % 2) != 0){
				S = S + 1;
			}
			
			controle++;
		}
		printf("%d\n", S);
	}
	
	return 0;
}