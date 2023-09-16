#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n, m, somaNum = 0, i = 0, j = 0;
	char somaString[20];
	
	while(1){
		
		scanf("%d %d", &n, &m);
	
		if(n == 0 && m == 0){
			break;
		}
		else{
			char copia[20] = "\0";
			somaNum = n + m;
	
			sprintf(somaString, "%d", somaNum);
			j = 0;
			for(i = 0; i < strlen(somaString); i++){	
				if(somaString[i] != '0'){
					copia[j] = somaString[i];		
					j++;	
  	  	  	  	  }	
			}	
			somaNum = atoi(copia);

			printf("%d\n", somaNum);
		}
	}
	
	return 0;
}