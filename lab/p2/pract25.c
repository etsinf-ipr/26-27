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

    int h, m, minutos;
    int max = 0; // mayor hora hasta el momento

    for(int i = 0; i < 10; i++){
        // pide una hora nueva
        printf("Hora %d (h:m): ", i+1);
        scanf("%d:%d", &h, &m);
        // comprueba que sea válida
        if( es_valida(h,m)) {
            minutos = a_minutos(h, m);
            // si es mayor que la actual, la guarda
            if(minutos > max){
                max = minutos;
            }
        }
    }
    printf("Mayor: %0d:%0d\n", max/60, max%60);

    return 0;
}