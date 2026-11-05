/* Enunciado
Una caja calcula el vuelto de cada compra. Se digita el total de la compra (1 a 1 000 000) y el monto pagado, que no puede ser menor que el total (si lo es, se vuelve a pedir). El programa muestra el vuelto y cuántos billetes o monedas de cada denominación entregar, empezando por la mayor (20 000, 10 000, 5000, 2000, 1000, 500, 100, 50, 25, 10 y 5); solo se muestran las que se usan. Si sobran colones que no se pueden entregar (menos de 5), se indica. Al final se muestra la cantidad total de piezas. Después de cada compra se pregunta si hay otra (S/N).
 */

 #include <stdio.h>

 /* Definir las constantes */
 #define MIN_COMPRA 1
 #define MAX_COMPRA 1000000

 /* Declaracion de funciones */
 int leerEntero(const char mensaje[], int minimo, int maximo);
 char leerSN(const char mensaje[]);
 int cuantas(int *resto, int denominacion);
 void limpiarBuffer();


 /* Funcion principal */
 int main(void){
    /* Variables */
    int billetes[11] = {20000, 10000, 5000, 2000, 1000, 500, 100, 50, 25, 10, 5};
    double compra, vuelto, monto_pagado;
    int resto, i, piezas, total_piezas;
    char mensaje;
    
/* --------------------------------------------------------------------------------------------------- */
    do{
        compra = leerEntero("Ingrese el total de la compra: ", MIN_COMPRA, MAX_COMPRA);

        monto_pagado = leerEntero("Ingrese el monto pagado: ", compra, MAX_COMPRA);
        
        /* Calculo del resto */
        vuelto = monto_pagado - compra;
        resto = vuelto;
        total_piezas = 0;
        

        printf("-------------------------\n");
        printf("RESULTADOS:\n");
        printf("-------------------------\n");
        printf("Compra: %.2f\n", compra);
        printf("Monto pagado: %.2f\n", monto_pagado);
        printf("Vuelto: %.2f\n", vuelto);
        
        for (i = 0; i < 11; i++){
            piezas = cuantas(&resto, billetes[i]);
            if (piezas > 0){
                printf("Se entrega %d de %d \n", piezas, billetes[i]);

                total_piezas += piezas;
            }
        }

        printf("Cantidad total de piezas: %d\n", total_piezas);

        mensaje = leerSN("Desea agregar otra compra (S/N): ");


    } while (mensaje == 'S' || mensaje == 's');

    return 0;
 }


 /* --------------------------------------------------------------------------------------------------- */
 /* Definicion de funciones */

 /* se Piden los datos */
 int leerEntero(const char mensaje[], int minimo, int maximo){
    double valor;

    do{
        printf("%s", mensaje);
        scanf("%lf", &valor);

        limpiarBuffer();

        if (valor < minimo || valor > maximo){
            printf("Dato invalido...\n");
        }
    } while (valor < minimo || valor > maximo);

    return valor;
 }

 /* Se pide para agregar otro */
 char leerSN(const char mensaje[]){
    char respuesta;

    do{
        printf("%s", mensaje);
        scanf("%c", &respuesta);

        limpiarBuffer();

        if (respuesta != 'S' && respuesta != 's' &&  respuesta != 'N' && respuesta != 'n'){
            printf("Dato invalido, debe ser (s o n)...\n");
        }

    } while (respuesta != 'S' && respuesta != 's' &&  respuesta != 'N' && respuesta != 'n');

    return respuesta;
 }

 /* Calculo para cada billete y monedas */
 int cuantas(int *resto, int denominacion){
    int cantidad;

        /* Para sacar la cantidad */
        cantidad = *resto / denominacion;

        /* para sacar el monto */
        *resto = *resto % denominacion;
    
    return cantidad;
 }

 /* Limpiador de basura */
 void limpiarBuffer() {
 
    int caracter;
 
    while ((caracter = getchar()) != '\n' && caracter != EOF) {
    }
}