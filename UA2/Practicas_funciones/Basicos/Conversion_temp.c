/* Practica 2 de funciones - Programa que convierte celcius a farenheits. */

#include <stdio.h>

#define FACTOR 1.8

/* Declaracion de la funcion */
float celsiusAFahrenheit(int num);

int main(void){
    float celcius;
    float fahrenheit;

    printf("Ingrese el numero que desea convertir a Fahrenheit: ");
    scanf("%f", &celcius);

    fahrenheit = celsiusAFahrenheit(celcius);

    printf("Los celcius %.0f convertidos a farenheits %.0f", celcius, fahrenheit);

    return 0;
}

/* Definicion de la funcion: */
float celsiusAFahrenheit(int num){
    float resultado = num * FACTOR + 32;

    return resultado;
}