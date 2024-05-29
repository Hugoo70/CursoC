// *  Hacer un bucle do...while para imprimir las letras
// *  minusculas del alfabeto

#include <stdio.h>

int main(){

  char letra = 'a',LETRA = 'A';

      do {
          printf("%c.\n",letra);
          letra++;
      }while(letra <= 'z');

      do {
          printf("%c.\n",LETRA);
          LETRA++;
      }while(LETRA<= 'Z');

  return 0;
}
