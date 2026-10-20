/* 1. Lea el título de cada libro hasta que se digite FIN o fin (máximo 10 títulos). Para cada libro lea 
el precio y la cantidad, ambos positivos.
2. Cuente las unidades (suma de cantidades) y acumule el total de libros.
3. Aplique un descuento del 10 % si el pedido tiene 5 unidades o más.
4. Calcule el envío: 8 si el total de libros es menor que 50, 4 si es menor que 150 y gratis desde 
150.
5. Calcule el impuesto (13 % del total con descuento) y el total a pagar (total − descuento + 
impuesto + envío).
6. Muestre el detalle de cada libro y el resumen del pedido. */

#include <stdio.h>
#include <string.h>

#define CENTINELA "FIN"
#define CENTINELA_2 "fin"
#define MAX_LIBROS 10
#define ANCHO_PALABRA 50

int main(void){
    /* Declaracion de variables: */
    char libros[MAX_LIBROS][ANCHO_PALABRA];
    double precio[MAX_LIBROS];
    int cantidad[MAX_LIBROS];
    char prueba[20];

    /* Contador y acomuladores: */
    int i = 0, total_cantidad = 0;
    double total_precio = 0;

    printf("Ingrese el titulo del libro ('fin' para terminar): ");
    fgets(prueba, sizeof(prueba), stdin);
    prueba[strcspn(prueba, "\n")] = '\0';

    /* Se digitan datos hasta que se use fin o contador i sea 10. */
    while (strcmp(CENTINELA, "FIN") != 0 || strcmp(CENTINELA_2, "fin") != 0 || i < MAX_LIBROS){

        /* Se copia prueba en la matriz libros */
        strcpy(libros[i], prueba);

        /* Validar precio. */
        do{
            printf("Ingrese el precio del libro: ");
            scanf("%lf", &precio[i]);

            if (precio[i] < 0){
                printf("Valor invalido, debe ser mayor a 0.");
            }
        } while (precio[i] < 0);

        /* Validar cantidad. */
         do{
            printf("Ingrese cantidad del libro: ");
            scanf("%d", &cantidad[i]);

            if (cantidad[i] < 0){
                printf("Valor invalido, debe ser mayor a 0.");
            }
        } while (cantidad[i] < 0);

        /* Acumulamos cantidades y precio. */
        total_cantidad += cantidad[i];
        total_precio = precio[i] * cantidad[i];

        /* Se suma el contador de libros i */
        i += 1;

        /* Esto borra los saltos de linea resagados */
        while (getchar() != '\n'){

        }
        
        printf("Ingrese el titulo del siguiente libro ('fin' para terminar): ");
        fgets(prueba, sizeof(prueba), stdin);
        prueba[strcspn(prueba, "\n")] = '\0';

    }


    for (i = 0; i <= 10; i++){
        printf("%s\n", libros[i]);
        printf("%.2f\n", precio[i]);
        printf("%d\n", cantidad[i]);
    }


    return 0;
}
   

                    

          
        