//promedio.c - sacar promedio de notas.

#include <stdio.h>

int main(void){
    //Declaracion de variables:
    int cantidad, i;
    double nota, suma, promedio;
    suma = 0;

    //Entrada de datos:

    do{
        printf("¿Cuántas notas va a digitar (1 a 10)?: ");
        scanf("%d", &cantidad);
        if (cantidad < 0 || cantidad > 10){
            printf("Dato invalido, intente denuevo.\n");
        } else {
           for (i = 1; i <= cantidad; i++){
                printf("Nota %d: ", i);
                scanf("%lf", &nota);
                suma += nota;
            } 

            promedio = suma / cantidad;

            printf("Suma: %.0f\n", suma);
            printf("Promedio: %f", promedio);
   
        }
        

    } while (cantidad < 1 || cantidad > 10);

    return 0;
}