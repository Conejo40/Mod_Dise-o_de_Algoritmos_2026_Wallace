//===========================================================================================

/* 1. Pida la temperatura máxima de cada día de la semana, de lunes a domingo (grados C, de 0 a 
45). El mensaje debe mostrar el nombre del día (Lun, Mar, …). Un dato fuera de rango muestra 
un mensaje y se vuelve a pedir.
2. Guarde las temperaturas en un arreglo de 7 posiciones.
3. Calcule el promedio de la semana y encuentre el día más caluroso.
4. Muestre la temperatura de cada día, el promedio (dos decimales), el día más caluroso y la lista 
de días que superaron el promedio con su cantidad. */

//=========================================================================================== 

/* * QUÉ SE LOGRA:
    Encontrar el dia más caluroso.
    El promedio.
 
* CÓMO SE LOGRA:
    -do-while para validar el rango de temperatura aceptada
    -Arreglo para guardar temperaturas
    -for para sacar al mas caluros
    -for para recorrer los dias
 
* RESULTADO ESPERADO:
   Muestra la temperatura de cada dia.
   El promedio de temperatura (float: dos decimales)
   El dia mas caluroso
   La lista de dias que superaron el promedio con su cantidad
* */

//===========================================================================================

# include <stdio.h>
# include <string.h>

# define MIN_TEMP 0
# define MAX_TEMP 45
# define DIAS 7

int main(void){
    /* Declaracion de variables: */
    char dias[DIAS][4] = {"Lun", "Mar", "Mie", "Jue", "Vie", "Sab", "Dom"};
    double temperaturas[7];
    double promedio = 0;
    double mas_caluroso = 0;
    int i, posicion_dia;

/* -------------------------------------------------------------------------------------------- */
    /* Se pide las 7 temperaturas */
    for(i = 0; i < DIAS; i++){
        /* Se repite hasta que la temperatura sea de 0 a 45 */
        do{
            printf("Ingrese la temperatura del dia %s: ", dias[i]);
            scanf("%lf", &temperaturas[i]);

            /* Validacion de temperaturas: */
            if (temperaturas[i] < MIN_TEMP || temperaturas[i] > MAX_TEMP){
                printf("Temperatura invalida, la temperatura debe ser de 0 a 45\n");
            } 
        } while (temperaturas[i] < MIN_TEMP || temperaturas[i] > MAX_TEMP);

        /* Estas ultimas 2 lineas son para calcular el promedio. */  
        promedio += temperaturas[i];
    }

    /* Se hace fuera del for porque solo ocupamos que se haga una vez. */
    promedio /= DIAS;

/* -------------------------------------------------------------------------------------------- */

    /* Recorre hasta encontrar la temperatura mas alta. */
    for (i = 0; i < DIAS; i++){
        /* validacion para encontrar la temperatura mas alta */
        if(temperaturas[i] > mas_caluroso){
            mas_caluroso = temperaturas[i];
            posicion_dia = i;
        }
    }

/* -------------------------------------------------------------------------------------------- */
    /* Salida de datos: */
    printf("------- Reporte de la semana -------\n");
    for (i = 0; i < DIAS; i++){
        printf("%s: %.1f °C\n", dias[i], temperaturas[i]);
    }

    printf("Promedio: %.2f °C\n", promedio);
    printf("Dia mas caluroso: %s (%.1f °C)\n", dias[posicion_dia], temperaturas[posicion_dia]);

    for (i = 0; i < DIAS; i++){
        if (temperaturas[i] > promedio){
            printf("Sobre el promedio: %s (%.1f °C)\n", dias[i], temperaturas[i]);
        } 
    }


    return 0;
}