/* Usuario.c - es un programa para practicar los strings con con su respectiva libreria. */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void){
    char usuario[45], clave[20], nombre[10], apellidos[30];
    bool usuarioOk, claveOk;
    int contador = 0;

    do{
        printf("Nombre del usuario: ");
        fgets(nombre, sizeof(nombre), stdin);
        nombre[strcspn(nombre, "\n")] = '\0'; 

        printf("Apellidos: ");
        fgets(apellidos, sizeof(apellidos), stdin);
        apellidos[strcspn(apellidos, "\n")] = '\0'; 

        printf("Usuario: ");
        fgets(usuario, sizeof(usuario), stdin);
        /* Esta linea sirve para eliminar el salto de linea integrado. Esto se hace para poder comparar. */
        usuario[strcspn(usuario, "\n")] = '\0';   

        printf("Clave: ");
        fgets(clave, sizeof(clave), stdin);
        clave[strcspn(clave, "\n")] = '\0';

        // En C, las cadenas se comparan con strcmp(). 
        // Devuelve 0 si las cadenas son exactamente iguales.
        usuarioOk = strcmp(usuario, "admin") == 0;
        claveOk = strcmp(clave, "Ina2026") == 0;

        if (usuarioOk && claveOk){
            strcpy(usuario, nombre);
            strcat(usuario, " ");
            strcat(usuario, apellidos);

            printf("===== CREDENCIALES =====\n");
            printf("Usuario: %s\n", usuario);
            printf( "Bienvenido al sistema, admin.\n");
            printf("Caracteres: %d\n", (int) strlen(usuario));
            printf("========================");
            break;
        } else {
            printf("Usuario o clave incorrectos\n");
            contador ++;
        }

    } while (contador != 3);
    

}