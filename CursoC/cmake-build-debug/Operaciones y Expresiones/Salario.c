//
// Aumentar el salario de una empresa el 10%

#include <stdio.h>

int
main(){
  char nombre[40];
  int salario;
  float aumentosalario;

  printf("Inserte su nombre por favor\n");
  gets(nombre);

  printf("Su nombre es %s\n", nombre);
  printf("Inserte su salario\n");
  scanf("%i", &salario);

  aumentosalario = (salario *.1)+salario;

  printf("Felicidades %s tu salario ahora es de %.2f", nombre, aumentosalario);

  return 0;
}
