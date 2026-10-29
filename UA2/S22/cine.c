/* Cine.c - es un programa donde se hacen 10 comprar como máximo, cada cliente puede comprar un máximo de 8 entradas; de 5 entradas para arriba se aplica un descuento del 10%, si el dato es invalido se vuelve a pedir sino continua y al final se muestra una tabla con las entradas que compró cada cliente, los descuentos si hay, montos de venta (total e individual), y quien compro más entradas. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Declaracion de constantes */
#define MAX_COMPRAS 10
#define GENERAL 3500
#define NIÑOS 2500
#define ADUL_MAYOR 2000
#define PARA_DESC 5
#define TASA_DESCUENTO 0.10

/* Declaracion de funciones */
int leerEntero();
float precioEntrada();
float calcTotal();
void resumir();

/* Funcion principal: */
int main(void){
    /* Declaracion de variables: */
    char clientes[MAX_COMPRAS][15];
    int cantidades[MAX_COMPRAS];
    float totales[MAX_COMPRAS];

    /* Cantidad de compras, indice, tipo de entrada */
    int i, n, tipo;
    /* Cantidad de compras: */
    float totalVendido;
    /* Resultado: */
    int porMayor, conDescuentos;

    /* Portada */
    
    printf("===== VENTA DE ENTRADAS =====\n");
    printf("Tpos: 1. General -> 3500\n 2. Niños -> 2500\n 3. Adulto Mayor -> 2000");

    /* Leer cantidadde compras: */
    n = leerEntero("Cantidad de compras: ", 1, MAX_COMPRAS);

    /* Vuelta por entrada: */
    for (i = 0; i < n; i++){
        printf("Compras %d\n Cliente: ", i + 1);
        scanf("%14s", clientes[i]);

        /* Se lee el tipo de entrada: */
        tipo = leerEntero("Ingrese el tipo: ", 1, 3);

        /* Se lee la cantidad de entradas */
        cantidades[i] = leerEntero("Entradas", 1, 8);

        /* Calcular total de la compra */
        totales[i] = calcTotal(tipo, cantidades[i]);
    }
    
    /* Calcular el resumen en una pasada: */
    resumir(cantidades, totales, n, &totalVendido, &porMayor, &conDescuentos);

    /* Encabezado de la tabla: */
    printf("%_12s %9d %12.2f", clientes[i], cantidades[i], totales[i]);

    /* Recorrer las compras */
    for (i = 0; i < n; i++){
        printf("%_12s %9d %12.2f", clientes[i], cantidades[i], totales[i]);

        /* Total vendido: */
        printf("Total vendido: %12.2f\n", totalVendido);

        /* Compra mayor: */
        printf("Compra mayor: %12.2f\n", clientes[porMayor], totales[porMayor]);

        /* Compras con descuento: */
        printf("Con descuento:      %d compras(s)\n", conDescuentos);

        /* Total vendido: */
        printf("Total vendido: %12.2f\n");
    
    }
    

    /* Fin del main */
    return 0;
}

