//Tipos de Datos en C

#include <stdio.h> //Libreria
#include <stdbool.h> //Libreria para los booleanos

int main(){
    int a = 1; //Números Enteros / 2 bytes
    char b = 'z'; //Caracteres / 1 byte
    float c = 1.5; //Números decimales / 4 byte
    double d = 1.555555555; //Números decimales con mas espacio de almacenaje / 8 bytes
    short e = 2; //Numeros enteros menos bits / 2 bytes
    long g = 2; //Numeros enteros largos / 4 bytes
    unsigned int f = 123; // 2 bytes


    printf("El valor entero es de %i\n",a);
    printf("El valor char es de %c\n",b);
    printf("El valor flotante es de %f\n",c);
    printf("El valor double es de %lf\n",d);
    printf("El valor short es de %i\n",e);
    printf("El valor long es de %li\n",g);
    printf("El valor unsigned int es de %i\n",f);



}