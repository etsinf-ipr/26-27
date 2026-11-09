#include <stdio.h>
#include <stdlib.h>
#define CAPACIDAD 80

void pasajeros(int *ocupacion, int *suben, int *bajan){
    *bajan = rand() % 11;
    if(*bajan > *ocupacion)
        *bajan = *ocupacion;
    *ocupacion -= *bajan;
    int disponible = CAPACIDAD - *ocupacion;
    // opcion 1
    *suben = rand() % 11;
    if(*suben > disponible)
        *suben = disponible;
    // opcion 2
    *suben = rand() % (disponible + 1);
    *ocupacion += *suben;
}

int main(){
    srand(time(NULL));
    int suben, bajan;
    int ocupacion = 13;
    pasajeros(&ocupacion, &suben, &bajan);
    printf("Suben %2d - Bajan %2d - Ocupación %2d\n", 
               suben, bajan, ocupacion);
    return 0;
}   