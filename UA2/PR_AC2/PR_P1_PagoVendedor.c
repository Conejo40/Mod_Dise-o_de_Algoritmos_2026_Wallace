/* 1. Reciba el nombre del vendedor y las ventas de cada una de las 4 semanas del mes en un 
arreglo. Ninguna venta puede ser negativa (se vuelve a pedir).
2. Calcule las ventas del mes, la comisión (5 % de las ventas) y un bono de 50 si las ventas del 
mes superan 2000.
3. Calcule la retención (2 % de la comisión más el bono) y el pago (comisión + bono − retención).
4. Muestre las ventas de cada semana, las ventas del mes y el detalle del pago con dos 
decimales. */

#include <stdio.h>
#include <string.h>

int main(void){
    /* Declaracion de variables: */
    const double BONO = 50;
    const double COMISION = 0.05;
    const double RETENCION = 0.02;
    double ventas[4], mes = 0, pago, comision, retencion, bono;
    int i;
    char nombre[20];

    /* Entra de datos: */
    printf("Nombre del cliente: ");
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strcspn(nombre, "\n")] = '\0';

    for (i = 0; i < 4; i++){
        

        do{
            printf("Ventas de la semana %d: ", i + 1);
            scanf("%lf", &ventas[i]);

            if (ventas[i] < 0){
                printf("Error, el número debe ser positivo. \n");
            }
            
        } while (ventas[i] < 0);

        mes += ventas[i];
        
    }

    /* Se calcula el bono del mes. */
    if (mes > 2000){
        bono = BONO;
    }

    /* Se calcula la retencion y la comison del mes. */
    comision = mes * COMISION;
    retencion = (bono + comision) * RETENCION;

    pago = comision + bono - retencion;

    printf("------- Pago de %s ------\n", nombre);

    for (i = 0; i < 4; i++){
        printf("Ventas de la semana %d: %.2f\n", i + 1, ventas[i]);
    }

    printf("Ventas del mes: %.2f\n", mes);
    printf("Comision (5%): %.2f\n", comision);
    printf("Bono: %.2f\n", bono);
    printf("Retencion (2%): %.2f\n", retencion);
    printf("Pago del mes: %.2f\n", pago);
    
    

    

    return 0;

}