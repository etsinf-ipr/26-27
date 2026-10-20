#include <stdio.h>

int es_valida(int h, int m){
    return (h >= 0 && h <=23 && m >= 0 && m <=59);
}


void am_pm(int h, int m){
    //si es menor de 12, se muestra la hora con AM
    if( h < 12 ){
        if( h == 0)
            h = 12;
        printf("%02d:%02d AM\n", h, m);
    }
    else{
        h -= 12;
        if( h == 0)
            h = 12;
        printf("%02d:%02d PM\n", h, m);    
    }
}


int main(){
    int hora, min;
    // pregunta la hora
    printf("Hora (h:m) ");
    scanf("%d:%d", &hora, &min);
    
    // si es válida, muestra los minutos totales
    if(es_valida(hora, min))
        am_pm(hora, min);
    return 0;
}