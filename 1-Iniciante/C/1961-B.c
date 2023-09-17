#include <stdio.h>

int main()
{
	int i,  pulo, nCanos, dif = 0;
	
	scanf("%d %d", &pulo, &nCanos);
	
	int cano[nCanos];
	
	for(i = 0; i < nCanos; i++){
		scanf("%d", &cano[i]);		
	}
	
	for(i = 1; i < nCanos; i++){
		if(cano[i] > cano[i -1]){
			dif = cano[i] - cano[i - 1];												
		}
		else{
			dif = cano[i - 1] - cano[i];
		}
		if(dif > pulo){
			printf("GAME OVER\n");
			return 0;
		}
		
	}
	
	printf("YOU WIN\n");
		
	return 0;
}