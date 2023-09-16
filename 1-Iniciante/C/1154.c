#include <stdio.h>

int main()
{
	int idade, somaIdade = 0;
	float mediaIdades = 0;
	
	while(1){
		scanf("%d", &idade);
		if(idade < 0){
			printf("%.2f\n", (float)somaIdade / mediaIdades);
			break;
		}
		else{
			somaIdade = somaIdade + idade;
			mediaIdades++;
		}
	}
	
	return 0;
}