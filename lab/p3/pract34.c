
#include <stdio.h>
#define TMIN -100
#define TMAX 80
#define FIN  999

int es_valida(float temp){
    return (temp >= TMIN && temp <= TMAX);
}

void minmax(float t, float *min, float *max){
    // opcion 1: usando if
    if(t > *max) *max = t;
    // opcions 2: usando operador ternario
    *min = (t < *min) ? t : *min;
}

int main(){

    float t;
    float min = TMAX; // alternativa: min = INFINITY
    float max = TMIN; // alternativa: max = -INFINITY
    
    // lee la primera temperatura
    // no hace falta comprobar si es valida
    // porque es lo primero que se hace en el bucle
    printf("temperaturas:\n> ");
    scanf("%f", &t);
    
    // lee el resto
    // ¿por qué no puede hacerse con un do-while sin más?
    while(t != FIN){
        if(es_valida(t))
            minmax(t, &min, &max);
        printf("> "); 
        scanf("%f", &t);
    }

    // muestra las temperaturas máxima y mínima
    printf("T min: %.1f - T Max: %.1f\n", min, max);
    return 0;
}