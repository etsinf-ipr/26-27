/*
escribe un programa en C con la definición de la estructura
struct vehiculo que lea los datos de dos vehículos en el aparcamiento. Si
todos los datos son válidos, comprobar que los vehículos son distintos,
es decir, que sus matrículas no coinciden, e imprimir un mensaje en
pantalla que lo indique. Se recomienda implementar una función iguales
que reciba dos struct vehiculo y devuelva 1 si son el mismo vehículo y 0
en caso contrario.
*/

#include <stdio.h>
// opcional para usar isdigit() y isupper()
#include <ctype.h>
#include <string.h>



struct vehiculo {
    char matricula[8]; // 7 caracteres + '\0'
    int plaza;
    char tarifa;
};

#define TARIFA_RESIDENTE 1.50
#define TARIFA_VISITANTE 3.50

int es_valido(struct vehiculo v) {
    // Comprobar que la matrícula tiene 4 números al principio
    for (int i = 0; i < 4; i++) {
        // opcion usando funciones de ctype.h
        // if(isdigit(v.matricula[i]) == 0) {
        if (v.matricula[i] < '0' || v.matricula[i] > '9') {
            return 0; // No es válido
        }
    }
    // Comprobar que la matrícula tiene 3 letras mayúsculas al final
    for (int i = 4; i < 7; i++) {
        // opcion usando funciones de ctype.h
        // if(isupper(v.matricula[i]) == 0) {
        if (v.matricula[i] < 'A' || v.matricula[i] > 'Z') {
            return 0; // No es válido
        }
    }
    return 1; // Es válido
}

int iguales(struct vehiculo v1, struct vehiculo v2) {
    // Comparar las matrículas de los dos vehículos
    // Devuelve 1 si son iguales, 0 si no
    return strcmp(v1.matricula, v2.matricula) == 0; 
}

int main() {
    struct vehiculo v1, v2;

    // Solicitar al usuario los datos de los vehículos
    printf("**Vehiculo 1**\n");
    printf("Matrícula (9999ABC): ");
    scanf("%7s", v1.matricula); // Limitar a 7 caracteres
    printf("Plaza: ");
    scanf("%d", &v1.plaza);
    printf("Tarifa (R/V): ");
    scanf(" %c", &v1.tarifa); // Espacio antes de %c para ignorar el salto de línea

    printf("**Vehiculo 2**\n");
    printf("Matrícula (9999ABC): ");
    scanf("%7s", v2.matricula); // Limitar a 7 caracteres
    printf("Plaza: ");
    scanf("%d", &v2.plaza);
    printf("Tarifa (R/V): ");
    scanf(" %c", &v2.tarifa); // Espacio antes de %c para ignorar el salto de línea

    // Comprobar si el vehículo es válido
    if (es_valido(v1) && es_valido(v2)) {
        if (iguales(v1, v2)) {
            printf("Mismo vehículo\n");
        } else {
            printf("Vehículos distintos\n");
        }
    } else {
        printf("Error: Matrícula inválida\n");
    }

    return 0;
}