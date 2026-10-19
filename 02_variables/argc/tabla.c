#include <stdio.h>
#include <stdlib.h>

void muestra_tabla(int n){
    for(int i = 1; i <=10; i++)
        printf("%d x %2d = %2d\n", n, i, n * i);
    printf("\n");
}


int main(int argc, char *argv[]) {
    int n;

    // comprueba que haya argumentos
    if( argc < 2){
        printf("Uso: tabla <num>\n");
        return 1;
    }
    // convierte a entero el primer argumento
    n = atoi(argv[1]);
    muestra_tabla(n);

    return 0;
}


