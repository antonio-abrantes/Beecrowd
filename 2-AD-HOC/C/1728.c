#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i, j, num1, num2, result, soma, sair = 0, posi;
	char strNum1[15], strNum2[15], strResult[15], temp1[15], temp2[15], temp3[15];
	char equacao[100], aux[100];
	
	while(1){
	 scanf("%s", equacao);
	 posi = 0;
	 soma = 0;
	 for(i = 0; i < strlen(equacao); i++){
	 	if(equacao[i] == '+'){
			 strNum1[i] = '\0';
			 posi = i;
			 break;		 	 
		 }
		 strNum1[i] = equacao[i];		 
	 }
	 
	 strcpy(aux, equacao+posi+1);
	 strcpy(equacao, aux);

	 
	 for(i = 0; i < strlen(equacao); i++){
	 	if(equacao[i] == '='){
			 strNum2[i] = '\0';
			 posi = i;
			 break;
		 }
		 strNum2[i] = equacao[i];		 
	 }
	 
	 strcpy(aux, equacao+posi+1);
	 strcpy(strResult, aux);
	 	 
	 
	//printf("%s\n", strNum1);
	//printf("%s\n", strNum2);
	//printf("%s\n", strResult);
	
	
	j = strlen(strNum1) - 1;
	for(i = 0; i < strlen(strNum1); i++){
		temp1[i] = 	strNum1[j];
		j--;		
	}
	temp1[strlen(strNum1)] = '\0';
	
	j = strlen(strNum2) - 1;
	for(i = 0; i < strlen(strNum2); i++){
		temp2[i] = 	strNum2[j];
		j--;		
	}
	temp2[strlen(strNum2)] = '\0';
	
	j = strlen(strResult) - 1;
	for(i = 0; i < strlen(strResult); i++){
		temp3[i] = 	strResult[j];
		j--;		
	}
	temp3[strlen(strResult)] = '\0';
		
		//printf("\n\n");
		//printf("%d - %s\n", strlen(temp1), temp1);
		//printf("%d - %s\n", strlen(temp2), temp2);
		//printf("%d - %s\n", strlen(temp3), temp3);
	
		num1 = atoi(temp1);
		num2 = atoi(temp2);
		result = atoi(temp3);
		
		if(num1 == 0 && num2 == 0 && result == 0){
			sair = 1;
		}
	
		soma = num1 + num2;

		if(soma == result){
			printf("True\n");
		}else{
			printf("False\n");
		}
	
		if(sair == 1){
			break;
		}
	}
	
	return 0;
}