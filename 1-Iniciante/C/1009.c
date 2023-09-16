#include <stdio.h>

int main(){
    char nome_funcionario[15];
    double salario_fixo, total_vendas, salario_final;


  scanf("%s", nome_funcionario);
  scanf("%lf", &salario_fixo);
  scanf("%lf", &total_vendas);

  total_vendas = (total_vendas * 15)/100;

  salario_final = salario_fixo + total_vendas;

  printf("TOTAL = R$ %.2lf\n", salario_final);

  return 0;
}