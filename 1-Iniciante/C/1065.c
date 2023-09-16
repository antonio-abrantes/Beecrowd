#include <stdio.h>

int main()
{
    int val, i, qtd = 0;

    for(i = 0; i < 5;i++){
        scanf("%d", &val);
        if ((val % 2) == 0){
            qtd++;
        }
    }
		
	printf("%d valores pares\n", qtd);	
	
	return 0;
}