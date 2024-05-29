//Directivos de Preprocesador y Variables

#include <stdio.h> //Libreria
#define PI 3.1426 //Macro

int y = 5; //Variable Global

int main(){
    int x = 10; //Variable local

    float suma = 0;

    suma = PI + x;

    printf("La suma es: %.4f", suma);
    return 0;
}
