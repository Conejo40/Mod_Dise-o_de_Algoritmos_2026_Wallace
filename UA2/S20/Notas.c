//Notas.c - Programa para practicar los arreglos.

#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(void){
    double notas [N]; /* Áca se define el arreglo  */
    double suma = 0, promedio, mayor, menor;
    int i;

    /* Lectura de datos: */
    for (i = 0; i < N; i++){
        /* validación de datos ingresados: */
        do{
            printf("Notas %d (0 a 100): ", i + 1);
            scanf("%d", &notas[(i)]); /* Guara en notas [i] */

        } while (notas[i] < 0 || notas[i] > 100);

        suma += notas[i];
        
    }

    promedio = suma / N;

    /* Áca se compara usando < y > el mayor y el menor */

    mayor = notas[0];
    menor = notas[0];

    for (i = 0; i < N; i++){
        if (notas[i] > mayor){
            mayor = notas[i];
        }

        if (notas[i] < menor){
            menor = notas[i];
        }
    }

    /* Salida de datos: */
    printf("Promedio %.2f\n", promedio);
    printf("Mayor %.1f Menor: %.1f\n", mayor, menor);

    /* Segndo recorrido */
    printf("Sobre el promedio:");

    for (i = 0; i < N; i++){
        if (notas[i] > promedio){
            printf("%.1f", notas[1]);
        }
    }

    printf("\n");

    system ("pause");

    return 0;
}