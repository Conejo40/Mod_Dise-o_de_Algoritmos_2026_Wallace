/* inventario.c - es un programa para calcular el precio total de un inventario. */

#include <stdio.h>

#define CENTINELA 0

int main(void){
    int codigo[5] = {101, 205, 310, 412, 518};
    int exis[5] = {20, 15, 12, 30, 8};
    double precio[5] = {2400, 1800, 4500, 2100, 3200};
    char desc[5] [20] = {"Arroz 2 kg", "Frijoles 1 kg", "Cafe 1 kg", "Azucar 2 kg", "Aceite 1 L"};
    double valor_in = 0;
    int cod, i;

    
    printf("============================\n");
    printf("Códigos: %d %d %d %d %d\n", codigo[0], codigo[1], codigo[2], codigo[3], codigo[4]);
    printf("============================\n");

    printf("Código: ");
    scanf("%d", &cod);

    while (cod != CENTINELA){

        if (cod == codigo[0]){
            printf("%s: %d unidades a %.2f\n", desc[0], exis[0], precio[0]);
            valor_in += precio[0] * exis[0];

            printf("Código (0 para terrminar): ");
            scanf("%d", &cod);

        } else if (cod == codigo[1]){
            printf("%s: %d unidades a %.2f\n", desc[1], exis[1], precio[1]);
            valor_in += precio[1] * exis[1];

            printf("Código (0 para terrminar): ");
            scanf("%d", &cod);

        } else if (cod == codigo[2]){
            printf("%s: %d unidades a %.2f\n", desc[2], exis[2], precio[2]);
            valor_in += precio[2] * exis[2];

            printf("Código (0 para terrminar): ");
            scanf("%d", &cod);

        } else if (cod == codigo[3]){
            printf("%s: %d unidades a %.2f\n", desc[3], exis[3], precio[3]);
            valor_in += precio[3] * exis[3];

            printf("Código (0 para terrminar): ");
            scanf("%d", &cod);

        } else if (cod == codigo[4]){
            printf("%s: %d unidades a %.2f\n", desc[4], exis[4], precio[4]);
            valor_in += precio[4] * exis[4];

            printf("Código (0 para terrminar): ");
            scanf("%d", &cod);

        } else {
            printf("Código %d no encontrado.\n", cod);

            printf("Código (0 para terrminar): ");
            scanf("%d", &cod);
        }
        
        
    }

    printf("Valor del inventario: %.2f", valor_in);
    

    return 0;
}