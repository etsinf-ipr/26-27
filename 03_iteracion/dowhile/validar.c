#include <stdio.h>

int main(){

    int hora;

    do{
        printf("Hora (0-23): ");
        scanf("%d", &hora);
    }while(hora < 0 || hora > 23);
    
    printf("Son las %d horas\n", hora);
    return 0;
}