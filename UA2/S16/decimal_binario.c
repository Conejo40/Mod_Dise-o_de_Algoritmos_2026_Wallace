#include <stdio.h>;

int main (void){ // Funcion indispensable, es donde se ejecuta todo el programa.
    int numero;
    int cociente;
    int b0, b1, b2, b3;

    printf("Numero decimal (0 a 15): ");
    scanf("%d", &numero);

    //Nota: "%d" (indica que es un valor de tipo entero).
    // &numero (Indica donde se va a guardar el valor, en este caso es un la variable numero).

    if (numero < 0 || numero > 15) {
        printf("Fuera de rango use un numero de 0 a 15\n");
        return 1; //Indica que es un error.
    }

    //Se empieza dividiedo el numero completo -> cociente = 13
    cociente = numero;

    //División entre 1: el reciduo es el bit de las unidades -> b0 = 1
    b0 = cociente % 2;

    //Muestra el paso de 13 / 2 = 6 residuo 1
    printf("%2d / 2 = %d residuo %d\n", cociente, cociente / 2, b0);

    //El cociente pasa a la división cociente = 6
    cociente = cociente / 2;

    //Muestra division 2: 6/2 = 3 residuo 0 b1 = 0
    b1 = cociente % 2;

    //Muestra el paso de 13 / 2 = 6 residuo 1
    printf("%2d / 2 = %d residuo %d\n", cociente, cociente / 2, b1);
    cociente = cociente / 2;

    //Muestra division 3: 3/2 = 1 residuo 1 b2 = 1
    b2 = cociente % 2;

    //Muestra el paso de 13 / 2 = 6 residuo 1
    printf("%2d / 2 = %d residuo %d\n", cociente, cociente / 2, b2);
     cociente = cociente / 2;

    //Muestra division 4: 1/2 = 0 residuo 1 b3 = 1
    b3 = cociente % 2;

    //Muestra el paso de 13 / 2 = 6 residuo 1
    printf("%2d / 2 = %d residuo %d\n", cociente, cociente / 2, b3);


    //RESULTADO: Los residuos se leen de abajo hacia arriba -> 1101

    printf("En binario: %d%d%d%d\n", b3, b2, b1, b0);

    //COMPROBACIÓN: %o muestra en octal y %X en hexadecimal <> 15 y D

    printf("Comprobacion: octal %o, hexadecimal %X\n", numero, numero);

    return 0; // Indica que el programa fue exitoso.
}
