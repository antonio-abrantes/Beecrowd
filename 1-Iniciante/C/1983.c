#include <stdio.h>

typedef struct	
{
	int cod;
	float nota;	
} Aluno;

int main()
{
	int qtd, i, iMax = 0;
	float nMax = 0;
	
	scanf("%d", &qtd);
	
	Aluno aluno[qtd];
	
	for(i = 0; i < qtd; i++){
		scanf("%d %f", &aluno[i].cod, &aluno[i].nota);
		if(aluno[i].nota > nMax){
			nMax = aluno[i].nota;
			iMax = i;
		}
	}
    
	if(nMax >= 8){
		printf("%d\n", aluno[iMax].cod);
	}else{
		printf("Minimum note not reached\n");
	}  
    
    return 0;
}