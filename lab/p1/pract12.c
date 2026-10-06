#include <stdio.h>

int main() {

    int hora, minutos;
    printf("hora 1 (hh:mm): "); 
    scanf("%d:%d", &hora, &minutos);
    int min1 = hora * 60 + minutos;

    printf("hora 2 (hh:mm): "); 
    scanf("%d:%d", &hora, &minutos);
    int min2 = hora * 60 + minutos;
    
    printf("diferencia: %d\n", min2 - min1);

    return 0;
}