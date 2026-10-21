/* 1. Reciba el nombre del cliente.
2. Permita registrar varios productos (máximo 10): nombre (puede tener espacios), precio
unitario y cantidad. Después de cada producto pregunta si desea agregar otro (S/N); solo
acepta S o N (mayúscula o minúscula).
3. Valide que el precio y la cantidad sean positivos.
4. Muestre el subtotal de cada producto (precio × cantidad) al ingresarlo y acumule el total.
5. Aplique el descuento según el total: menos de 100, sin descuento; de 100 a menos de 500, 5 %;
de 500 a 1000, 10 %; más de 1000, 15 %.
6. Calcule el total con descuento y el impuesto (13 % sobre el total con descuento).
7. Muestre una factura con el cliente, el detalle de cada producto (nombre, precio, cantidad y
subtotal), la cantidad de productos, el subtotal, el descuento, el total con descuento, el impuesto
y el total a pagar.
 */

#include <stdio.h>
#include <string.h>

//! CONSTANTES
#define MAX_PRODUCTOS 10
#define ANCHO_NOMBRE 50


int main(void){
    /* Declaracion de variables: */
    char nombre[50];
    char productos[MAX_PRODUCTOS][ANCHO_NOMBRE];
    double precios[MAX_PRODUCTOS];
    double subtotalProdu, subtotal, totalDescuentos,impuesto, totalPagar;
    int cantidades[MAX_PRODUCTOS];
    char respuesta;

    /* Contadores */
    int i = 0;
    int totalProductos = 0;

    /* Se pide nombre al cliente */
    printf("Ingrese su nombre: \n");
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strcspn(nombre, "\n")] = '\0';

    /* Se ingresa el primer producto */
    do
    {
        printf("Ingrese el nombre del producto: \n");
        fgets(productos[i], sizeof(productos[i]), stdin);
        productos[i][strcspn(nombre, "\n")] = '\0';

        /* Validacion del precio: */
        do
        {
            printf("Ingrese el precio del producto: \n");
            scanf("%lf", &precios[i]);

            if (precios[i] < 0)
            {
                printf("Valor incorrecto...\n");
            }
            

        } while (precios[i] < 0);

         /* Se valida la cantidad hasta que sea correcta */
        do
        {
            printf("Ingrese la cantidad: \n");
            scanf("%d", &cantidades[i]);

            if (cantidades[i] < 0)
            {
                printf("Valor incorrecto...\n");
            }
            

        } while (cantidades[i] < 0);

        /* Se calcula el subtotal del producto */

        subtotalProdu = cantidades[i] * precios;

        subtotal += subtotalProdu;

        /* Se le agregan 1 a los contadores */
        totalProductos += 1;
        i ++;

        /* Eliminar saltos de linea: */
        while (getchar() != "\n"){
            
        }

        /* Agregar productos */
        do{
            printf("Desea agregar mas productos (S/N): ");
            scanf(" %c", respuesta);
        } while (condition);
        
        

    } while (condition);
    


    return 0;
}