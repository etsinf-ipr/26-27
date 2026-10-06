#include <stdio.h>

int main() {

    int hora, minutos;
    printf("hora: "); scanf("%d", &hora);
    printf("minutos: "); scanf("%d", &minutos);
    printf("%02d:%02d\n", hora, minutos);

    return 0;
}