//entradas y salidas en C
#include <stdio.h>

int main(){
    int q ;
    float w ;
    char e[40];

    printf("Escribe el valor de la variable a(int) \n");
    scanf("%i",&q);

    printf("El valor que escribiste es %i\n", q);

    printf("Digita el valor de la variable flotante \n");
    scanf("%f",&w);

    printf("El valor del flotante es %.3f\n", w);

    printf("Digita el valor de la variable char \n");
    scanf("%s", e);

    printf("El valor del char es %s\n", e);


    return 0;
}