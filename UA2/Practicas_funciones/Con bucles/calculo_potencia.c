/* Practica 2 de funciones con bucles - se crea una funcion para calcular la potencia de un numero. */

#include <stdio.h>

/* Declaracion de una funcion */
int calculoPotencia(int base, int exponente);

int main(void){
    int numero, potencia, resultado;

    printf("Ingrese la base: ");
    scanf("%d", &numero);

    printf("Ingrese la potencia: ");
    scanf("%d", &potencia);

    resultado = calculoPotencia(numero, potencia);
    
    printf("El resultado del numero %d a la potencia %d es: %d", numero, potencia, resultado);

    return 0;
}

/* Definicion de una funcion */
int calculoPotencia(int base, int exponente){
    int contador = 1;
    int multi = base;

    while (exponente != contador){
        base *= multi;
        contador++;
    }
    
    return base;
}
