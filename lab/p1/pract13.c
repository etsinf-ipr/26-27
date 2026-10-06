#include <stdio.h>

int main() {

    int hora, minutos;
    printf("hora (hh:mm): "); 
    scanf("%d:%d", &hora, &minutos);
    if( hora >= 0 && hora <= 23 && minutos >= 0 && minutos <= 59)
        printf("%02d:%02d\n", hora, minutos);

    return 0;
}