
// Para usar printf y scanf
#include <stdio.h>

// Para usar rand y srand
#include <stdlib.h>

// Para usar time
#include <time.h>


int main() {

    int dado;

    /*
        Inicializa la semilla de números aleatorios
        para que cada vez el resutlado sea distinto

        IMPORTANTE: solo se hace una vez al inicio del programa
    */
    srand(time(NULL));
    
    // lanza un dado 10 veces
    for(int i = 0; i < 10; i++){
        // genera un número al azar entre 1 y 6
        dado = 1 + rand() % 6;
        printf("%d ", dado);
    }
    printf("\n");

    return 0;
}