#include <stdio.h>

int main()
{		
    int i, X, Y, qtd = 0;
	
	scanf("%d", &X);
	scanf("%d", &Y);
	
	if(X < Y){
		for(i = X; i <= Y; i++){
			if(i % 13 != 0){
				qtd = qtd + i;
			}
		}
	}else
	{
		for(i = Y; i <= X; i++){
			if(i % 13 != 0){
				qtd = qtd + i;
			}
		}	
	}	    
	printf("%d\n", qtd);
		
	return 0;
}