/*
    generar un vector de N_PLAZAS para el parking
    inicialziar() rellena todas lals plaza scon un estado
    nombre_estado() devuelve el nombre del estado
    mostrar() muestra el estado de todas las plazas
*/

#include <stdio.h>
#include <string.h>

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

int main(){
    int plazas[N_PLAZAS];

    inicializar(plazas, LIBRE);
    mostrar(plazas);

    return 0;
}   