#include <stdio.h>

int a_minutos(int h, int m){
    return h * 60 + m;
}


int es_valida(int h, int m){
    return (h >= 0 && h <=23 && m >= 0 && m <=59);
}


int solapan(int ini1, int fin1, int ini2, int fin2){
    /*
    Hay solape si

     ini1 [------] fin1
        ini2 [-------] fin2

         ini1 [------] fin1
    ini2 [-------] fin2

    No hay solape si

    ini1 [------] fin1
               ini2 [-------] fin2

               ini1 [------] fin1
    ini2 [-------] fin2 
    */
    if (ini2 > fin1 || ini1 > fin2)
        return 0; 
    else
        return 1;
    // en una línea
    // return (ini2 <= fin1 && ini1 <= fin2);
}


int main(){
    int hora, min;
    
    // pide un intervalo
    printf("Intervalo 1:\n ");
    scanf("%d:%d", &hora, &min);
    // si no es válida se sale
    if(!es_valida(hora, min)) return 1;
    // convierte el instante en minutos
    int ini1 = a_minutos(hora, min);
    // hace lo mismo con el final del intervalo
    scanf("%d:%d", &hora, &min);
    if(!es_valida(hora, min)) return 1;
    int fin1 = a_minutos(hora, min);
    
    // lo mismo con el segundo intervalo
    printf("Intervalo 2:\n ");
    scanf("%d:%d", &hora, &min);
    if(!es_valida(hora, min)) return 1;
    int ini2 = a_minutos(hora, min);
    scanf("%d:%d", &hora, &min);
    if(!es_valida(hora, min)) return 1;
    int fin2 = a_minutos(hora, min);
    
    // comprueba si solapan
    if(solapan(ini1, fin1, ini2, fin2))
        printf("Los intervalos solapan\n");
    else
        printf("Los intervalos NO solapan\n");
    
    return 0;
}