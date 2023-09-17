#include <stdio.h>

int main()
{
	int num;
	
	while(scanf("%d", &num) != EOF)
	{
		if(num > 0){
			printf("vai ter duas!\n");
		}
		else{
			printf("vai ter copa!\n");
		}
	}
	
	return 0;
}