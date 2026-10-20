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

int main(void){
    /* Declaracion de variables: */
    char libros[10][50]; desicion:
    int cantidad, i;
    double precio, precio_total;

    while (CENTINELA != "FIN" || CENTINELA_2 "fin"){
        
        for (i = 0; i < 10; i++){
            printf("Desea agregar un libro?: ");
            scanf("%3s,", desicion);

            if (desicion == "SI"){
                printf("Ingrese el titulo del libro: ");
                fgets(libros, sizeof(50), stdin);
                libros[][strcspn(libros, "\n")] = '\0';

                /* Se pide la cantidad de libros hasta que sea correcta. */
                do{
                    printf("Ingrese la cantidad: ");
                    scanf("%d", &cantidad);

                    if (cantidad < 0){
                        printf("Cantidad incorrecta...");
                    }
                    

                } while (cantidad < 0);

                precio_total += precio;

                
                /* Se pide el precio de libros hasta que sea correcta. */
                do{
                    printf("Ingrese la cantidad: ");
                    scanf("%lf", &precio);

                    if (precio < 0){
                        printf("Precio incorrecto...");
                    }
                    

                } while (precio < 0);

            } /* fin del if */
                    

        } /* fin del for */
            

            

    } /* Fin del while */
    
    return 0;
}         

                    

          
        