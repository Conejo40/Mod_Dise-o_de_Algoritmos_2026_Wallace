// reporte.c - Programa con errores que arreglar.
#include <stdio.h>

int main(void) {
    printf("Reporte de ventas\n");
    printf("Total: 25000\n");
    printf("Gracias por su compra\n");
    return 0;
}

// Tabla de errores
//===========================================================================================
//1. Linea 4
// Mensaje de gcc: Error de tipo, Int no se considera un entero.
// Correcion: Cambiar la I mayuscula por i minuscula (C es sensible a estas cosas).

//2. Linea 5
// Mensaje de gcc: Error, el programa no ejecuta porque falta el (;) al final del printf
// Correcion: Agregar al final ;.

//3. Linea 6
// Mensaje de gcc: Error, Printf no se considera una funcion integrada.
// Correcion: Cambiar la P mayuscula por p minuscula (C es sensible a estas cosas). 

//3. Linea 7
// Mensaje de gcc: Error, no se ternino la frase.
// Correcion: Agregar las comillas dobles a al final.

//3. Linea 6
// Mensaje de gcc: Error, falto cerrar las llaves del final de la funcion main.
// Correcion: Agregar la llave que falta al final de la funcion main.
//===========================================================================================