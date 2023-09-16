#include <stdio.h>

#define pi 3.14159

int main(){

  double raio, area;

  scanf("%lf", &raio);

  raio = raio * raio;

  area = pi * raio;

  printf("A=%.4lf\n", area);

  return 0;
}