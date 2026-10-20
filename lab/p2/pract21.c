#include <stdio.h>


int a_minutos(int h, int m){
    return h * 60 + m;
}

int es_valida(int h, int m){
    return (h >= 0 && h <=23 && m >= 0 && m <=59);
}

int main(){
    int hora, min;
    // pregunta la hora
    printf("Hora (h:m) ");
    scanf("%d:%d", &hora, &min);
    
    // si es válida, muestra los minutos totales
    if(es_valida(hora, min))
        print("Total minutos: %d\n", a_minutos(hora, min));
    return 0;
}