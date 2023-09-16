#include <stdio.h>
#include <string.h>

int main()
{		    
    char jogador1[101], jogador2[101], escolha1[7], escolha2[7];
    int c, n1, n2, soma, ganhador;
    
    scanf("%d", &c);
    
    while(c > 0){
    	soma = 0;
    	ganhador = 0;
    	scanf("%100s %s %100s %s", jogador1, escolha1, jogador2, escolha2);
    	scanf("%d %d", &n1, &n2 );
    	
    	if(strcmp(escolha1, "PAR") == 0 && strcmp(escolha2, "IMPAR") == 0){			
			soma = n1 + n2;
			if(soma % 2 == 0){
				ganhador = 1;
			}
			else{
				ganhador = 2;
			}
		}
		else if(strcmp(escolha1, "IMPAR") == 0 && strcmp(escolha2, "PAR") == 0){
			soma = n1 + n2;
			if(soma % 2 != 0){
				ganhador = 1;
			}
			else{
				ganhador = 2;
			}
		}
		
		switch(ganhador)
		{
		case 1:
			printf("%s\n", jogador1);
			break;
		case 2:
			printf("%s\n", jogador2);
			break;
		}
		c--;	
	}
		
	return 0;
}