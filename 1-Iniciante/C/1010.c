#include <stdio.h>

int main(){
    int pc1, pc2, n_pc1, n_pc2;
    float v_pc1, v_pc2, valor_total;

    scanf("%d %d %f", &pc1, &n_pc1, &v_pc1);
    scanf("%d %d %f", &pc2, &n_pc2, &v_pc2);


    valor_total = (n_pc1 * v_pc1) + (n_pc2 * v_pc2);

  printf("VALOR A PAGAR: R$ %.2f\n", valor_total);

  return 0;
}