//Areas.c - es una practica de para calcular el area de varias figuras.

#include <stdio.h>

int main(void){
    //Variables:
    int opcion;
    double  lado, base, altura, radio;

    const double PI = 3.14159;

    //Menu de opciones:
    printf("1. Cuadrado\n");
    printf("2. Rectángulo\n");
    printf("3. Circulo\n");
    printf("0. Salir\n");
    printf("Opción: ");
    scanf("%d", &opcion);
       

    do{
    switch (opcion){ //Segun la opcion se cumple una secuencia de instrucciones (case se cumple segun la opcion).
        case 0:
        
            printf("Hasta luego.");
            break;

        case 1:
            printf("Lado: ");
            scanf("%lf", &lado);

            printf("Area: %.2f\n", lado * lado);

            printf("1. Cuadrado 2. Rectángulo 3. Circulo 0. Salir\n");
            printf("Opción: ");
            scanf("%d", &opcion);
            break;

        case 2:
            printf("Base: ");
            scanf("%lf", &base);

            printf("Altura: ");
            scanf("%lf", &altura);

            printf("Area: %.2f\n", base * altura);

            printf("1. Cuadrado 2. Rectángulo 3. Circulo 0. Salir\n");
            printf("Opción: ");
            scanf("%d", &opcion);
            break;
            
        case 3:
            printf("Radio: ");
            scanf("%lf", &radio);

            printf("Area: %.2f\n", PI * radio * radio);

            printf("1. Cuadrado 2. Rectángulo 3. Circulo 0. Salir\n");
            printf("Opción: ");
            scanf("%d", &opcion);
            break;
    
        default:
            printf("Opción invalida.");

            printf("1. Cuadrado 2. Rectángulo 3. Circulo 0. Salir\n");
            printf("Opción: ");
            scanf("%d", &opcion);
            break;

    }
    } while (opcion != 0);

    return 0;
}