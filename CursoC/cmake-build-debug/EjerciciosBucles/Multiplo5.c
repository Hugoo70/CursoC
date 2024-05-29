#include <stdio.h>

int
main(){
  int n,i;

  printf("Escribe el numero hasta el que quieres que se calculen los numeros\n");
  scanf("%i", &n);

  i=0;
  while(i<=n){
    if(i%5==0){
      printf("%i es un multiplo de 5\n", i);
    }
    i++;
  }
  return 0;
}