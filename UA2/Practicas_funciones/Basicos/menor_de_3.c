/* Practica 3 funciones - hacer una funcion que encuentre el menor de 3 numeros. */

#include <stdio.h>

/* Declaracion de la funcion: */
int menorDe3(int a, int b, int c);

int main(void){
    int num1, num2, num3;
    int menor;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);

    menor = menorDe3(num1, num2, num3);

    printf("El menor de %d, %d y %d es: %d", num1, num2, num3, menor);

    return 0;
}

/* Definicion de la funcion: */
int menorDe3(int a, int b, int c){
    int valor;

    if (a < b && a < c) {
        valor = a;
    } else if (b < a && b < c) {
        valor = b;
    } else {
        valor = c;
    }

    return valor;
}