#include <stdio.h>
#include <string.h>

int main()
{
	char um[] = "one", dois[] = "two" , tres[] = "three";
	char palavra[10];
	int repeticoes, i = 0, letras = 0, flag = 0;
	
	scanf("%d", &repeticoes);
	
	while(repeticoes > 0){
	scanf("%s", palavra);
	
	if(strlen(palavra) == 3){
		for(i = 0; i < 3; i++){
		if(um[i] == palavra[i]){			
			letras++;
			flag = 1;
			}
		else if(dois[i] == palavra[i]){
			letras++;
			flag = 2;
            }	
		}		
	}
	else{
		for(i = 0; i < 5; i++ ){
			if(tres[i] == palavra[i]){
				letras++;
				flag = 3;
			}
		}
	}
	
	if(flag == 1 && letras >= 2){
		printf("%d\n", 1);
	}
	else if(flag == 2 && letras >= 2){
		printf("%d\n", 2);
	} else if(flag == 3 && letras >= 4){
		printf("%d\n", 3);
	}
	repeticoes--;
	}		
	
	return 0;
}