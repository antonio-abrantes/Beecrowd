#include <stdio.h>

int main(){
	
	int i, x, z, soma = 0, cont = 0;
	
	scanf("%d",&x);
	
	do{
		scanf("%d", &z);
		if(z > x){
			for(i = x; soma <= z; i++){
				soma = soma + i;				
				cont++;
			}
		}
	}while(z <= x);
	
	printf("%d\n", cont);
	
	return 0;
}