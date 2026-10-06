#include <stdio.h>

int main() {

    // pide las dos horas
    int hora, minutos;
    printf("desde (hh:mm): "); 
    scanf("%d:%d", &hora, &minutos);
    // convierte el instante de inicio en minutos
    int inicio = hora * 60 + minutos;

    printf("hasta (hh:mm): "); 
    scanf("%d:%d", &hora, &minutos);
    // convierte el instante de inicio en minutos
    int fin = hora * 60 + minutos;
 
    // muestra todas las horas intermedias
    for(int ahora = inicio; ahora <=fin; ahora++)
        // 90 min = 1h 30 min
        // 90 / 60 = 1 (div entera), 90 % 60 = 30 (resto)
        printf("%02d:%02d ", ahora / 60, ahora % 60);

    return 0;
}