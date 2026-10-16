/* Bisiesto.c - es el tercer ejercicio de practica de condicionales. */

#include <stdio.h>
#include <stdbool.h>    /* Libreria para variables booleanas. */

int main(void){
    /* Declaracion de variables y constantes: */
    int año;
    bool esBisiesto;

    /* Entrada de datos: */
    printf("Año: ");
    scanf("%d", &año);

    esBisiesto = (año % 4 == 0 && año % 100 != 0) || año % 400 == 0;
    /* printf("¿Es bisiesto? %s", esBisiesto ? "Verdadero" : "Falso"); */
    printf("%d %s\n", año, esBisiesto ? "es bisiesto" : "no es bisiesto");

    return 0;
}