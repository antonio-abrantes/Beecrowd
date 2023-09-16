#include <stdio.h>

int main()
{
	int matriz[3], maux[3], aux, i, j;
	
	for (i = 0;i < 3; i++)
   	   scanf("%d", &matriz[i]);
	
	for(i = 0; i < 3; i++)
		maux[i] = matriz[i];
	
	
	for(j = 0; j < 2; j++){
		for(i = 0;i < 2; i++){
		if(matriz[i] > matriz[i + 1]){
			aux = matriz[i];
			matriz[i] = matriz[i + 1];
			matriz[i + 1] = aux;
		}
	  }
	}
					
	for(i=0;i < 3;i++)
   	   printf("%d\n", matriz[i]);
      
    printf("\n");  
    for(i = 0; i < 3; i++)
   	   printf("%d\n", maux[i]);	
	return 0;
}