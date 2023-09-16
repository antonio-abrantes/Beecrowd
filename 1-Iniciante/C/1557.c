#include <stdio.h>

int numberDigits(int x)
{
	int count = 1;
	while(x > 9)
	{
		x /= 10;
		count++;
	}
	return count;
}

int main()
{	
	int i, j, l, n, tmp, followMe, nDigits, max, val, dif;

	while(scanf("%d", &n) && (n != 0))
	{
		int array[n][n];
		tmp = 1;
		followMe = 1;
		max = 0;

		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < n; ++j)
			{
				array[i][j] = tmp;
				if(j != (n - 1))
					tmp *= 2;
			}
			if(max < tmp)
				max = tmp;
			followMe *= 2;
			tmp = followMe;
		}

		nDigits = numberDigits(max);

		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < n; ++j)
			{
				val = numberDigits(array[i][j]);
				dif = nDigits - val;
				
				for (l = 0; l < dif; ++l)
					printf(" ");
				printf("%d", array[i][j]);
				if(j != (n - 1))
					printf(" ");
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}