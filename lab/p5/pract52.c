/*
    simula la ocupación del parking usando una normal
    de media 50 y desviacion 10
    plaza() genera una plaza aleatoria con la distribución normal
    simula_llegadas() simula la llegada de n coches al parking
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define N_PLAZAS 100
enum {LIBRE, OCUPADA, RESERVADA, AVERIADA};

void inicializar(int plazas[], int estado){
    for(int i=0; i<N_PLAZAS; i++)
        plazas[i] = estado;
}

char* nombre_estado(int estado){
    switch(estado){
        case LIBRE: return "Libre";
        case OCUPADA: return "Ocupada";
        case RESERVADA: return "Reservada";
        case AVERIADA: return "Averiada";
        default: return "Desconocido";
    }
}

void mostrar(int plazas[]){
    for(int i=0; i<N_PLAZAS; i++){
        printf("Plaza %d: %s\n", i, nombre_estado(plazas[i]));
    }
}

int plaza(){
    // genera un número aleatorio con distribución normal
    // media 50, desviación 10 usando el método de Box-Muller
    // x + 1.0 / (RAND_MAX + 2.0) para evitar log(0)
    int plaza;
    do{
        float u1 = (rand() + 1.0) / (RAND_MAX + 2.0);
        float u2 = (rand() + 1.0) / (RAND_MAX + 2.0);
        float z = sqrt(-2.0 * log(u1)) * cos(2.0 * M_PI * u2);
        plaza = (int)(z * 10 + 50);
    } while(plaza < 0 || plaza >= N_PLAZAS);
    return plaza;
}

void simula_llegadas(int plazas[], int n){
    int p;
    for(int i=0; i<n; i++){
        do{
            p = plaza();
        } while(plazas[p] != LIBRE);
        plazas[p] = OCUPADA;
    }
}

int main(){
    int plazas[N_PLAZAS];

    srand(time(NULL)); // inicializa la semilla para números aleatorios
    inicializar(plazas, LIBRE);
    simula_llegadas(plazas, 50);
    mostrar(plazas);

    return 0;
}   