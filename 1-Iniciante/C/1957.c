#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
 char hexa[50];
 char *hexadecimais = "0123456789ABCDEF";
 
 int divisor = 16;
 int resto = 0;
 int i, quociente;
 int temp = 0;
 char tmp[5];
 
	strcpy(hexa, ""); //Limpar o conteudo

	scanf("%d", &quociente);
 
 	 while(quociente >= divisor){
	 	 resto = quociente % divisor;
	 	 temp = quociente/divisor;
	 	 quociente = temp;
	 
	 	 sprintf(tmp, "%c", hexadecimais[resto]);
	 
	 	 strcat(hexa, tmp); //Concatentano o valor encontrado
 	 }
 
 	 sprintf(tmp, "%c", hexadecimais[quociente]);
 	 strcat(hexa, tmp);
 
 for(i = strlen(hexa) -1; i >= 0; i--){
	 printf("%c", hexa[i]);
 }
 printf("\n");

 return 0;
}