#include <stdio.h>

#define ES_VALIDA(h,m) ((h) >= 0 && (h) <=23 && (m) >= 0 && (m) <=59 )

void en_orden(int h1, int m1, int h2, int m2){
    int min1 = h1 * 60 + m1;
    int min2 = h2 * 60 + m2;
    if( min1 < min2 )
        printf("%02d:%02d - %02d:%02d\n", h1, m1, h2, m2);
    else
        printf("%02d:%02d - %02d:%02d\n", h2, m2, h1, m1);
}

int main() {

    // pide las dos horas
    int h1, m1, h2 ,m2;
    printf("hora1 (hh:mm): "); 
    scanf("%d:%d", &h1, &m1);
    printf("hora2 (hh:mm): "); 
    scanf("%d:%d", &h2, &m2);
    
    if(ES_VALIDA(h1,m1) && ES_VALIDA(h2,m2))
        en_orden(h1, m1, h2, m2);
 
    return 0;
}