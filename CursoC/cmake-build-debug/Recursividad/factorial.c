//
// Created by Usuario on 15/04/2024.
//

int Factorial(int numero){
  int resultado;
  if(numero<2)
    return 1;
    resultado = Factorial(numero-1)*numero;
    return resultado;
}

int
main(){
  int n;
  printf("Factorial de: ");
  scanf("%i", &n);

  printf("\n%i", Factorial(n));
  return 0;
}