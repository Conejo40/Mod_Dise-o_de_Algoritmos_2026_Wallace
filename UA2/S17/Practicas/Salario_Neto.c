//Salario_Neto - es un ejercicio para adaptar trabajos de Psint a c.

#include <stdio.h>

int main(void){
    double horas, tarifa_hora, bruto, deduccion, neto;

    //Entrada de datos:
    printf("Horas trabajadas: ");
    scanf("%lf", &horas);

    printf("Pago por horas: ");
    scanf("%lf", &tarifa_hora);

    //Procesos:
    bruto = horas * tarifa_hora;
    deduccion = bruto * 0.10;
    neto = bruto - deduccion;

    //Salida de datos:
    printf("Salario bruto: %.2f\n", bruto);
    printf("Deducción: %.2f\n", deduccion);
    printf("Salario neto: %.2f\n", neto);

    return 0;
}