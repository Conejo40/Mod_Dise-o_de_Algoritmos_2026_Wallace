/* 1. Reciba el nombre completo del técnico (puede tener espacios; no se acepta un nombre vacío).
2. Reciba las horas trabajadas en la semana (de 1 a 60) y la tarifa por hora (mayor que 0). Un 
dato inválido muestra un mensaje y se vuelve a pedir.
3. Separe las horas: las primeras 48 son ordinarias; las que pasen de 48 son horas extra y se 
pagan al 150 % de la tarifa.
4. Calcule el salario bruto (pago ordinario + pago extra), el seguro social (10.5 % del bruto) y el 
salario neto.
5. Muestre un comprobante con el nombre, las horas y el pago ordinario, las horas y el pago extra, 
el bruto, el seguro y el neto, con dos decimales y alineados. */


/* ¿Que se logra:  */

#include <stdio.h>
#include <string.h>

#define JORNADA 48
#define MAXIMO_HORAS 60
#define RECARGO 
#define SEGURO

int main(void){
    /* Declaracion de variables: */
    char nombre[20];
    int horas;
    double tarifa_hora;

/* ------------------------------------------------------------------------------------------------ */

    /* Se pide el nombre completo hasta que este correcto con do while. */
    do{
        printf("Ingrese su nombre completo: ");
        fgets(nombre, sizeof(nombre), stdin);
        nombre[strcspn(nombre, "\n")] = '\0';

        /* Validacion para que el nombre no este vacio. */
        if (strlen(nombre) == 0){
            printf("Nombre invalido, no se acepta un nombre vacio...\n");
        }
    } while (strlen(nombre) == 0);

/* ------------------------------------------------------------------------------------------------ */

    /* Se pide las horas hasta que sean correcto con do while. */
    do{
        /* Se piden las horas: */
        printf("Horas trabajadas (de 1 a 60): ");
        scanf("%d", &horas);

        /* Validacion para que el nombre no este vacio. */
        if (horas <= 0 || horas > MAXIMO_HORAS){
            printf("Dato invalido horas de 1 a 60...\n");
        }
    } while (horas <= 0 || horas > MAXIMO_HORAS);

/* ------------------------------------------------------------------------------------------------ */

    /* Se pide la tarifa hasta que sea correcta con do while. */
    do{
        /* Se pide la tarifa por hora: */
        printf("Tarifa por hora (mayor que 0): ");
        scanf("%lf", &tarifa_hora);

        /* Validacion para que el nombre no este vacio. */
        if (tarifa_hora <= 0){
            printf("Dato invalido, la tarifa debe ser mayor a 0...\n");
        }
    } while (tarifa_hora <= 0);

/* ------------------------------------------------------------------------------------------------ */
    
    

    return 0;
}