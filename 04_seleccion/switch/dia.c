/*
    Programa que recibe el dïa de la semana (número)
    y muestra por pantalla el nombre del día que le corresponde
    El número se recibe por línea de comandos
    Define una función que recibe el día y muestra el texto
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// funcion que imprime el nombre del dia
void dia_semana(int dia){
    char nombre[10];
    switch(dia){
    case 1: 
        strcpy(nombre,"lunes"); 
        break;
    case 2: printf("martes\n"); break;
    case 3: printf("miercoles\n"); break;
    case 4: printf("jueves\n"); break;
    case 5: printf("viernes\n"); break;
    case 6: printf("sabado\n"); break;
    case 7: printf("domingo\n"); break;
    default: printf("día inválido\n");
    }
    printf("%s\n", nombre);
}

int main(int argc, char *argv[]){

    // obtener el dia
    int dia = atoi(argv[1]);

    // mostrar el nombre del dia
    dia_semana(dia);

    return 0;
}