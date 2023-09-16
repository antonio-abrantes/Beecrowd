#include <stdio.h>

int main()
{
	int i, n[1000], t, temp;
	
	scanf("%d", &t);
	
	temp = 0;	
	for(i = 0; i < 1000; i++){
			n[i] = temp;
			printf("N[%d] = %d\n", i, n[i]);
			temp++;
			if(temp == t){
				temp = 0;
			}			
		}		

	return 0;
}