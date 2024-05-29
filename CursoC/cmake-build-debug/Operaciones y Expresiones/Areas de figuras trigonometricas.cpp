//
// Areas de figuras trigonometricas

#include <stdio.h>
#include <tgmath.h>

int
main(){
/*
  float base,altura,area;

  printf("Este programa calcula el area de un triangulo, inserta la base y la altura\n");
  scanf("%f %f", &base, &altura);

  area = (base*altura)/2;
  printf("El area del triangualo es %.2f\n", area);
*/

  float lado, area;
  printf("Este programa calcula el area de un cuadrado\nInserta el valor del lado");
  scanf("%f", &lado);

  area = powf(lado,2);
  printf("El area del cuadrado es %.2f\n", area);

  return 0;
}
