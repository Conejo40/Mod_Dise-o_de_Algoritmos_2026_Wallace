//Tablas.c - creacion de la tabla del 7 para varios numeros.

#include <stdio.h>

#define CENTINELA 0 // El 0 indica que no hay tablas.

int main(void){
    //Dclaracion de variables:
    int numero, i;
    int tablas = 0;

    //Áca se realiza la lectura previa: El primer número se lee antes del while -> 7
    printf("Ingrese número de la tabla (o 0 para terminar): ");
    scanf("%d", &numero);

    //Áca se utiliza el while con CENTINELA: Este se repite mientras el número no sea 0.
    while (numero != CENTINELA){
        //Áca se utiliza un for anidado: 10 vueltas por cada número -> 1.2.3...
         for (i = 1; i <= 10; i++){
            //%2d alinea en 2 espacios -> 7 x 1 = 7 ... 7 x 10 = 70
            printf("%d x %2d = %2d\n", numero, i, numero * i);
        }
        tablas++; //cuenta la tabla mostrada -> 1 luego 2
        //siguiente dato al final del contador -> 3, luego 0
        printf("Nuemro de la tabla (0 para terminar): ");
        scanf("%d", &numero);
    }
    //Despues del while (se digito 0) -> tablas mostradas 2
    printf("Tablas mostradas: %d\n", tablas);
        
    return 0;
 }
    
 