#include <stdio.h>
#include <ctype.h>

int main()
{
   char str[10000];
   char *p;
   char temp, aux;
   int jaMarcou;
   int n;
   
   while (gets(str)) {
      p = str;
      n = 0;
      jaMarcou = 0;
      temp = '\0';

      while (*p != '\0') {
         aux = tolower(*p);

         if (aux == temp && !jaMarcou) {
            n++;
            jaMarcou = 1;
         } else if (aux != temp) {
            jaMarcou = 0;
            temp = aux;
         }

         while (*p != ' ' && *p != '\0'){
			p++;	 
		 }
		 if(*p == '\0') break;
            
         p++;
      }

      printf("%d\n", n);
   }

   return 0;
}