#include <stdio.h>
#include <string.h>
int main(void) {
    char nombre[15]; /* error de espacio solucionado */
    strcpy(nombre, "Carolina"); 
    printf("%s\n", nombre);
    return 0;
}
