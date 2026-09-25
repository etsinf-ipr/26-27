/*
Leer N notas (0–10). y calcula la media de las que sean correctas
*/

#include <stdio.h>

int main() {

    // introduce cuantas notas va a leer
    int num_notas; 
    printf("Introduce el número de notas: ");
    scanf("%d", &num_notas);

    nota, suma = 0, contador = 0;
    int nota; // cada una de las notas
    float suma = 0; // suma de las notas correctas (float para que la media sea decimal)
    int ncorrectas = 0; // número de notas correctas

    // bucle para la introduccion de las notas
    for (int i = 0; i < num_notas; i++) {
        // pide una nota
        // estamos más acostumbrados a contar 1,2,3... pero los bucles suelen empezar en 0 -> i+1
        printf("Nota %d: ", i+1); //
        scanf("%d", &nota);
        // si es corercta la acumula
        if (nota >= 0 && nota <= 10) {
            suma = suma + nota;
            ncorrectas++;
        }
    }
    // importante para evitar división por cero
    if (ncorrectas > 0) {
        printf("Media: %.2f\n", suma / ncorrectas);
    return 0;
}