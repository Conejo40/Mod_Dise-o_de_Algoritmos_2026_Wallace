//Conversion de temperatura.
// Convierte grados Celsius a Fahrenheit.

#include <stdio.h>

int main(void){
    double celcius, fahrenheit;

    //Entrada de datos:
    printf("Temperatura en grados Celcius: ");
    scanf("%lf", &celcius);

    //Proceso:
    fahrenheit = celcius * 9 / 5 + 32;

    //Salida de datos:
    
    printf("%.0f °C equivalen a %.0f °F",celcius, fahrenheit);

    return 0;
}

