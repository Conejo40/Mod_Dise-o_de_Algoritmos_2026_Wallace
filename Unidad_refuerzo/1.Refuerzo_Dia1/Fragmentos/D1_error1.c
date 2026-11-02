/* El error estab en el if, tenia un punto y coma en vez de llaves. */

#include <stdio.h>
int main(void) {
    int nota = 50;
    if (nota >= 70){
        printf("Aprobado\n");
    } else {
         printf("Reprobado");
    }
        
    return 0;
}
