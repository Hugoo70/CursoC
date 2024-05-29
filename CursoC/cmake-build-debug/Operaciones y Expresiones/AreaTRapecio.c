//
// Area de un trapecio
//

#include <stdio.h>

int
main(){

  float base_Mayor, base_menor, altura, area;

  printf("Escribe la base mayor\n");
  scanf("%f", &base_Mayor);

  printf("Escribe la base menor\n");
  scanf("%f", &base_menor);

  printf("Escribe la altura\n");
  scanf("%f", &altura);

  area = ((base_Mayor + base_menor)*altura)/2;

  printf("El area es: %.2f", area);

  return 0;
}