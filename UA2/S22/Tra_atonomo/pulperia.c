/*  */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Declaracion de funciones: */
int leer_entero(const char mensaje[], int minimo, int maximo);
void listar();   /* Las void no retornan nada */
int vender(int *existencia, int *cantidad);
void reponer();
double valor_inventario();

int main(void){
    int opcion;
    int vender;

        printf("1. Listar 2. Vender 3. Reponer 4. Valor 0. Salir\n");
        opcion = leer_entero("Ingrese una opcion: ", 0, 4);
        printf("%d", opcion);

        switch (opcion){
            case 1:
                listar();

            case 2:
                vender = vender(&exis, &cantidad);
            case 3:

            case 4:
        }

    return 0;
}

/* ------------------------------------------------------------------------------------------------- */

/* Se hacen las instruciones de las variables: */

/* Para la opcion */
 int leer_entero(const char mensaje[], int minimo, int maximo) {
    int valor;

    do{
        printf("%s", mensaje);
        scanf("%d", &valor);

        if (valor < minimo || valor > maximo){
            printf("Valor invalido debe ser de 0 a 4.....\n");
        }
    } while (valor < minimo || valor > maximo);

    return valor;
} 

/* tabla de productos */
void listar(){
    int i;
    char productos[4][20] = {"1.Arroz 2 kg", "2. Frijoles 1 kg ", "3. Cafe 1 kg", "4. Aceite 1 L "};
    float precios[4] = {2400, 1800, 4500, 3200};
    int *exist[4] = {20, 15, 12, 8};

    for (i = 0; i < 4; i++){
        printf("%s %.2f %d\n", productos[i], precios[i], exist[i]);
    }
}

int vender(int *existencia, int *cantidad){
    int opcion;

    listar();

    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);

    switch (opcion){
        case 1:
            printf("Ingrese la cantidad: ");
            scanf("%d", &cantidad);
            break;
        case 2:
            printf("Ingrese la cantidad: ");
            scanf("%d", &cantidad);
            break;
        case 3:
            printf("Ingrese la cantidad: ");
            scanf("%d", &cantidad);
            break;
        case 4:
            printf("Ingrese la cantidad: ");
            scanf("%d", &cantidad);
            break;
    }

    return *cantidad;
}