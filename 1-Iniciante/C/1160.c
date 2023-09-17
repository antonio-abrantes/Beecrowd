#include <stdio.h>

int main(){

int testes;

scanf("%d", &testes);

	while(testes--){

	int pa,pb;
	float ga,gb;
	int anos = 0;

	scanf("%d %d %f %f",  &pa, &pb, &ga, &gb);
		
		while(pa <= pb && anos <=100){

				pa = pa + pa * (ga/100);
				pb = pb + pb * (gb/100);
				anos++;
		}

	if(anos > 100)
		printf("Mais de 1 seculo.\n");
	else
		printf("%d anos.\n", anos);
	}
	
	return 0;

}