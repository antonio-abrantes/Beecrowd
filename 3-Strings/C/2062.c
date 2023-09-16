#include <stdio.h>
#include <string.h>

int main()
{
   char OBI[] = "OB", URI[] = "UR", palavra[21];
   int qtdPalavras, teste1, teste2, i = 0;
   
   scanf("%d", &qtdPalavras);
   
   while(qtdPalavras > 0)
   {
	   scanf("%s", palavra);   	
   		teste1 = 0;
   		teste2 = 0;
	   if(strlen(palavra) == 3){
		   for(i = 0; i < 3; i++){
			   if(palavra[i] == OBI[i]){
				   teste1++;
			   }
			   else if(palavra[i] == URI[i]){
				   teste2++;
			   }
		   }
		   
		   if(teste1 == 2){
			   strcpy(palavra, "OBI");
		   }
		   if(teste2 == 2){
			   strcpy(palavra, "URI");
		   }
	   }
	   
	   printf("%s", palavra);
	   if(qtdPalavras > 1){
		   printf(" ");
	   }
	   qtdPalavras--;
   }
   printf("\n");
    
      
    return 0;
}