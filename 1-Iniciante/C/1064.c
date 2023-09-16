#include <stdio.h>

int main()
{
    int i, qtd = 0;
    float val = 0.0;
    float soma = 0.0;

    for(i = 0; i < 6;i++){
        scanf("%f", &val);
        if (val >= 0){
            qtd++;
            soma += val;
        }
    }
		
	printf("%d valores positivos\n", qtd);	
	printf("%.1f\n", soma/(float)qtd);
	
	return 0;
}