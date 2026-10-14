//Planilla.c - es un programa para calcular cuantas personas hay en una planilla.

#include <stdio.h>

#define LIMITE 48
#define RECARGO 1.5
#define CENTINELA -1

int main(void){
    //Variables:
    int cantidad, i, con_extra;
    //char nombre[20];
    double horas, tarifa, horas_extra, pago, total_planilla;

    //Contadores:
    total_planilla = 0;
    con_extra = 0;

    //Entrada de datos:
    printf("Cantidad de personas colaboradooras: ");
    scanf("%d", &cantidad);

    //Ciclo while:
    while (horas != CENTINELA){
    //for ( i = 1; i <= cantidad; i++){
        /*printf("Nombre: ");
        scanf("%s", nombre);*/
        
        //do{ //Se repite hasta que horas no sea menor 0 y mayor a 72.
            printf("Horas de la semana (-1 para terminar): ");
            scanf("%lf", &horas);
            //if (horas < 0 || horas > 72) {
                //printf("Dato invalido, intente denuevo.\n");
            //}
        //}while (horas < -1 || horas > 72);2

        if (horas != -1){
            printf("Tarifa por hora: ");
            scanf("%lf", &tarifa);
        }
       
        if (horas > 48){
            horas_extra = horas - 48;
            pago = LIMITE * tarifa + horas_extra * tarifa * RECARGO;
            con_extra += 1;
        } else {
            pago = horas * tarifa;
        }

        //printf("%s: %.2f\n", nombre, pago);
        printf("Pago: %.2f\n",pago);
        total_planilla += pago;
        
    //}
    }
    printf("Personas: %d\n", cantidad);
    printf("Total de la pantilla: %.2f\n", total_planilla);
    printf("Personas con horas extra %d", con_extra);
    

    return 0;
}