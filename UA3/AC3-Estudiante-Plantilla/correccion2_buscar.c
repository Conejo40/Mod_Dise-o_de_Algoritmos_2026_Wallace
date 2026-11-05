#include <stdio.h>
#include <string.h>
#define N 4

int buscar(const char nombres[][15], int n, const char buscado[]) {
    int i;
    for (i = 0; i < n; i++)
        /* ERROR: error de logica.
        
        POR QUE: Pasa porque la forma en la que estan comprando los arreglos es erronea por
        eso la salida siempre retorna -1 y se imprime "No existe".
        
        CORRECCION: Cambiar la condicion del if por -> strcmp(nombres[i], buscado) == 0, esto
        compara si cada caracter es identico entre nombres y buscado devolviendo 1 si es erroneo
        y 0 si son iguales */
        if (strcmp(nombres[i], buscado) == 0)
            return i;
    return -1;
}

int main(void) {
    char nombres[N][15] = {"Arroz", "Frijoles", "Cafe", "Azucar"};
    double precios[N] = {1200, 1500, 3200, 900};
    char buscado[15];
    int pos;
    printf("Producto: ");
    scanf("%14s", buscado);
    pos = buscar(nombres, N, buscado);
    if (pos == -1)
        printf("No existe\n");
    else
        printf("%s cuesta %.2f\n", nombres[pos], precios[pos]);
    return 0;
}
