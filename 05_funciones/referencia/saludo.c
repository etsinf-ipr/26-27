#include <stdio.h>


void saluda(){
    printf("Hola\n");
}

int doble(int n){
    return 2 * n;
}

void no_cambia(int n){
    char c;
    n = 100;
}

void swap(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main(){

    // uso de una función que devuelve void
    saluda();

    // función que devuelve un valor
    int num;
    num = doble(2);
    printf("%d\n", num);
    printf("%d\n", doble(3));

    // los cambios dentro de una función no afectan al valor externo
    int n = 3;
    no_cambia(n);
    printf("%d\n", n);

    // paso de parámetros por referencia
    // los valores de las variables se modifican desde dentro de la función
    int x = 3;
    int y = 6;
    printf("%d - %d\n", x, y);
    swap(&x, &y);
    printf("%d - %d\n", x, y);
    return 0;
}