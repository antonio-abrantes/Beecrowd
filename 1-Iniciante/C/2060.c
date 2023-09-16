#include <stdio.h>

int main()
{
	int quantidade, numero = 0, div2 = 0, div3 = 0, div4 = 0, div5 = 0;
	
	scanf("%d", &quantidade);
	
	while(quantidade > 0){
		scanf("%d", &numero);
		
		if(numero % 2 == 0){
			div2++;
		}
		if(numero % 3 == 0){
			div3++;
		}
		if(numero % 4 == 0){
			div4++;
		}
		if(numero % 5 == 0){
			div5++;
		}	
		
		quantidade--;		
	}
	
	printf("%d Multiplo(s) de 2\n", div2);
	printf("%d Multiplo(s) de 3\n", div3);
	printf("%d Multiplo(s) de 4\n", div4);
	printf("%d Multiplo(s) de 5\n", div5);
	
	return 0;
}