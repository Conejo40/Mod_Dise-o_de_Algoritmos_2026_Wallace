/* Nota.c - es el ultimo ejercicio practico */

#include <stdio.h>

int main(void){
    /* Declaracion de variables: */
    double nota;

    /* Se repite hasta que la nota sea valida */
    do{
        printf("Nota (0 a 100): ");
        scanf("%lf", &nota);

        if (nota < 0 || nota > 100){
            printf("Nota invalida: debe estar entre 0 y 100.\n");
        }

    } while (nota < 0 || nota > 100);

    printf("Nota registrada: %.1f\n", nota);

    if (nota >= 70){
        printf("Estado: Aprobado");
    } else {
        printf("Estado: Reprobado");
    }
    
    

    return 0;
}