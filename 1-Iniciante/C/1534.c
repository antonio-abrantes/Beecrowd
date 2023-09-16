#include <stdio.h>

int main()
{
	int n, i, j, a, b;

	while(scanf("%d", &n) == 1)
	{
		a = 0, b = (n - 1);
		
		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < n; ++j)
			{
				if(j == b && i == a){
					printf("%d", 2);
				}else if (i == j){
					printf("%d", 1);
				}else{
					printf("%d", 3);
				}
			}
			a++;
			b--;
			printf("\n");;
		}
	}
	
	return 0;
}