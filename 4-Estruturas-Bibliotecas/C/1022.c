#include <stdio.h>

int mdc(int a,int b)
{
    if(b == 0)
		return a;
    else
    	return mdc(b, a%b);
} 

int main()
{
	int ciclos, a, b, c, d;
	char oper;
	int max, min, res;
	
	scanf("%d", &ciclos);
	
	while(ciclos--)
	{

		scanf("%d / %d %c %d / %d", &a, &b, &oper, &c, &d);
		if(oper == '/'){
			max = b * c;
			res = a * d;
			printf("%d/%d = ",res,max);
			min = mdc(res,max);
            printf("%d/%d\n",res/min,max/min);
		}else{
			max = b*d;
                 if(oper == '+')
				 	 res = a*(max/b) + c*(max/d);
                 else if(oper == '-')
				 	 res = a*(max/b) - c*(max/d);
                 else if(oper == '*')
				 	 res = a*c;
     	         printf("%d/%d = ",res,max);
                 min = mdc(res,max);
                 if(min < 0)
				 	 min = -1*min;
                 printf("%d/%d\n",res/min,max/min);
		}
	}
	
	return 0;
}