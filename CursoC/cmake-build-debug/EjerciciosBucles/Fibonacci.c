//
// Serie de Fibonacci
//
#include <stdio.h>

int
main(){

  int numero, x=0, y=1,z=1;
  printf("Escribe el numero de Elementos");
  scanf("%d", &numero);

  printf("0, 1");

  for (int i = 1; i < numero; ++i) {
      z= x + y;
      x=y;
      y= z;

      printf(", %d", z);
  }

  return 0;
}
