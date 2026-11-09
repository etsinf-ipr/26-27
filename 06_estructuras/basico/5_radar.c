/*
Un radar de tramo registra para cada coche la distancia del tramo y el tiempo. Define una
estructura vehículo que guarde estos dos datos y una función velocidad que tiene como
parámetro la estructura y calcula la velocidad media en el tramo.
Escribe un main para probar su funcionamiento
*/

#include <stdio.h>

struct vehiculo {
    float distancia; // en metros
    float tiempo;    // en segundos
};

float velocidad(struct vehiculo v) {
    // Evitar división por cero (no lo pide el enunciado, solo pòr si acaso)
    if (v.tiempo <= 0) 
        return 0; 
    return v.distancia / v.tiempo; // velocidad = distancia / tiempo
}

int main() {
    struct vehiculo coche;

    // Solicitar al usuario la distancia y el tiempo
    printf("Distancia (m.): ");
    scanf("%f", &coche.distancia);
    
    printf("Tiempo (s.): ");
    scanf("%f", &coche.tiempo);

    // Calcular la velocidad media
    float vel = velocidad(coche);

    // Mostrar el resultado
    printf("Velocidad media: %.2f m/s\n", vel);

    return 0;
}