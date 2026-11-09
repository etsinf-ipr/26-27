#include <stdio.h>
#include <stdlib.h>
#define CAPACIDAD 80

int main(int argc, char *argv[]){
    int nparadas = atoi(argv[1]);
    int suben = atoi(argv[2]);
    int bajan = atoi(argv[3]);
    int ocupacion = nparadas * (suben - bajan);
    if( ocupacion < CAPACIDAD )
        printf("Válido\n");
    else
        printf("No válido\n");
    printf("Margen: %d plazas\n", CAPACIDAD - ocupacion);

}