/* asistencia.c - es un programa que calcula la asistencia de los estudiantes durante una semana. */

#include <stdio.h>

int main(void){
    /* Declaración de variables: */
    char estudiante[4] [10] = {"Ana", "Luis", "Sofia", "Daniel"};
    /* char dia[5] = {'L', 'K', 'M', 'J', 'V'};
    char p = 'P', a = 'A';
    int i;

    for (i = 0; i <= 4; i++){
        printf("%c", dia[i]);
        for (i = 0; i <= 3; i++){
            printf("%s\n", estudiante[i]);
        } */

    int asis[5] [4] = {{1, 1, 1, 1, 1},
                        {1, 0, 1, 1, 0},
                        {1, 1, 1, 0, 1},
                        {0, 1, 1, 1, 1}};

    
    for(int i = 0; i < 3; i++){
        printf("%s\n", estudiante[i]);
    }

    return 0;
}