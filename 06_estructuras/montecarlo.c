/*
    aproximación de PI por el método de montecarlo

    circulo de radio 1 centrado en (0,0)
    cuadradio de lado 2, de -1 a +1
    n / N = (pi * r * r) / (2r * 2r) -> n / N = pi / 4 -> pi = 4 * n / N 
*/
#include <stdio.h>
#include <stdlib.h>

struct punto{
    float x, y;
};

struct circulo{
    float cx, cy; //centro
    float radio;
};


int esta_dentro(struct punto p, struct circulo c){
    // fórmula general
    // (x - x0)^2 + (y - y0)^2 <= r^2
    // si centro (0,0) y radio = 1, x*x + y*y <= 1
    float dx = p.x - c.cx;
    float dy = p.y - c.cy;
    return dx*dx + dy*dy <= c.radio*c.radio;
}

int generar_puntos(struct circulo c, int total_puntos){
    int dentro = 0;
    struct punto p;
    for(int i=0; i<total_puntos; i++){
        /*
            generar un punto aleatorio en el cuadrado [-1,1] x [-1,1]
            rand() genera entero entre 0 y RAND_MAX
            rand() / RAND_MAX genera un número entre 0 y 1 (ojo división entera)
            x 2 genera un número entre 0 y 2
            -1 tenemos un número entre -1 y 1
        */
        p.x = 2.0 * rand() / RAND_MAX - 1;
        p.y = 2.0 * rand() / RAND_MAX - 1;
        // formula general
        // p.x = 2.0 * c.radio * rand() / RAND_MAX - c.radio;
        if(esta_dentro(p, c))
            dentro++;
    }
    return dentro;
}


int main(int argc, char *argv[]){
    //circulo unitario con centro en (0,0)
    struct circulo c = {0, 0, 1}; 

    // control de num de argumentos correcto
    if (argc < 2){
        printf("Uso: %s <numero de puntos>\n", argv[0]);
        return 1;
    }
    // obtener el número de puntos
    int total_puntos = atoi(argv[1]);
    // contar cuántos puntos caen dentro del círculo
    int dentro = generar_puntos(c, total_puntos);
    // calcular del valor de pi
    float pi = 4.0 * dentro / total_puntos;
    // la precision máxima suele ser 9 para float y 17 para double
    printf("PI = %.9f\n", pi);
    return 0;
}