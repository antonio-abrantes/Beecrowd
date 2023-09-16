#include <stdio.h>
#include <string.h>

int main()
{		
    int c, n;
    char nome[50];
    
    scanf("%d", &c);
    
    while(c--){
    	scanf("%s %d", nome, &n);
    	if(strcmp(nome, "Thor") == 0){
			printf("Y\n");
		}
		else
		{
			printf("N\n");
		}
		
	}
		
	return 0;
}