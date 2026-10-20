/* 1. Reciba el nombre del colaborador y el puntaje de cada criterio (0 a 10); un puntaje fuera de 
rango se vuelve a pedir. El mensaje debe mostrar el nombre del criterio.
2. Calcule el promedio y el nivel: EXCELENTE (9 o más), BUENO (7 o más, pero menos de 9) o 
NECESITA MEJORAR (menos de 7).
3. Indique el criterio con el puntaje más bajo y su puntaje.
 */

 #include <stdio.h>
 #include <string.h>

 int main(void){
    char colaborador[30], nivel[20];
    char criterios[3][20] = {"puntualidad", "calidad", "trabajo en equipo"};
    int puntuajes[3];
    double promedio;

    printf("Nombre del estudiante: ");
    fgets(colaborador, sizeof(colaborador), stdin);
    colaborador[strcspn(colaborador, "\n")] = '\0';

    for (i = 0; i < 3; i ++){
        do{
            printf("");

            if (condition){
                printf("");
            }
            
        } while ()
    }
    

    /* Condicion para saber el estado del colaborador segun el promedio. */
    if (promedio >= 9){
        nivel = "EXCELENTE."
    } else if (promedio < 9 && promedio >= 7){
        nivel = "BUENO.";
    } else {
        nivel = "NECESITA MEJORAR.";
    }

    printf("===== DATOS DE EVALUACION =====\n");
    printf("Colaborador: ", colaborador);
    printf("Promedio: %.1f", promedio);
    printf("Nivel: %s", nivel);

    return 0;
 }