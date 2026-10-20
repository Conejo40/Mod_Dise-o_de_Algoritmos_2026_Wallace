/* 1. Reciba el nombre completo del estudiante.
2. Reciba tres calificaciones de 0 a 100 y las guarde en un arreglo. Cada calificación fuera de
rango se rechaza con un mensaje y se vuelve a pedir.
3. Calcule el promedio de las tres calificaciones y busque la calificación más alta recorriendo el
arreglo.
4. Determine la condición: APROBADO si el promedio es 70 o más; EN RIESGO si es 60 o más,
pero menor que 70; NO APROBADO si es menor que 60. Guarde la condición en una cadena.
5. Muestre el nombre, las tres calificaciones, el promedio (dos decimales), la calificación más alta y
la condición. */

#include <stdio.h>
#include <string.h>

#define NOTA_MIN 0
#define nOTA_MAX 100

int main(void){
    /* Declaracion de variables: */
    char estudiante[20], condicion[20];
    double calificaciones[3];
    double promedio;
    int i;


    printf("=== Calificaciones del estudiante ===\n");
    printf("Nombre del estudiante: ");
    fgets(estudiante, sizeof(estudiante), stdin);
    estudiante[strcspn(estudiante, "\n")] = '\0';

    /* Se hace para guardar las notas en calificaciones. */
    for (i = 0; i < 3; i++){
            /* Se repite hasta que las calificaciones sean de 0 a 100. */
            do{
                printf("Clalificacion %d: ", i + 1);
                scanf("%lf", &calificaciones[i]);

                if(calificaciones[i] < NOTA_MIN || calificaciones[i] > nOTA_MAX){
                    printf("Calificacion invalida...\n");
                }
        
            } while (calificaciones[i] < NOTA_MIN || calificaciones[i] > nOTA_MAX);
    }

    /* Se calcula el promedio: */
    promedio = (calificaciones[0] + calificaciones[1] + calificaciones[2]) / 3;


    /* Salida de datos: */
    printf("--------- Resultado ---------\n");
    printf("Estudiante: %17s\n", estudiante);
    printf("Calificacion 1: \t%.2f\n", calificaciones[0]);
    printf("Calificacion 2: \t%.2f\n", calificaciones[1]);
    printf("Calificacion 3: \t%.2f\n", calificaciones[2]);
    printf("Promedio: \t\t%.2f\n", promedio);

    /* Se valida la calificacion mas alta. */
    if (calificaciones[0] > calificaciones[1] && calificaciones[0] > calificaciones[2]){
        printf("Nota mas alta: \t\t%.2f\n", calificaciones[0]);
    } else if (calificaciones[1] > calificaciones[0] && calificaciones[1] > calificaciones[2]){
        printf("Nota mas alta: \t\t%.2f\n", calificaciones[1]);
    } else {
        printf("Nota mas alta: \t\t%.2f\n", calificaciones[2]);
    }

    /* Se valida la condicion del estudiante. */
    if (promedio >= 70 && promedio <= 100){
        strcpy(condicion, "APROBADO");
    } else if (promedio >= 60 && promedio < 70){
        strcpy(condicion, "EN RIESGO");
    } else {
       strcpy(condicion, "NO APROBADO");
    }

    printf("Condicion: %19s", condicion);


    return 0;
}