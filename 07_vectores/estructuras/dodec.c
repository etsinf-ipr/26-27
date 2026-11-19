/*
    Uso de un vector de estructuras para almacenar los datos de un dodecagono
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUM_LADOS 12

struct _punto{
    float x;
    float y;
};
typedef struct _punto punto_t;

// distancia euclídea entre dos puntos
// sqrt((x2-x1)^2 + (y2-y1)^2)
float distancia(punto_t p, punto_t q){
    float dx = p.x - q.x;
    float dy = p.y - q.y;
    return sqrt(dx*dx + dy*dy);
}

float perimetro(punto_t d[]){
    float suma = 0;
    // opcion 1: cerramos el poliogono a mano
    for(int i=0; i<NUM_LADOS-1; i++){
        suma += distancia(d[i], d[i+1]);
    }
    suma += distancia(d[NUM_LADOS-1], d[0]);
    // opcion 2: como un reloj: el siguiente de 11 es 0
    for(int i=0; i<NUM_LADOS; i++){
        // estamos haciendo una operación que solo es util una vez
        int next = (i+1) % NUM_LADOS;
        suma += distancia(d[i], d[next]);
    }
    return suma;
}

int main(){
    punto_t d[NUM_LADOS];

    // Inicializar los puntos del dodecágono
    // Esto no lo hemos visto
    // En un polígono regular, los vértices siempre están en la circunferencia
    // Con seno y coseno obtenemos la compenente x e y de cada vértice
    for(int i=0; i<NUM_LADOS; i++){
        d[i].x = cos(2 * M_PI * i / NUM_LADOS);
        d[i].y = sin(2 * M_PI * i / NUM_LADOS);
    }
    ///////////////////////

    float p = perimetro(d);
    printf("Perimetro: %.2f\n", p);
    return 0;
}