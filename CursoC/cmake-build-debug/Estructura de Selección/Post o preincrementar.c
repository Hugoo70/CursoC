//
// Postincrementar o Preincrementar
//

#include <stdio.h>

int main() {

  //Postincrementar
  int a = 0;
  int b = ++a;

  printf("El valor de a es de: %i\n",a);
  printf("El valor de b es de: %i\n",b);
  printf("\n\n");

  //Preincrementar
  int c = 0;
  int d = c++;

  printf("El valor de c es de: %i\n",c);
  printf("El valor de d es de: %i\n",d);

  return 0;
}