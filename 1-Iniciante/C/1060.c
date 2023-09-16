#include <stdio.h>

int main()
{
	float quantidade = 6;
	float num = 0;
	int somaPosi = 0;

	
    while (quantidade--){
           scanf("%f", &num);
		    
			if(num == 0){
                continue;
			}
            else if(num > 0) {
                somaPosi++;
            } 
		}
		
	printf("%d valores positivos\n", somaPosi);	
	
	return 0;
}