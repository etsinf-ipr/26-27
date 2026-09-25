/*
 * Ejercicio 4: Función con decisiones internas
 * 
 * Escribe una función calificacion(nota) que devuelva una letra:
 * - 'Aprobado' si la nota >= 5
 * - 'Suspenso' si la nota < 5
 * 
 * El main() debe pedir una nota y mostrar el resultado.
 */

#include <stdio.h>

void calificacion(float nota) {
    if (nota >= 5) {
        printf("Aprobado\n");
    } else {
        printf("Suspenso\n");
    }
}

int main() {
    // Pide unanota
    float nota;
    printf("Introduce una nota: ");
    scanf("%f", &nota);

    // muestra la calificación usando la función
    calificacion(nota);
    
    return 0;
