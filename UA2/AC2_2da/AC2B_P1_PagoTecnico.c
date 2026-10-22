/* 1. Reciba el nombre completo del técnico (puede tener espacios; no se acepta un nombre vacío).
2. Reciba las horas trabajadas en la semana (de 1 a 60) y la tarifa por hora (mayor que 0). Un 
dato inválido muestra un mensaje y se vuelve a pedir.
3. Separe las horas: las primeras 48 son ordinarias; las que pasen de 48 son horas extra y se 
pagan al 150 % de la tarifa.
4. Calcule el salario bruto (pago ordinario + pago extra), el seguro social (10.5 % del bruto) y el 
salario neto.
5. Muestre un comprobante con el nombre, las horas y el pago ordinario, las horas y el pago extra, 
el bruto, el seguro y el neto, con dos decimales y alineados. */


/* ¿Que se logra?: Dar un comprobante de pago a un tecnico.  */
/* ¿como se logra?: Pidiendo datos hasta que sean correctos y luego hacer los calculos necesarios. */
/* Resultado esperado: Que la salida se igual a la propuesta por el docente. */

#include <stdio.h>
#include <string.h>

#define JORNADA 48 /* limite y la use para el calculo */
#define MAXIMO_HORAS 60 /* Limite para pedir las horas */
#define RECARGO 1.5  /* La use para calcular la tarifa por horas extra */
#define SEGURO 0.105 /* La use para calcular la rebaja del seguro */

int main(void){
    /* Declaracion de variables: */
    char nombre[20]; /* se usa para pedir el nombre */
    int horas, horas_extra; /* horas para pedir y horas_extra para calcular las extras */
    double tarifa_hora, tarifa_extra, salarrio_bruto, salario_neto, pago_ordinario, pago_con_seguro;
    /* Las variables de double se usan para hacer los calculos usados en los datos de salida */

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
    
    /* Se valida si hay horas extra con las constantes: */
    if (horas > JORNADA){
        horas_extra = horas - JORNADA;

        /* Se calacula el la tarifa si hay horas extra. */
        tarifa_extra = (tarifa_hora * RECARGO) * horas_extra;
    } else {
        horas_extra = 0;
    }

/* ------------------------------------------------------------------------------------------------ */
    /* Calculos: */

    /* Se calcula el salario normal: */
    pago_ordinario = JORNADA * tarifa_hora;
    /* Se calcula el salario bruto: */
    salarrio_bruto = pago_ordinario + tarifa_extra;
    /* Se Calcula la rebaja del seguro, para esto usamos el salario bruto no el salario ordinario. */
    pago_con_seguro = salarrio_bruto * SEGURO;
    /* Se calcula el salario neto: */
    salario_neto = salarrio_bruto - pago_con_seguro;

/* ------------------------------------------------------------------------------------------------ */

    /* Salida de datos: */
    printf("--------- Comprobante semanal ---------\n");
    printf("Tecnico: %25s\n", nombre);
    printf("Horas ordinarias (48 h): %14.2f\n", pago_ordinario);
    printf("Horas extra ( 4 h): %19.2f\n", tarifa_extra);
    printf("Salario bruto: %24.2f\n", salarrio_bruto);
    printf("Seguro social (10.5%%): %16.2f\n", pago_con_seguro);
    printf("Salario neto: %25.2f\n", salario_neto);


    return 0;
}