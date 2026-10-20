/* 1. Reciba el nombre completo del empleado (puede tener espacios; no se acepta un nombre 
vacío).
2. Reciba el salario bruto, que debe ser mayor que 0; si no, muestra un mensaje y lo vuelve a 
pedir.
3. Calcule los descuentos sobre el salario bruto: CAJA (9.5 %), IESS (2.5 %) e impuesto sobre la 
renta (10 %, solo si el salario bruto supera 800).
4. Calcule el salario neto (bruto menos todos los descuentos).
5. Muestre un comprobante con el nombre, el salario bruto, cada descuento y el salario neto, con 
dos decimales y los montos alineados.
 */

 #include <stdio.h>
 #include <string.h>

 #define CAJA 0.095
 #define IESS 0.025
 #define IMPUESTO_RENTA 0.10

 int main(void){
    /* Declaracion de variables: */
    char nombre[20];
    double salario_bruto, salario_neto;

    /* Se repite hasta que el nombre sea correcto. */
    do{
        printf("Nombre completo: ");
        fgets(nombre, sizeof(nombre), stdin);
        nombre[strcspn(nombre, "\n")] = '\0';

        if(strlen(nombre) == 0){
            printf("Nombre invalido, no puede haber un nombre vacio.");
        }
    } while (strlen(nombre) == 0);

    /* Se repite hasta que salario bruto sea correcto. */
    do{
        printf("Digite salario bruto: ");
        scanf("%lf", &salario_bruto);

        if (salario_bruto < 0){
            printf("Valor invalido...");
        }
    } while (salario_bruto < 0);

    /* Se cumple si el salario bruto es de 800 o mas. */
    if (salario_bruto >= 800)
    

    return 0;
 }