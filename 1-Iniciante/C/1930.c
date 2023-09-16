#include <stdio.h>

int main()
{
	int t1, t2, t3, t4, total;
	
	scanf("%d %d %d %d", &t1, &t2, &t3, &t4);
	
		t1 = t1 - 1;
		t2 = t2 - 1;
		t3 = t3 - 1;
		
		total = t1 + t2 + t3 + t4;

		printf("%d\n", total);
	
	
	return 0;
}