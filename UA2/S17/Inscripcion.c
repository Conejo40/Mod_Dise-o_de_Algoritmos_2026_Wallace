//Se emula un programa de inscripcion para uso varible booleana y string.


#include <stdio.h>
#include <stdbool.h>

#define COSTOMOD 15000;

int main (void){
    //Cadenas de texto
    char nombre[30];
    char cedula[15];
    char cantidad_modulos;
    double total;
    //Variable logica.
    int tiene_descuento = true;

    printf("Ingrese su nombre: ");
    scanf("%29s", nombre);
    printf("Su nombre tiene: ");
    //Nota: Para guardar strings no se usa el simbolo &.
    printf("Ingrese su cedula: ");
    scanf("%14s", cedula);
    printf("Ingrese su cantidad de modulos: ");
    scanf("%d", &cantidad_modulos);

    total = cantidad_modulos * COSTOMOD;

    tiene_descuento = cantidad_modulos >= 3;

    //Salidas
    printf("Estudiantes: %s (%s)\n", nombre, cedula);
    printf("Totald de inscripcion: %.2f\n", total);
    printf("Aplica descuento?: %d (1- SI o 2- NO)\n", tiene_descuento);
    
    return 0;
}