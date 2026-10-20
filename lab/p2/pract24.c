#include <stdio.h>

int es_posterior(int a, int b) {
    return a > b;
}   


int a_minutos(int h, int m) {
    return h * 60 + m;
}

int es_valida(int h, int m) {
    return (h >= 0 && h < 24) && (m >= 0 && m < 60);
}

int main(){

    int h, m;
    int prev = -1;
    //lee la primera hora
    printf("Hora (h:m): ");
    scanf("%d:%d", &h, &m);
    int minutos = a_minutos(h, m);

    // >= para el caso de que la hora sea inválida
    while(minutos >= prev) {
        // guardar la hora anterior
        prev = minutos;
        // pide una hora nueva
        printf("Hora (h:m): ");
        scanf("%d:%d", &h, &m);
        // comprueba que sea válida
        if( es_valida(h,m)) {
            minutos = a_minutos(h, m);
        }
    }

    return 0;
}