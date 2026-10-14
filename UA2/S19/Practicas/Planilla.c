//Planilla.c - es un programa para calcular cuantas personas hay en una planilla.

#include <stdio.h>

int main(void){
    //Variables:
    int cantidad, i, con_extra;
    char nombre[20];
    double horas, tarifa, horas_extra, pago, total_planilla;

    //Contadores:
    total_planilla = 0;
    con_extra = 0;

    //Entrada de datos:
    printf("Cantidad de personas colaboradooras: ");
    scanf("%d", &cantidad);

    //Ciclo for:
    for ( i = 1; i <= cantidad; i++){
        printf("Nombre: ");
        scanf("%s", nombre);
        
        do{ //Se repite hasta que horas no sea menor 0 y mayor a 72.
            printf("Horas de la semana (0 a 72): ");
            scanf("%lf", &horas);
            if (horas < 0 || horas > 72) {
                printf("Dato invalido, intente denuevo.\n");
            }
        }while (horas >= 0 && horas <= 72);

        printf("Tarifa por hora: ");
        scanf("%if", &tarifa);

        if (horas > 48){
            horas_extra = horas - 48;
            pago = 48 * tarifa + horas_extra * tarifa * 1.5;
            con_extra += 1;
        }

        printf("%s: %f", nombre, pago);
        total_planilla += pago;
        
    }
    
    printf("Total de la pantilla: %.2f", total_planilla);
    printf("Personas con horas extra %d", con_extra);
    

    return 0;
}