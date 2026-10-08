//El area de un rectangulo.

#include <stdio.h>

int main (void){
    //Declarar variable double.
    double base, altura, area;

    //Entrada de datos.
    printf("Digite la base del rectangulo (cm): ");
    scanf("%lf", &base);

    printf("Digite la altura del rectangulo (cm): ");
    scanf("%lf", &altura);

    area = base * altura;

    printf("El area del rectangulo es: %.2fcm", area);
    

    return 0;
}