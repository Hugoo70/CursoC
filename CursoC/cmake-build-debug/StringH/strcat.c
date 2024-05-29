//  strcat(Destino, Fuente)
//  Concatena (Agrega) la cadena en el destino. Debes considerar que la cadena destino
//  debe tener un tamaño tal que pueda albergar la cadena resultante


#include <stdio.h>
#include <string.h>

int
main(){

  char Cadena1[] = "Jorge",Cadena2[]="Ricardo";
  char Final[50];

  //Concatenamos
  strcat(Final,Cadena1);
  strcat(Final,"-");
  strcat(Final,Cadena2);
  printf("%s",Final); // imprime 'Jorge-Ricardo'

  return 0;
}
