/*
    Programa que recibe el número del mes
    y muestra cuántos días tiene (sin considerar bisiestos)
    El mes se recibe por línea de comandos
    Define una función que recibe el mes
    y devuelve el número de días
*/

#include <stdio.h>
#include <stdlib.h>

// funcion que devuelve los días del mes
int dias(int mes){
    int ndias;
    switch(mes){
    // el case entra por el mes correspondiente
    // y va bajando hasta encontrar la instrucción
    // con los días que le corresponden
    case 1: 
    case 3: 
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        ndias = 31; break;
        // tambien puede hacerse
        //return 31;
    case 4: 
    case 6: 
    case 9: 
    case 11: 
        ndias = 30; break;
    case 2: 
        ndias = 28; break;
    }
    // si los case hacen el return este sobra
    return ndias;
    
}

int main(int argc, char *argv[]){

    // obtener el mes
    int mes = atoi(argv[1]);

    // calcula el número de días que tiene
    int num_dias = dias(mes);
    printf("El mes %d tiene %d dias\n", mes, num_dias);
    printf("El mes %d tiene %d dias\n", mes, dias(mes));

    return 0;
}