#include <stdio.h>

int main()
{
	long int i, q, cont1 = 0, cont0 = 0;
	scanf("%ld", &q);
	long int v[q];
	
	for(i = 0; i < q; i++){
		scanf("%ld", &v[i]);
		if(v[i] == 1){
			cont1++;
		}
		else{
			cont0++;
		}
	}
	
	if(cont1 >= cont0){
		printf("N\n");	
	}else{
		printf("Y\n");
	}	
	
	return 0;
}