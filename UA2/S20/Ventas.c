/* Ventas.c - es una cadena de sodas por sucursal y por día 
   Que logra? : Guardar en matriz las ventas de 3 sucursales en 4 dias 
   Suma cada sucursal (fila) y cada día por medio de la (columna) e identificar la sucursaque más vendió,
   con su nombre guardado en una cadena.*/
/* resultado esperado: Centro 470, norte 350, sur 410; poracada día 330 270 330; sucursal con más ventas: Centro (470). */

#include <stdio.h>
#include <stdlib.h> /* strcpy */
#include <string.h>

#define SUC 3   /* Filas por sucursales. */
#define DIAS 4  /* Columnas dias. */

int main(void){
    /* Iniciamos con arreglo de cadenas: Una fila por nombre (hasta 9 letras + \0) */
    char nombres [SUC] [10] = {"Centro", "Norte", "Sur"};

    /* Ventas de miles de colones: */
    int ventas [SUC] [DIAS] = {{120, 100, 130, 120},
                                {90, 80, 100, 80},
                                {120, 90, 100, 100}};
    
    char mejor [10] = /* Nombre: Sucursal con más ventes. */
    int s, d, total, total_dia, mayor = 0;

    /* Encabezado de D1 a D4. */
    printf("%-8s", "");
    for (d = 0, d < DIAS; d++){
        printf("D%d", d + 1);
    }

    printf(" | Total\n");

    /* Recorrido por filas: */
    for (s = 0; s < SUC; s++){
        total = 0;  /* Reinicia cada fila. */
        printf("%-8s", nombres[s]);  /* Nombre a la izquierda */
        for (d = 0; d < DIAS; d++){
            printf("%5d", ventas[s] [d]);
            total += ventas [s] [d];
        }

        printf(" | %5d\n", total);  /* 470,370,410 */
    }

    /* Recorrido por columnas: Por extremo recorre los dias. */
    printf("%-8s", "Día");
    for (d = 0; d < DIAS; d++){
        total_dia = 0;
        for (s = 0; s < SUC; s++){
            total_dia += ventas [s] [d];
        }

        printf("%5d", total_dia);
    }

    printf("\n");
    /* Salida de datos: Sucursal con más ventas: Centro 470.*/
    printf("Sucursal con más ventas: %s (%d)\n", mejor, mayor);

    system ("pause");

    return 0;
}