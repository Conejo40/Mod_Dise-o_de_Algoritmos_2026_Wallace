#include <stdio.h>
int main(void) {
    int edad;
    printf("Edad: ");
    scanf("%d", &edad); /* Falta un &. */
    printf("Edad: %d\n", edad);
    return 0;
}
