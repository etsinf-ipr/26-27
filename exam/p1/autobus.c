#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CAPACIDAD 80

int main(){
    srand(time(NULL));
    int nparadas, suben, bajan;
    printf("Paradas: ");
    scanf("%d", &nparadas);
    
    int ocup = 0;
    for(int i = 1; i <= nparadas; i++){
        printf("Parada #%d: ", i);
        pasajeros(&ocup, &suben, &bajan);
        printf("Suben %2d - Bajan %2d - Ocupación %2d\n", 
               suben, bajan, ocupacion);
        float porcentaje = ocupacion(ocup);
        printf("(%.1f%%)\n", porcentaje);
    }
    return 0;
}