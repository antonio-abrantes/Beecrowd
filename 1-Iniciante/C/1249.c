// 1249 - Rot13 - Removido da plataforma
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char msg[52], cod[52], sz = 0;
    unsigned int i = 0;
    
    while (gets(msg))
    {      
        sz = strlen(msg);
		for(i = 0;i < sz; i++)
        {
           if(isalpha(msg[i]))
           {
              if(!isalpha(msg[i]+13) || (isupper(msg[i]) && msg[i]+13 > 90))
                 msg[i]-=13;
               else
                 msg[i]+=13;
               cod[i]=msg[i];
           }
           else
              cod[i]=msg[i];
        }
        cod[i]='\0';
        printf("%s\n", cod);
    }
    return 0;
}