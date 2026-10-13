//Intercambio.c - es un programa que intercambia el valor de varias variables.

#include <stdio.h>

int main(void){
    //Variables:
    int a = 5;
    int b = 9;

    //Proceso de cambio:
    printf("Antes: a = %d b = %d\n", a, b);

    int aux = a;
    a = b;
    b = aux;

    printf("Despues: a = %d b = %d", a, b);

    /*Nota: para que ocurra el cambio debe de haber una variable extra que reciba 
    el valor de una de las varibles para que no se pierda el valor en este caso es aux.*/

    return 0;
}

