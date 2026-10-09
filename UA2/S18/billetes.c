//billetes.c - Desglose de billetes.

#include <stdio.h>

int main(void){
    //Definicion de variables.
    int monto, resto, cantidad;

    //Entrada de datos:
    printf("Monto a desglosar: ");
    scanf("%d", &monto);

    //Procesos: Division entera 47500 / 20000 -> cantidad = 2.
    cantidad = resto / 20000;

    //% es el residuo 47500 % 20000 -> resto = 7500.
    resto %= 20000;

    //Muestre -> billetes de 2000: 2
    printf("Billetes de 20000: %d\n", cantidad);

    cantidad = resto / 10000; //75000 / 5000 -> cantidad = 0.
    //Forma compacta de resto = resto % 10000 -> resto = 7500.
    resto %= 10000;
    printf("Billestes de 10000: %d\n", cantidad); //-> 0.

    cantidad = resto / 5000; //75000 / 5000 -> cantidad = 1.
    resto %= 5000;

    printf("Billestes de 5000: %d\n", cantidad); //-> 1.

    cantidad = resto / 2000; //2500 / 2000 -> cantidad = 1.
    resto %= 2000;
    
    printf("Billestes de 2000: %d\n", cantidad); //-> 1.

    cantidad = resto / 1000; //500 / 1000 -> cantidad = 1.
    resto %= 1000;
    
    printf("Billestes de 1000: %d\n", cantidad); //-> 0.

    //fata la ultima linea.

    return 0;
}