#include <stdio.h>


int main(){

    int x = 3;  // x es un entero
    int *p;     // p es un punetero a un entero
    
    // guardamos en p la dir. de memoria donde se guarda x
    p = &x;

    // x y *p son dos formas de acceder al 3 
    printf("x: %d\n", x);
    printf("*p: %d\n", *p);

    // &x y p son dos formas de acceder 
    // a la posición de memnoria donde se guarda el 3
    printf("p: %p\n", p);
    printf("&x: %p\n", &x);


    return 0;
}