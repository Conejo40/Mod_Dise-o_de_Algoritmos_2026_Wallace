//promedio.c - promedio de notas enteras.

#include <stdio.h>

int main(void){
    //3 notas enteras y su suma.
    int nota_1, nota_2, nota_3, suma;
    //2 resultados reales.
    double promedio_bien, promedio_mal;

    //Entrada de datos: notas 80, 75 y 90.
    printf("Digite las 3 notas: ");
    scanf("%d %d %d", &nota_1, &nota_2, &nota_3);

    //Procesos: suma de enteros -> 245.
    suma = nota_1 + nota_2 + nota_3;
    //int / int = division entera: 245 / 3 = 81, se guarda como 81.0
    promedio_mal = suma /3;
    //(double) convierte suma a 245.0 ANTES de dividir -> 81.666666....
    promedio_bien = (double) suma /3;

    //Salida de datos: Sin casting 81.0 y con casting 81.67
    printf("Sin casting: %.2f\n", promedio_mal);
    printf("Con casting: %.2f\n", promedio_bien);

    return 0;
}