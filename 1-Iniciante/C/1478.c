#include <stdio.h>

int main()
{
	int n, d, x, i, j, tmp;

	while(scanf("%d", &n) && n != 0)
	{
        int matriz[n][n];
        d = 1;
        x = 0;
                     
        for(i = 0; i < n; ++i){
            for(j = x; j < n; ++j){
                    matriz[i][j] = d;
                    d++;
            }
            x++;
            d = 1;
        }
         
        d = 2;
        tmp = n - 2;
        for(i = n-1; i > 0; i--){
            for(j = tmp;j >= 0; j--){
                matriz[i][j] = d;
                d++;
            }
            tmp--;
            d = 2;
        }
         
        for(i = 0; i < n; i++){
           for(j = 0; j < n; j++){
              if(j == n - 1){      
                printf("%3d", matriz[i][j]);
                printf("\n");
              }else{
                printf("%3d ", matriz[i][j]); 
              }
           }
        }
        printf("\n");	
    }

	return 0;
}