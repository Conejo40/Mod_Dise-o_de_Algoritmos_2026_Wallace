//Patrones.c - programa para entender cómo un ciclo interno depende del externo mediante figuras.

#include <stdio.h>

int main(void){
    int filas, col, i;

    for ( filas = 1; filas <= 4 ; filas++){
        printf("\n");
        for ( col = 1; col <= filas; col++){
            printf("*");
        }
        
    }

    for (filas = 1; filas <= 4; filas){
        printf("%d\n", i);
        for (col = 1; col <= filas; col++){
           printf("%d", i + 1); 
        }
    }
    
    return 0;
}