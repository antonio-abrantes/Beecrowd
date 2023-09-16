#include <stdio.h>
#include <stdlib.h>

int ordena(const void* a, const void* b){
	int na = *(int*)a;
	int nb = *(int*)b;
	
	return na - nb;	
}

int main(){
	
	int a, b, c, d;
	int vetor[4];
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	vetor[0] = a;
	vetor[1] = b;
	vetor[2] = c;
	vetor[3] = d;
	
	qsort(vetor, 4, sizeof(int), ordena);
	
	if(vetor[3] < vetor[1]+vetor[2] || vetor[2] < vetor[0]+vetor[1]){
		printf("S\n");
	}
	else 
		printf("N\n");
	
	return 0;
}