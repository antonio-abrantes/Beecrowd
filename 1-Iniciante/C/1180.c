#include <stdio.h>

int main()
{
	int n, i, temp = 0, pos = 0;
	
	scanf("%d", &n);
	
	int x[n];
	
	for(i = 0; i < n; i++){
		scanf("%d", &x[i]);
		if(x[i] > temp){
			temp = x[i];
		}
	}
	
		
	for(i = 0; i < n; i++){		 			
			if(x[i] < temp){
				temp = x[i];
				pos = i;
			}			
    }
	
	printf("Menor valor: %d\n", temp);
	printf("Posicao: %d\n", pos);		

	return 0;
}