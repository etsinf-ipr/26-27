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
    // (x + 1.0) / (RAND_MAX + 2.0) para evitar log(0)
    int plaza;
    do{
        float u1 = (rand() + 1.0) / (RAND_MAX + 2.0);
        float u2 = (rand() + 1.0) / (RAND_MAX + 2.0);
        float z = sqrt(-2.0 * log(u1)) * cos(2.0 * M_PI * u2);
        plaza = (int)(z * 20 + 50);
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

void estado_plazas(int plazas[], int estado[]){
    for(int i=0; i<N_PLAZAS; i++){
        int e = plazas[i];
        estado[e]++;
    }
}

void simula_averias(int plazas[], float p){
    for(int i=0; i < N_PLAZAS; i++)
        if((float)rand() / RAND_MAX < p)
            plazas[i] = AVERIADA;
}



/* 
esto no lo pide el enunciado. Mostrar de forma gráfica la ocupación del parking
usando símbolos para cada estado
 */
void mapa(int plazas[]){
    char e[4] = {'.', 'o', '*', 'x'};
    // cabecera
    for(int i=0; i<N_PLAZAS; i++){
        printf("%d", i/10);
    }
    printf("\n");
      for(int i=0; i<N_PLAZAS; i++){
        printf("%d", i%10);
    }
    printf("\n");
    // estado
    for(int i=0; i<N_PLAZAS; i++){
        printf("%c", e[plazas[i]]);
    }
    printf("\n");
}


int main(){
    int plazas[N_PLAZAS];
    int estado[4] = {0, 0, 0, 0};

    srand(time(NULL)); // inicializa la semilla para números aleatorios
    inicializar(plazas, LIBRE);
    // simula un 5% de plazas averiadas
    simula_averias(plazas, 0.05);
    // simula la llegada de 60 coches
    simula_llegadas(plazas, 60);
    mostrar(plazas);
    estado_plazas(plazas, estado);
    printf("Estado de las plazas:\n");
    printf("Libres: %d\n", estado[LIBRE]);
    printf("Ocupadas: %d\n", estado[OCUPADA]);
    printf("Reservadas: %d\n", estado[RESERVADA]);
    printf("Averiadas: %d\n", estado[AVERIADA]);
    // muestra el mapa del parking de forma gráfica
    mapa(plazas);

    return 0;
}   