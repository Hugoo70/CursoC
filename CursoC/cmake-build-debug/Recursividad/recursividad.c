//
// Created by Usuario on 15/04/2024.
//

#include <stdio.h>

void cuentaRegresiva(int numeroActual){
  if(numeroActual < 0){
    // si el argumento es menor que 0, ya terminamos
    return;
  }else{
    // En caso contrario, muestra el nu,ero y ejecuta a ti misma con drecremento
    printf("\n%d", numeroActual);
    cuentaRegresiva(numeroActual-1);
  }
}

int main(){
  int n;
      printf("Numero a empezar\n");
      scanf("%d", &n);
      cuentaRegresiva(n);
}
