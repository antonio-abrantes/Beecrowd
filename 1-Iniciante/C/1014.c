#include <stdio.h>

int main(){

  int X; //Distancia total percorrida
  float Y, consumoMedio; //Total de combustivel gasto

  scanf("%d", &X);
  scanf("%f", &Y);
  
  consumoMedio = X/Y;

  printf("%.3f km/l\n", consumoMedio);

  return 0;
}