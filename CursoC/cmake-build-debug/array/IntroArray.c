//
// Created by Usuario on 15/04/2024.
//
#include <stdio.h>

int main(){
  int array[3] = {24, 5, 96};
  // Accedemos a los valores individualmente
  printf("\nPrimer Valor %i", array[0]);
  printf("\nSegundo Valor %d", array[1]);
  printf("\nTercer Valor %d", array[2]);

  array[0] = 54;
  printf("\nEl nuevo valor del indice 0 es: %d", array[0]);
  return 0;
}