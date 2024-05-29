//  Permite copiar una cadena de texto en otra. Debes considerar que la dimensión del array
// destino debe ser igual o mayor que el array Origen y que además sobrescrbie el contenido
// destino

#include <stdio.h>
#include <string.h>

int
main(){

  char Origen[]="Programacion";
  //Programacion tiene 12 caracteres
  //Creamos el array destino de la misma dimension

  char Destino[12];
  //Copiamos el contenido y lo mostramos
  strcpy(Destino,Origen);
  printf("%s", Destino);
  return 0;
}