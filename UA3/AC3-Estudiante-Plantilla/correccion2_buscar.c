#include <stdio.h>
#include <string.h>
#define N 4

int buscar(const char nombres[][15], int n, const char buscado[]) {
    int i;

    /* Error de logica 
    
    POR QUE: hay un desbordamiento de datos ya que da una vuelta de mas y los arreglos se leen
    hasta -1 porque el ultimo espacio esta reservado para \0, para esto use un contador que me 
    diga las vueltas y me dio 5 vueltas en total.
    
    CORRECCION: cambiar i <= n por i < n para que no ocurra ese desborde y agregar llaves en el for 
    y el if*/
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
