#include <stdio.h>
#include <string.h>

int main()
{	
	int n, i = 0, desloc = 0, aux = 0;
	char texto[50];
	
	scanf("%d", &n);
	
	while(n--){
		
		scanf("%50s%*c", texto);
		scanf("%d", &desloc);
		
			for(i = 0; i < strlen(texto); i++){
		  		if((texto[i] - desloc) < 65 ){
					aux = (texto[i] - desloc)+ 26;
				}
		  		else
		  			aux = texto[i] - desloc;
		  			
		  		printf("%c", aux);		
			}
			printf("\n");
	}
	
	return 0;
}