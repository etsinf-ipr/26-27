/*
Dadas tres coordenadas:
- esquina inferior izquierda
- esquina superior derecha
- un punto
escribe una función que devuelva 1 si el punto está dentro del rectángulo (latitud y
longitud) definido por las esquinas indicadas. Ten en cuenta que los valores de latitud y
longitud pueden ser negativos, dependiendo del hemisferio en el que se encuentren.
*/

#include <stdio.h>

struct coordenadas {
    float latitud;
    float longitud;
};

int dentro(struct coordenadas inf, struct coordenadas sup, struct coordenadas punto) {
    // Comprobar si el punto está dentro del rectángulo definido por las esquinas
    if (punto.latitud >= inf.latitud && punto.latitud <= sup.latitud &&
        punto.longitud >= inf.longitud && punto.longitud <= sup.longitud) {
        return 1; // El punto está dentro del rectángulo
    } else {
        return 0; // El punto está fuera del rectángulo
    }
}

int main() {
    struct coordenadas inf, sup, punto;

    // Solicitar al usuario las coordenadas de las esquinas y del punto
    printf("Esquina inferior izquierda (latitud longitud): ");
    scanf("%f %f", &inf.latitud, &inf.longitud);
    
    printf("Esquina superior derecha (latitud longitud): ");
    scanf("%f %f", &sup.latitud, &sup.longitud);
    
    printf("Punto a comprobar (latitud longitud): ");
    scanf("%f %f", &punto.latitud, &punto.longitud);

    // Comprobar si el punto está dentro del rectángulo
    int resultado = dentro(inf, sup, punto);

    // Mostrar el resultado
    if (resultado) {
        printf("El punto está dentro del rectángulo.\n");
    } else {
        printf("El punto está fuera del rectángulo.\n");
    }

    return 0;
}