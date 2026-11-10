#include <stdio.h>

struct hora{
    int h, m;
};

int es_valida(struct hora t) {
    return (t.h >= 0 && t.h <= 23) && (t.m >= 0 && t.m <= 59);
}

int minutos(struct hora t) {
    return t.h * 60 + t.m;
}

int main() {
    struct hora t;
    printf("Hora (hora:min): ");
    scanf("%d:%d", &t.h, &t.m);
    
    if(es_valida(t)) 
        printf("Minutos: %d\n", minutos(t));
    else 
        printf("Hora inválida\n");

    return 0; 
}