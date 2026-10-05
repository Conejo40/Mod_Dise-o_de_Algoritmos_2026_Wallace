// Hola.C prueba de entorno

#include <stdio.h>

int main (void){
    int edad;

    // Muestra un mensaje -> Entorno listo para la UA2
    printf("Entorno listo para la unidad 2");
    // Pide y lee un número entero -> edad = 20
    printf("Digite su edad: ");
    scanf("%d", &edad);
    // Muestra el dato leído -> Edad registrada: 20
    printf("Edad registrada: %d\n", edad);
    return 0;
}