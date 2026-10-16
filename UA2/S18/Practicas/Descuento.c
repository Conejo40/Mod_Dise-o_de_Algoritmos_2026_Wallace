/* Descuento.c - es el primer ejercicio de practica de ciclos. */

#include <stdio.h>

#define MINIMO 50000.0 /* Constantes globales */

int main(void){
    /* Declaracion de variables y constantes: */
    const double TASA = 0.10;   /* Constante local. */
    double compra, descuento, total;

    /* Entrada de datos: */
    printf("Monto de la compra: ");
    scanf("%lf", &compra);

    /* Validacion del descuento: */
    if (compra >= MINIMO){
        descuento = compra * TASA;
    } else {
        descuento =  0;
    }

    total = compra - descuento;

    /* Salida de datos: */
    printf("Descuento: %.2f\n", descuento);
    printf("Total a pagar: %.2f\n", total);

    return 0;
}