/* Credito.c - es la segunda practica de condicionales. */

#include <stdio.h>
#include <stdbool.h>    /* Libreria para variables booleanas. */
#include <string.h>     /* Libreria para las variables de tipo string */
#include <ctype.h>      /* Librería obligatoria para usar toupper() */

int main(void){
    /* Declaracion de variables y constantes: */
    double salario, cuota;
    int antiguedad;
    char respDeudas, respFiador;
    bool capacidadPago, tieneDeudas, tieneFiador, aprobado;

    /* Entrada de datos: */
    printf("Salario mensual: ");
    scanf("%lf", &salario);

    printf("Cuota mensual del crédito: ");
    scanf("%lf", &cuota);

    printf("¿Tiene deudas atrasadas? (S/N): ");
    /* fgets(respDeudas, sizeof(respDeudas), stdin);  */     // Sintaxis: fgets(variable, tamaño_máximo, entrada_estándar
    scanf(" %c", &respDeudas);

    printf("Años de antigüedad laboral: ");
    scanf("%d", &antiguedad);

    printf("¿Tiene fiador? (S/N): ");
    /* fgets(respFiador, sizeof(respFiador), stdin); */
    scanf(" %c", &respFiador);

    capacidadPago = salario >= cuota * 3;
    tieneDeudas = toupper(respDeudas) == 'S';    /* Toupper() se usa para poner las minus en mayus. */
    tieneFiador = toupper(respFiador) == 'S';    /* En casos de comparacion char es con comillas simples '' */
    aprobado = capacidadPago && !tieneDeudas && (antiguedad >= 1 || tieneFiador);

    if (aprobado){
        printf("Crédito aprobado");
    } else {
        printf("Crédito rechazado");
    }

    return 0;
}