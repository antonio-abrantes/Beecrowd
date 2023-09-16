#include <stdio.h>

int main()
{
	int matriz[100], i, cont_posi = 0, maior = 0;
	
	for (i = 0;i < 100; i++){
		scanf("%d", &matriz[i]);
		if(matriz[i] > maior){
			maior = matriz[i];
			cont_posi = i + 1;
		}
	}
  					
	printf("%d\n", maior);
	printf("%d\n", cont_posi);
      
	return 0;
}