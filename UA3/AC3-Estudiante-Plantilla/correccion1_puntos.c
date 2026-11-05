#include <stdio.h>

void sumarPuntos(int *puntos, int compra) {
    /* ERROR: error de logica.

    POR QUE: pasa porque la funcion void no retorna nada y el printf de main lo que imprime es la variable puntos del main que seria 0.

    CORRECION: Comvertir puntos en un puntero para que se guarde la direccion de memoria que esta en la funcion sumarPuntos
    y en la main tener una variable con el mismo nombre para que cuando le pasemos los argumentos a sumarPuntos se guarde la
    direccion en la variable puntos */
    *puntos = *puntos  + compra / 1000;
}

int main(void) {
    int puntos = 0, compra, i;
    for (i = 1; i <= 3; i++) {
        printf("Compra %d: ", i);
        /* ERROR: error de formato (warning)

         POR QUE: pasa porque en el scanf no se uso & en la variable de tipo entero entonces no se guarda.
         
         CORRECCION: ponerle un & a compra de la suguiente manera: scanf("%d", &compra);  */
        scanf("%d", &compra);
        sumarPuntos(&puntos, compra);
    }
    printf("Puntos acumulados: %d\n", puntos);
    return 0;
}
