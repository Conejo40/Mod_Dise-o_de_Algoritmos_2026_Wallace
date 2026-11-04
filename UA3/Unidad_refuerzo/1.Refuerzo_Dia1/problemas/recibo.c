/* Enunciado
Una cooperativa eléctrica emite recibos. De cada recibo se digita el número de medidor (1000 a 9999), el tipo de cliente (1 Residencial, 2 Comercial) y el consumo del mes en kWh (0 a 3000); un dato inválido se vuelve a pedir. Residencial: los primeros 200 kWh a ₡80 cada uno, de 201 a 400 a ₡110 y los que pasan de 400 a ₡150. Comercial: ₡130 por kWh más un cargo fijo de ₡3000. A todos se les suma alumbrado público: 2 % del monto de energía. Después de cada recibo se pregunta si hay otro (S/N). Al final se muestra cuántos recibos se emitieron, el total facturado y el medidor con el recibo mayor.
 */

 #include <stdio.h>

 #define MAX_NUM 9999
 #define MIN_NUM 1000
 #define RESIDENCIAL 1
 #define COMERCIO 2
 #define MAX_CONSUMO 3000
 #define MIN_CONSUMO 0
 #define CARGO_FIJO 3000
 #define ALUMBRADO 0.02

 /* Declaracion de funciones */
 int numeroMedidor(int min, int max);
 int tipoMedidor(int min, int max);
 int consumoMes(int min, int max);
 int montoTarifa(int opcion, int monto);
 char leerSN(const char mensaje[]);

 /* funcion principal */
 int main(void){
    int medidor;
    int tipo;
    double consumo;
    double tarifa;
    int contador = 0;
    double acomulador = 0;
    char mensaje;
    double factura_mayor = 0;
    int medidor_mayor = 0;

    do{
        medidor = numeroMedidor(MIN_NUM, MAX_NUM);

        tipo = tipoMedidor(RESIDENCIAL, COMERCIO);

        consumo = consumoMes(MIN_CONSUMO, MAX_CONSUMO);

        tarifa = montoTarifa(tipo, consumo);

        acomulador += tarifa;

        contador++;

        if (factura_mayor < tarifa){
            factura_mayor = tarifa;
            medidor_mayor = medidor;
        }

        mensaje = leerSN("Desea agregar otro recibo (S/N): ");

    } while (mensaje == 'S' || mensaje == 's');

    printf("======= Resultados ======\n");
    printf("Recibos emitidos: %d\n", contador);
    printf("Total facturado: %.2f\n", acomulador);
    printf("Medidor con mayor factura: %d con %.2f\n", medidor_mayor, factura_mayor);


    return 0;
 }

 /* definicion de funciones */

 /* Para pedir numero de medidor */
 int numeroMedidor(int min, int max){
    int valor;

    do{ 
        printf("Numero de medidor: ");
        scanf("%d", &valor);

        if (valor < min || valor > max){
            printf("Numero invalido, debe ser de 1000 a 9999...\n");
        }
    } while (valor < min || valor > max);

    return valor;
 }

 /* Para pedir el tipo de medidor */
 int tipoMedidor(int min, int max){
    int valor;

    printf("---------------------------\n");
    printf("1.Residencial 2.Comercial\n");
    printf("---------------------------\n");

    do{ 
        printf("Ingrese el tipo: ");
        scanf("%d", &valor);

        if (valor < min || valor > max){
            printf("Numero invalido, debe ser de 1 a 3...\n");
        }
    } while (valor < min || valor > max);

    return valor;
 }

  /* Para pedir numero de medidor */
 int consumoMes(int min, int max){
    int valor;

    do{ 
        printf("Consumo del mes: ");
        scanf("%d", &valor);

        if (valor < min || valor > max){
            printf("Numero invalido, debe ser de 0 a 3000...\n");
        }
    } while (valor < min || valor > max);

    return valor;
 }

/* Calculo de la tarifa */
 int montoTarifa(int opcion, int monto){
    int valor;
    double cargo_fijo;
    double alumbrado;
    double total;

    switch (opcion)
    {
    case 1:
        if (monto <= 200){
            valor = (monto * 80);
        } else if (monto <= 400){
            valor = (200 * 80) + ((monto - 200) * 110 );
        } else {
            valor = (200 * 80) + (200 * 110) + ((monto - 400) * 150);
        }
        break;
    case 2:
        valor = (monto * 130);
        cargo_fijo = CARGO_FIJO;
        break;
    }

    alumbrado = valor * ALUMBRADO;
    total = valor + alumbrado + cargo_fijo;
    
    return total;
 }

 /* Definir mensaje */
 char leerSN(const char mensaje[]){
    char respuesta;

    do{
        printf("%s", mensaje);
        scanf("%c", &respuesta);

        if (respuesta != 'S' && respuesta != 's' &&  respuesta != 'N' && respuesta != 'n'){
            printf("Dato invalido, debe ser (s o n)...\n");
        }
    } while (respuesta != 'S' && respuesta != 's' &&  respuesta != 'N' && respuesta != 'n');

    return respuesta;
 }