#include <stdio.h>

int main()
{
    int i, tipo, cont[5], a, b, c, d, e, soma = 0;
    
    scanf("%d", &tipo);
    
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    cont[0] = a;
    cont[1] = b;
    cont[2] = c;
    cont[3] = d;
    cont[4] = e;
    
    for(i = 0; i < 5; i++){
		if(cont[i] == tipo){
			soma++;
		}
	}
	
	printf("%d\n", soma);

   return 0;
}