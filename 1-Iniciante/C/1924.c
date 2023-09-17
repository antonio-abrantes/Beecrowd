#include <stdio.h>

int main()
{
	char curso[102], cursoCerto[] = "Ciencia da Computacao";
	int ciclos;
	
	scanf("%d", &ciclos);
	fflush(stdin);
	
	while(ciclos > 0)
	{
		gets(curso);
		ciclos--;
	}
	
	printf("%s\n", cursoCerto);
	
	return 0;
}