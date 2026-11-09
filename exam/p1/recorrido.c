#include <stdio.h>
#define CAPACIDAD 80

int main(){
    int nparadas, suben, bajan;
    printf("Paradas: ");
    scanf("%d", &nparadas);
    
    int ocupacion = 0;
    int parada = 0;
    while(parada < nparadas && ocupacion <= CAPACIDAD){
        printf("Suben: ");
        scanf("%d", &suben);
        printf("Bajan: ");
        scanf("%d", &bajan);
        ocupacion += suben - bajan;
        parada++;
    }

    if(ocupacion > CAPACIDAD)
        printf("Insuficiente\n");
    return 0;
}