//
// Dadas las horas trabajadas y el valor de la hora calcula su horario
//

#include <stdio.h>

int
main(){

  int horas, salarioHora, salarioTotal;

  printf("Digite las horas trabajadas\n");
  scanf("%d", &horas);

  printf("Digite el salario por hora\n");
  scanf("%d", &salarioHora);

  salarioTotal = horas*salarioHora;

  printf("El salario tota es: %d", salarioTotal);
  return 0;
}
