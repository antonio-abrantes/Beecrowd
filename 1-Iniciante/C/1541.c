#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f;
    while(1)
    {
        scanf("%d", &a);
        if(a==0) break;
        else
        {
            scanf("%d %d", &b,&c);
            d = a * b;
            //printf("%d\n", d);
            e =(d * 100)/c;
            f = pow(e,.5);
            printf("%d\n",f);
        }
    }
    return 0;
}