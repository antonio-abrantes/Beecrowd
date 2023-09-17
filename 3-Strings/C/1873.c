#include <stdio.h>
#include <string.h>

int main()
{
	
	int ciclos;
	char joga1[30], joga2[30];
	
	scanf("%d", &ciclos);
	
	while(ciclos--)
	{
		scanf("%s %s", joga2, joga1 );
		
		
		if(strcmp(joga1, joga2) == 0){
			printf("empate\n");
			continue;
		}
				
		if(joga1[0] == 'S' && joga2[0] == 's'){
			printf("rajesh\n");
			continue;
		}
		if(joga1[0] == 's' && joga2[0] == 'S')
			continue;
		else{
			if(joga1[0] == 't'){
				if(joga2[2] != 'd' && (joga2[0] == 'p' || joga2[0] == 'l')){
					printf("sheldon\n");
					continue;
				}
				else if(joga2[0] == 's' || joga2[1] == 'e'){
					printf("rajesh\n");
					continue;
				}
			}
			if(joga1[0] == 'p' && joga1[2] != 'd'){
				if(joga2[2] == 'd' || joga2[0] == 's'){
					printf("sheldon\n");
					continue;
				}
				else if(joga2[0] == 'l' || joga2[0] == 't'){
					printf("rajesh\n");
					continue;
				}
			}
			if(joga1[0] == 'p' && joga1[2] == 'd'){
				if(joga2[0] == 'l' || joga2[0] == 't'){
					printf("sheldon\n");
					continue;
				}
				else if(joga2[0] == 'p' || joga2[0] == 's'){
					printf("rajesh\n");
					continue;
				}
			}
			if(joga1[0] == 's'){
				if(joga2[0] == 't' || (joga2[0] == 'p' && joga2[2] == 'd')){
					printf("sheldon\n");
					continue;
				}
				else if(joga2[0] == 'l' || joga2[2] != 'd'){
					printf("rajesh\n");
					continue;
				}
			}
			if(joga1[0] == 'l'){
				if(joga2[0] == 's' || (joga2[0] == 'p' && joga2[2] != 'd')){
					printf("sheldon\n");
					continue;
				}
				else if(joga2[0] == 't' || joga2[0] == 'p'){
					printf("rajesh\n");
					continue;
				}
			}
				
		}
		
	}
	
	return 0;
}