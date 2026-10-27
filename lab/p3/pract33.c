#include <stdio.h>

#define TMIN -100.0
#define TMAX 80.0

float farenheit(float cel){
    // cel es float -> / es la división normal
    return cel * 9 / 5 + 32;
}

float kelvin(float cel){
    return cel + 273.15;
}

float rankine(float cel){
    return (cel + 273.15) * 9 / 5;
    // opcion
    // return kelvin(cel) * 9 / 5
}


int es_valida(float temp){
    return (temp >= TMIN && temp <= TMAX);
}

int seleccionar(){
    printf("1. Farenheit\n2. Kelvin\n3. Rankine\n4. Salir\n");
    int opc;
    do{
        printf("> ");
        scanf("%d", &opc);
    }while(opc < 1 || opc > 4);
    return opc;
}


float convertir(float temp, int opc){
    float res;
    switch(opc){
        case 1: res = farenheit(temp); break;
        case 2: res = kelvin(temp); break;
        case 3: res = rankine(temp); break;
    }
    return res;
}


int main(){
    // hay que declararla fuera del bucle
    int opcion;
    do{
        // pide temperatura
        float t;
        do{
            printf("temperatura: ");
            scanf("%f", &t);
        }while(!es_valida(t));
        
        // muestra el menu y selecciona la opcion
        opcion = seleccionar();
        // conversion de unidades
        if(opcion != 4){
            float res = convertir(t, opcion);
            printf("%.2f ºC = %.2f\n", t, res);
        }
    }while(opcion !=4);

    return 0;
}