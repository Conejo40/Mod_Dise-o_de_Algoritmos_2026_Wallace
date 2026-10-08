//Area de un circulo.

#include <stdio.h>

#define PI  3.14159265358979

int main(void){
    //Constante de cadena de textos.
    const char UNIDAD[] = "cm";
    //Variables reales para el radio y los resultados.
    double radio, area, perimetro;

    printf("Ingresse el radio del circulo: ");
    scanf("%lf", &radio);

    //En C no existe simbolo de potencia el proceso de hace manual.

    area = PI * (radio * radio);

    perimetro = 2 * PI * radio;

    printf("El area del circulo es: %.2f%s \n", area, UNIDAD);
    printf("El perimetro del circulo es: %.2f%s \n", perimetro, UNIDAD);

    return 0;
}