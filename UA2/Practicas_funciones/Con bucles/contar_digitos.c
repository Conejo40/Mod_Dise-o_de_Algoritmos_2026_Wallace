/* Practica 1 de funciones con bucles - consiste en crear una funcion que cuente los digitos de un entero. */

#include <stdio.h>

/* Declaracion de la funcion */
int contarDigitos(int num);

int main(void){
    int numero;
    int resultado;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    resultado = contarDigitos(numero);

    printf("El numero de digitos de %d es: %d", numero, resultado);

    return 0;
}

/* Definicion de la funcion */
int contarDigitos(int num){
    int contador = 0;

    if (num == 0){
        contador++;
    }

    while (num != 0) {
        num /= 10;
        contador++;
    }

    return contador;
}