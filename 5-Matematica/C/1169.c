#include <stdio.h>

int main()
{
	unsigned long long int quadra, total = 0;
	int x, n, i = 0;
	scanf("%d", &n);
	
	while(n--){
		scanf("%d", &x);
		quadra = 1;
		if(x == 64){
			total = 1537228672809129ULL;
		}
		else{
			for(i = 0; i < x; i++){
				quadra = quadra * 2;
			}
			total = (quadra/12) / 1000;	
		}
		printf("%llu kg\n", total);
	}
		
	return 0;
}