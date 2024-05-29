//
// Created by Usuario on 15/04/2024.
//
#include <stdio.h>

int ImprimirNum(int num){

  do{
    printf("El numero es: %i", &num);
    ImprimirNum(num-1);
  }while(num<1);
}

int main(){
  int n;
  printf("Dime un numero: ");
  scanf("%i", &n);

  ImprimirNum(n);
}
