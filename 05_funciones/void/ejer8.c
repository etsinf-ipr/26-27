/*
 * Ejercicio 5: Función con bucle interno

 Escribe una función tabla(numero) que muestre la tabla de multiplicar del valor que se pasa en numero, siempre que esté entre 1 y 10. Llámala desde el programa principal. 
 */

#include <stdio.h>

void tabla(int numero) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %2d = %2d\n", numero, i, numero * i);
    }
}

int main() {
    // pide un numero
    int num;
    printf("Introduce un numero: ");
    scanf("%d", &num);
    
    // comprueba que está entre 1 y 10
    if (num >= 1 &&  num <= 10) {
        // muestra la tabla
        tabla(num);
    }
    return 0;
}