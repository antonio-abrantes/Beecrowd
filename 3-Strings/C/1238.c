#include <stdio.h>
#include <string.h>

int main(){
	char a[50], b[50];
    int i, j, n, x, y, tmp, tam, size_a, size_b;
    
    scanf("%d%*c", &n);;
    
    for (i = 0; i < n; ++i) {
        scanf("%50s %50s", a, b);
        
        tam = strlen(a) + strlen(b);
        
        size_a = strlen(a);
        size_b = strlen(b);
        
        x = 0;
        y = 0;
        tmp = 0;
        
        for (j = 0; j < tam; ++j) {
            
            if (tmp == 0) {
                tmp = 1;
                if (x != size_a) {
                    printf("%c", a[x]);
                    x++;
                }
            }
            if (tmp == 1) {
                tmp = 0;
                if (y != size_b) {
                    printf("%c", b[y]);
                    y++;
                }
            }
        }
        
        printf("\n");
    }
	
	return 0;
}