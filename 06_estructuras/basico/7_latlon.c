/*
Crea una estructura para almacenar las coordenadas de un punto (latitud y longitud) y una
función que devuelva si las coordenadas están en el hemisferio norte (1) o sur (2). La
función devolverá 0 si el punto se encuentra exactamente sobre el Ecuador.
*/

#include <stdio.h>

struct coordenadas {
    float latitud;
    float longitud;
};

int hemisferio(struct coordenadas punto) {
    if (punto.latitud > 0) {
        return 1; // Hemisferio norte
    } else if (punto.latitud < 0) {
        return 2; // Hemisferio sur
    } else {
        return 0; // Sobre el Ecuador
    }
}

int main() {
    struct coordenadas punto;

    // Solicitar al usuario la latitud y longitud
    printf("Latitud (-90 / +90): ");
    scanf("%f", &punto.latitud);
    
    printf("Longitud (-180 / +180): ");
    scanf("%f", &punto.longitud);

    // Determinar el hemisferio
    int resultado = hemisferio(punto);

    // Mostrar el resultado
    if (resultado == 1) {
        printf("El punto está en el hemisferio norte.\n");
    } else if (resultado == 2) {
        printf("El punto está en el hemisferio sur.\n");
    } else {
        printf("El punto está sobre el Ecuador.\n");
    }

    return 0;
}