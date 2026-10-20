/* 1. Reciba el nombre del colaborador y el puntaje de cada criterio (0 a 10); un puntaje fuera de 
rango se vuelve a pedir. El mensaje debe mostrar el nombre del criterio.
2. Calcule el promedio y el nivel: EXCELENTE (9 o más), BUENO (7 o más, pero menos de 9) o 
NECESITA MEJORAR (menos de 7).
3. Indique el criterio con el puntaje más bajo y su puntaje.
 */

 #include <stdio.h>
 #include <string.h>

 int main(void){
    char colaborador[30];
    char *criterios[3] = {"puntualidad", "calidad", "trabajo en equipo"};
    char *nivel[3] = {"EXCELENTE.", "BUENO.", "NECESITA MEJORAR."};
    double puntuajes[3];
    double promedio, mas_bajo;
    int i;

    printf("Nombre del estudiante: ");
    fgets(colaborador, sizeof(colaborador), stdin);
    colaborador[strcspn(colaborador, "\n")] = '\0';

    for (i = 0; i < 3; i ++){
        do{
            printf("Puntuaje %s (0 a 10): ", criterios[i]);
            scanf("%lf", &puntuajes[i]);

            if (puntuajes[i] < 0 || puntuajes[i] > 10){
                printf("Valor incorrecto...\n");
            }
            
        } while (puntuajes[i] < 0 || puntuajes[i] > 10);
    }

    promedio = (puntuajes[0] + puntuajes[1] + puntuajes[2]) / 3;

    printf("===== DATOS DE EVALUACION =====\n");
    printf("Colaborador: \n", colaborador);
    printf("Promedio: %.2f\n", promedio);
    /* Condicion para saber el estado del colaborador segun el promedio. */
     if (promedio >= 9){
        printf("Nivel: %s\n", nivel[0]);
    } else if (promedio < 9 && promedio >= 7){
        printf("Nivel: %s\n", nivel[1]);
    } else {
        printf("Nivel: %s\n", nivel[2]); 
    } 

    if (puntuajes[0] < puntuajes[1] && puntuajes[0] < puntuajes[2]){
        printf("Puntuaje mas bajo es: %.1f", puntuajes[0]);
    } else if (puntuajes[1] < puntuajes[0] && puntuajes[1] < puntuajes[2]){
        printf("Puntuaje mas bajo es: %.1f", puntuajes[1]);
    } else {
        printf("Puntuaje mas bajo es: %.1f", puntuajes[2]);
    }
    

    return 0;
 }