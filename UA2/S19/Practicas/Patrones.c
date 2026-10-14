//Patrones.c - programa para entender cómo un ciclo interno depende del externo mediante figuras.

#include <stdio.h>

int main(void){
    int filas, col, i;

    printf("Cantidad de filas: ");
    scanf("%d", &i);

    for ( filas = 1; filas <= i ; filas++){
        printf("\n");
        for ( col = 1; col <= filas; col++){
            printf("*");
        }
        
    }

    for ( filas = 1; filas <= i ; filas++){
        printf("\n");
        for ( col = 1; col <= filas; col++){
            printf("%d", col);
        }
        
    }
    
    return 0;
}