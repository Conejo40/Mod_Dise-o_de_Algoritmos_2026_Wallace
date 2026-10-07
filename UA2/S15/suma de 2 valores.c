#include <stdio.h>

void imprimir_mensaje() {
    printf("Hola, este es un programa estructurado en C.\n");
}

int sumar(int a, int b){
    return a + b;
}

int main () {
    int x = 5;
    int y = 10;

    int resultado;

    imprimir_mensaje();

   resultado = sumar(x,y);

   printf("El suma de %d y %d es: %d\n", x, y, resultado);

   return 0;
}