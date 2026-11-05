#include <stdio.h>
int main(void) {
    int tipo = 1;
    switch (tipo) {
        case 1: printf("Residencial\n"); break; /* Faltaba el break */
        case 2: printf("Comercial\n"); break;   /* Faltaba el break */
        default: printf("Tipo invalido\n"); break;  /* Faltaba el break */
    }
    return 0;
}
