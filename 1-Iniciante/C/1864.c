#include <stdio.h>
//#include <string.h>

int main()
{	
	char frase[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	int i, num;
	//int espaco;
	
	scanf("%d", &num);
	
	//espaco = num - 1;
		
	for(i = 0; i < num; i++){
		//if(frase[espaco] == '_' && i == num - 1){
		//	break;
		//}
		//if(frase[i] == '\0'){
		//	break;
		//}
		printf("%c", frase[i]);
	}
	printf("\n");
	
	return 0;
}