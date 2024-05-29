//
// Sumar un numero y restar el siguiente (1-2+3-4+5-6)
//
#include <stdio.h>

int
main(){
  int numPos,numNeg, num, i=1,neg, sumageneral;

  printf("Pide un numero y te sumara y restara los 5 siguientes");
  scanf("%i", &num);

  while(i<=num){
    if(i%2==0){
      neg = i*(-1);
      numPos += neg;
    }else{
      numNeg += i;
    }
    i++;
  }
  sumageneral = numNeg + numPos;
  printf("El resultado de la suma es de %i" ,sumageneral);
  return 0;
}
