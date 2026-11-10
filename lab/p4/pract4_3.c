/*
En el main define una variable del tipo struct vehiculo y pide sus datos
al usuario (matricula, plaza asignada y tarifa aplicada). La matrícula debe
leerse como una cadena de 7 caracteres 9999ABC, la plaza como un
entero y la tarifa con una letra. Si el vehículo es válido, se imprimirán
todos los datos y si no un mensaje de error.
Los datos son válidos si la matrícula está compuesta por 4 números
y 3 letras mayúsculas.
*/

#include <stdio.h>
// opcional para usar isdigit() y isupper()
#include <ctype.h>



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

int main() {
    struct vehiculo v;

    // Solicitar al usuario los datos del vehículo
    printf("Matrícula (9999ABC): ");
    scanf("%7s", v.matricula); // Limitar a 7 caracteres
    
    printf("Plaza: ");
    scanf("%d", &v.plaza);
    
    printf("Tarifa (R/V): ");
    scanf(" %c", &v.tarifa); // Espacio antes de %c para ignorar el salto de línea

    // Comprobar si el vehículo es válido
    if (es_valido(v)) {
        printf("Datos del vehículo:\n");
        printf("Matrícula: %s\n", v.matricula);
        printf("Plaza: %d\n", v.plaza);
        printf("Tarifa: %c\n", v.tarifa);
    } else {
        printf("Error: Matrícula inválida\n");
    }

    return 0;
}