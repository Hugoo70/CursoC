#include <stdio.h>

int main(){
    float num1, num2, suma, resta, multi, division;

    printf("Escribe 2 números \n");
    scanf("%f %f", &num1, &num2);

    suma = num1 + num2;
    resta= num1 - num2;
    multi= num1 * num2;
    division= num1 / num2;

    printf("la suma es: %.2f\nLa resta es: %.2f\nLA multiplicacion es: %.2f\nLa division es: %.2f\n",suma,resta,multi,division);

    return 0;
}