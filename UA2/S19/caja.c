// Caja.c - es un programa que simula una caja registradora.

#include <stdio.h>

int main(void){
    //Declaracion de variables:
    int opcion; //Menú de opciones.
    int productos = 0; //Contador de productos
    double precio; //Precio de cada producto.
    double total = 0; //Acumulador de la venta.
    
    // DO ... WHILE: El menu se muestra al menos uno vez
    do {
        //mostrar el menu y lee la opcion -> 1
        printf("\n1. Agregar 2. Ver total 3. Cobrar 0. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        //SWITCH: (segun): salta al case que coincida con la opcion elegida
        switch (opcion){
            case 1:
            //validaciopn: reíte mientras el precio no sea positivo
            do {
                printf("Precio del producto: ");
                scanf("%lf", &precio); //-> 1500 ( -200)
                if (precio <= 0){
                    printf("Precio invalido\n");
                }
        
            } while (precio <=0);
            productos++;            //cuenta productos
            total += precio;        //suma el precio
            break;                  //Sale del switch
            case 2: 
            //Muestra el avance -> Productos: 2 Total 4000.00
            printf("Productos: %d Total: %.2f\n", productos, total);
            break;
            case 3: 
            //Cobra y reinicia el contador y  acumulador
            printf("Cobrado: %.2f. Nueva venta\n", total);
            productos = 0;
            total = 0;
            break;
            case 0: 
            printf("Caja Cerrada\n");
            break;
            default:
            //Ningun case coinside -> 9
            printf("Opcion invalida\n");
        }
        //Repita el menu mientras no se elija 0
        
    }while (opcion != 0);
    
    return 0;
}