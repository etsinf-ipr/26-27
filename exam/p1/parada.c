#include <stdio.h>
#define CAPACIDAD 80

int main(){
    int ocupacion, suben, bajan;
    printf("Ocupación: ");
    scanf("%d", &ocupacion);
    printf("Suben: ");
    scanf("%d", &suben);
    printf("Bajan: ");
    scanf("%d", &bajan);

    int final = ocupacion + suben - bajan;
    float porcentaje = (final * 100.0) / CAPACIDAD;
    printf("Ocupación final: %d\n", final);
    printf("Porcentaje de ocupación: %.1f%%\n", porcentaje);
}