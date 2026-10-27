#include <stdio.h>

#define TMIN -100.0
#define TMAX 80.0

int es_valida(float temp){
    return (temp >= TMIN && temp <= TMAX);
}

int main(){

    float t;
    printf("temperatura: ");
    scanf("%f", &t);
    if(es_valida(t)){
        printf("%.1f\n", t);
    }
    else{
        printf("[error] %.1f <= t <= %.1f\n", TMIN, TMAX);
    }
    return 0;
}