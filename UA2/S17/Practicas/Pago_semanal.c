//Pago_Semanal - es un ejercicio adaptado de Psint a c.

#include <stdio.h>

int main(void){
    // Calcula el pago semanal de una persona colaboradora.
    const double BONO = 5000.0;
    double horas, pago_hora, salario;

    //Entrada de datos:
    printf("Horas trabajadas en la semana: ");
    scanf("%lf", &horas);

    printf("Pago por hora: ");
    scanf("%lf", &pago_hora);

    //Procesos:
    salario = horas * pago_hora + BONO;

    //Salidas de datos:
    printf("-----------------------------\n");
    printf("Horas: %22.2f\n", horas);
    printf("Pago por hora: %14.2f\n", pago_hora);
    printf("Bono: %23.2f\n", BONO);
    printf("Pago semanal: %15.2f\n", salario);
    printf("-----------------------------"); 

    return 0;
}