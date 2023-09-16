#include <stdio.h>

int main()
{
	int N[20],troca, i;
   
    for (i = 0; i < 20; i++) {
        scanf("%d", &N[i]);
    }
     
    for (i = 0; i < 10; i++) {
        troca = N[19 - i];
        N[19 - i] = N[i];
        N[i] = troca;
    }
     
    for (i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }
      
	return 0;
}