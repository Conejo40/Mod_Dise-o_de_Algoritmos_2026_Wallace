#include <stdio.h>
#include <string.h>
int main(void) {
    char placa[10];
    printf("Placa: ");
    scanf("%9s", placa);
    if (strcmp(placa, "FIN") == 0 || strcmp(placa, "fin") == 0){ /* Error en el if corregido. */
        printf("Terminar\n");
    } else {
        printf("Seguir\n");
    }
        
    return 0;
}
