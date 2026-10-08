//Calculo de factura con IVA.

#include <stdio.h>

int main (void){
    //IVA
    const double TASA_IVA = 0.13;
    //Variables enteras para cantidades y reales para montos.
    int cantidad;
    double precio, sub_total, iva, total;

    printf("Ingrese la cantidad: ");
    scanf("%d", &cantidad);

    printf("Ingrese la precio: ");
    scanf("%lf", &precio);

    sub_total = precio * cantidad;
    iva = sub_total * TASA_IVA;
    total = sub_total + iva;

    printf("=======FACTURA=======");
    printf("CANTIDAD: %d\n", cantidad);
    printf("MONTO POR ARTICULO: %.2f\n", precio);
    printf("SUBTOTAL: %.2f\n", sub_total);
    printf("I.V.A: %.2f\n", iva);
    printf("TOTAL: %.2f\n", total);

    return 0;
}