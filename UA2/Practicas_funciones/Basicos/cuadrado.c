/* Practica 1 de funciones de nivel basico. */

#include <stdio.h>

int alCuadrado(int num);

int main(void){
    int numero;
    int resultado;

    printf("Ingrese el numero que desea al cuadrado: ");
    scanf("%d", &numero);

    resultado = alCuadrado(numero);

    printf("El resultado de %d al cuadrado es: %d", numero, resultado);

    return 0;
}

int alCuadrado(int num){
    /* num *= num; */

    return num * num;
}