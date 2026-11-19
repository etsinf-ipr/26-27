/*
    estructuras anidadas
    un circulo es un punto y un radio
*/
#include <stdio.h>

struct _punto{
    int x;
    int y;
};
typedef struct _punto punto_t;

struct _circulo{
    punto_t centro;
    int radio;
};
typedef struct _circulo circulo_t;

circulo_t crear(int radio,int x, int y){
    circulo_t c;
    c.centro.x = x;
    c.centro.y = y;
    c.radio = radio;
    return c;
}

void mover(circulo_t *c, int nx, int ny){
    c->centro.x = nx;
    c->centro.y = ny;
}

//alternativa ¿cómo sería si en lugar de n, ny pasampos directamente elpunto?
void mover_con_punto(circulo_t *c, punto_t np){
    //No es necesario hacer 
    //c->centro.x = np.x; 
    //c->centro.y = np.y;
    //Se pueden asignar directamente las estructuras (si no continenen punteros)
    c->centro = np;
}

// mostrar el circulo
void mostrar(circulo_t c){
    printf("Centro: (%d, %d)\n", c.centro.x, c.centro.y);
    printf("Radio: %d\n", c.radio);
}

int main(){
    // Crear un círculo con radio 5 y centro en (10, 20)
    circulo_t c = crear(5, 10, 20);
    mostrar(c);

    // mueve el circulo a la posición (30, 40)
    mover(&c, 30, 40);
    mostrar(c);

    // mueve el circulo a la posición (50, 60) usando un punto
    punto_t p = {50, 60};
    // tambióen se puede hacer así:
    // punto_t p;
    // p.x = 50;
    // p.y = 60;    
    mover_con_punto(&c, p);
    mostrar(c);

    // mueve el circulo a la posición (70, 80) usando un punto literal
    // (sin declarar una variable)
    // Hay que hacer el cast (punto_t) para que el compilador sepa que es un punto
    mover_con_punto(&c, (punto_t){70, 80});
    mostrar(c);
    return 0;
}   