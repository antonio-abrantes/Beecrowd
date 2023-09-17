#include <stdio.h>
#include <string.h>

int main()
{
	
	int ciclos, casos = 0;
	char joga1[30], joga2[30];
	
	scanf("%d", &ciclos);
	
	while(ciclos--)
	{
		casos++;
		scanf("%s %s", joga1, joga2 );
		
		if(strcmp(joga1, joga2) == 0){
			printf("Caso #%d: De novo!\n", casos);
			continue;
		}else{
			if(joga1[0] == 't'){
				if(joga2[2] != 'd' && (joga2[0] == 'p' || joga2[0] == 'l')){
					printf("Caso #%d: Bazinga!\n", casos);
					continue;
				}
				else if(joga2[0] == 'S' || joga2[1] == 'e'){
					printf("Caso #%d: Raj trapaceou!\n", casos);
					continue;
				}
			}
			if(joga1[0] == 'p' && joga1[2] != 'd'){
				if(joga2[2] == 'd' || joga2[0] == 'S'){
					printf("Caso #%d: Bazinga!\n", casos);
					continue;
				}
				else if(joga2[0] == 'l' || joga2[0] == 't'){
					printf("Caso #%d: Raj trapaceou!\n", casos);
					continue;
				}
			}
			if(joga1[0] == 'p' && joga1[2] == 'd'){
				if(joga2[0] == 'l' || joga2[0] == 't'){
					printf("Caso #%d: Bazinga!\n", casos);
					continue;
				}
				else if(joga2[0] == 'p' || joga2[0] == 'S'){
					printf("Caso #%d: Raj trapaceou!\n", casos);
					continue;
				}
			}
			if(joga1[0] == 'S'){
				if(joga2[0] == 't' || (joga2[0] == 'p' && joga2[2] == 'd')){
					printf("Caso #%d: Bazinga!\n", casos);
					continue;
				}
				else if(joga2[0] == 'l' || joga2[2] != 'd'){
					printf("Caso #%d: Raj trapaceou!\n", casos);
					continue;
				}
			}
			if(joga1[0] == 'l'){
				if(joga2[0] == 'S' || (joga2[0] == 'p' && joga2[2] != 'd')){
					printf("Caso #%d: Bazinga!\n", casos);
					continue;
				}
				else if(joga2[0] == 't' || joga2[0] == 'p'){
					printf("Caso #%d: Raj trapaceou!\n", casos);
					continue;
				}
			}
				
		}
		
	}
	
	return 0;
}