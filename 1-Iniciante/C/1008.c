#include <stdio.h>

int main(){

  int num_funcionario, num_horas;
  float valor_recebido, salario;

  scanf("%d", &num_funcionario);
  scanf("%d", &num_horas);
  scanf("%f", &valor_recebido);

  salario = num_horas * valor_recebido;

  printf("NUMBER = %d\nSALARY = U$ %.2f\n", num_funcionario, salario);

  return 0;
}