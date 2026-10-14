//

#include <stdio.h>
#include <string.h>

int main(void){
    const int CENTINELA = 0;
    int opcion, votos, votos_ganador;
    char ganador[10];
    int Ana = 0;
    int Luis = 0;
    int Sofia = 0;
    int nulos = 0;

    printf("=== Eleccion de representante ===\n");
    printf("1. Voto a Ana\n");
    printf("2. Voto a Luis\n");
    printf("3. Voto a Sofia\n");
    printf("4. Voto nulo\n");
    printf("0. Cerrar\n");
    printf("Opción: ");
    scanf("%d", &opcion);

    while (opcion != CENTINELA){
    
        switch (opcion){
        case 0:
            break;
    
        case 1:
            printf("Gracias por su voto.\n");
            Ana += 1;

            printf("1. Voto a Ana 2. Voto a Luis 3. Voto a Sofia 4. Voto nulo 0. Cerrar\n");
            printf("Opción: ");
            scanf("%d", &opcion);
            break;

        case 2:
            printf("Gracias por su voto.\n");
            Luis += 1;

            printf("1. Voto a Ana 2. Voto a Luis 3. Voto a Sofia 4. Voto nulo 0. Cerrar\n");
            printf("Opción: ");
            scanf("%d", &opcion);
            break;

        case 3:
            printf("Gracias por su voto.\n");
            Sofia += 1;

            printf("1. Voto a Ana 2. Voto a Luis 3. Voto a Sofia 4. Voto nulo 0. Cerrar\n");
            printf("Opción: ");
            scanf("%d", &opcion);
            break;

        case 4:
            printf("Gracias por su voto.\n");
            nulos += 1;

            printf("1. Voto a Ana 2. Voto a Luis 3. Voto a Sofia 4. Voto nulo 0. Cerrar\n");
            printf("Opción: ");
            scanf("%d", &opcion);
            break;


        default:
            printf("Dato invalido, digite nuevamente: ");
            scanf("%d", &opcion);
            break;
        }
    }

    votos = Ana + Luis + Sofia;

    if (Ana > Luis && Ana > Sofia){
        strcpy(ganador, "Ana"); 
        votos_ganador = Ana;
    } else if (Luis > Ana && Luis > Sofia){
        strcpy(ganador, "Luis"); 
        votos_ganador = Luis;
    } else {
        strcpy(ganador, "Sofia"); 
        votos_ganador = Sofia;
    }
    
    printf("Votos recibidos: %d\n", votos);
    printf("Ana: %d\n", Ana);
    printf("Luis: %d\n", Luis);
    printf("Sofia: %d\n", Sofia);
    printf("Nulos: %d\n", nulos);
    printf("Gana %s con %d voto(s)\n", ganador, votos_ganador);
    
    return 0;
}