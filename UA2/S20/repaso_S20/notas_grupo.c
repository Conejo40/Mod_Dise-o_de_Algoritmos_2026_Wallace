//===========================================================================================

/* 1. Pida el nombre (una palabra) de 4 estudiantes y sus notas en 3 evaluaciones (de 0 a 100). 
Una nota inválida muestra un mensaje y se vuelve a pedir.
2. Guarde las notas en una matriz de 4 filas (estudiantes) por 3 columnas (evaluaciones).
3. Muestre una tabla con el nombre, las tres notas y el promedio de cada estudiante (dos 
decimales).
4. Muestre el promedio de cada evaluación (columna) y el estudiante con mejor promedio.
5. Al final, pida un nombre y búsquelo: si está, muestre su promedio y su condición (APROBADO
con 70 o más; si no, NO APROBADO); si no está, muéstrelo con un mensaje */

//=========================================================================================== 

/* * QUÉ SE LOGRA:
    Encontrar el promedio de cada evaluacion de los estudiantes.
    Encontrar el estudiante con mayor promedio.
    Buscar y encontrar al estudiante y su condicion.
 
* CÓMO SE LOGRA:
    -do-while para validar los nombres y las notas
    -Arreglos para guardar promedios y nombres
    -for anidados para recorrer las matrices
    -condicionales con for para validar procesos
 
* RESULTADO ESPERADO:
   Muestra el nombre de los estudiantes
   Las 3 evaluaciones de cada estudiante
   El promedio total de cada estudiante y el promedio las evaluaciones
   Se busca por el nombre y se imprime la condicion del estudiante.
* */

//===========================================================================================

#include <stdio.h>
#include <string.h>

#define ESTUDIANTES 4
#define NOTAS 3

int main(void){
    /* Declaracion de variables: */
    char nombres[ESTUDIANTES][15];
    char buscado[15];
    char condicion[15];
    int notas[ESTUDIANTES][NOTAS];
    float prom[ESTUDIANTES];
    float mejor_prom = 0;
    float prom_eva = 0;
    float suma = 0;
    int posicion = 0, i, n, limpiar; 

    /* ------------------------------------------------------------------------------------------ */
        /* for para recorrer los estudiantes. */
        for (i = 0; i < ESTUDIANTES; i++){
            /* Se pide el nombre del estudiante hasta que sea valido */
            do{
                printf("Nombre del estudiante %d: ", i + 1);
                fgets(nombres[i], sizeof(nombres[i]), stdin);
                nombres[i][strcspn(nombres[i], "\n")] = '\0';

                if (strlen(nombres[i]) == 0){
                    printf("Nombre invalido no puede estar vacio...\n");
                }
            } while (strlen(nombres[i]) == 0);

/* ------------------------------------------------------------------------------------------ */
                /* For para recorrer las notas de cada estudiante */
                for (n = 0; n < NOTAS; n++){

                    /* Se piden las notas hasta que sean validas */
                    do{
                        printf("Nota %d de %s: ", n + 1, nombres[i]);
                        scanf("%d", &notas[i][n]);

                        while ((limpiar = getchar()) != '\n' && limpiar != EOF){}

                        /* Si la nota esta fuera de 0 a 100 se pide de nuevo */
                        if (notas[i][n] < 0 || notas[i][n] > 100){
                            printf("Nota invalida, la nota debe ser de 0 a 100...\n");
                        } else {
                            suma += notas[i][n];
                        }

                    } while (notas[i][n] < 0 || notas[i][n] > 100);
                }

/* ------------------------------------------------------------------------------------------ */
                /* Se calcula el promedio de cada estudiante. */
                suma /= NOTAS;
                /* Se guardan los promedios en un arreglo */
                prom[i] = suma;
                /* Se reinicia suma. */
                suma = 0;

/* ------------------------------------------------------------------------------------------ */
        }

        /* Se saca el mayor promedio */
        for (i = 0; i < ESTUDIANTES; i++){
            if (prom[i] > mejor_prom){
                mejor_prom = prom[i];
                posicion = i;
            }
        }

    /* Salidas de datos: */
    printf("--------------------------------------------------------------------\n");
    printf("%-12s %-6s %-6s %-6s %-8s\n", "Nombre", "N1", "N2", "N3", "Promedio");
    printf("--------------------------------------------------------------------\n");
    
    /* Imprime la tabla: Nombres, notas y promedio */
    for (i = 0; i < ESTUDIANTES; i++){
        printf("%-12s", nombres[i]);

        for (n = 0; n < NOTAS; n++){
            printf("%-6d ", notas[i][n]);
        }

        printf("%.2f\n", prom[i]);
    }

    /* Imprime el promedio de cada evaluacion: */
    for (n = 0; n < NOTAS; n++){
        for (i = 0; i < ESTUDIANTES; i++){
            prom_eva += notas[i][n];  
        }
        prom_eva /= ESTUDIANTES;
        printf("Promedio de la evaluacion %d: %.2f\n", n + 1, prom_eva);
        prom_eva = 0;
    }
        

    printf("Mejor promedio: %s (%.2f)\n", nombres[posicion], mejor_prom);

    /* Se busca el nombre y se imprime la condicion del estudiante */
    printf("Ingrese el estudiante a buscar: \n");
    fgets(buscado, sizeof(buscado), stdin);
    buscado[strcspn(buscado, "\n")] = '\0';

    /* For para buscar al estudiante y su condicion */
    for (i = 0; i < ESTUDIANTES; i++){

        if (strcmp(nombres[i], buscado) == 0){
            /* Se valida la posicion del estudiante. */
            if (prom[i] < 70){
                strcpy(condicion, "REPROBADO");
                printf("%s: %.2f %s", buscado, prom[i], condicion);
                
            } else {
                strcpy(condicion, "APROBADO");
                printf("%s: %.2f %s", buscado, prom[i], condicion);
                break;
            }
            
        }
    }


    return 0;
}