/*
Completa la estructura del enunciado anterior pidiendo al usuario los datos. 
Muestra los valores por pantalla.
*/

#include <stdio.h>

struct libro {
    int isbn;
    float precio;
    char categoria;
};

int main() {
    struct libro coraline;

    printf("Introduce el ISBN: ");
    scanf("%d", &coraline.isbn);

    printf("Introduce el precio: ");
    scanf("%f", &coraline.precio);

    printf("Introduce la categoria (C, D, E, N): ");
    //el espacio antes de %c es para consumir cualquier carácter 
    //de nueva línea que quede en el buffer
    scanf(" %c", &coraline.categoria);

    printf("ISBN: %d\n", coraline.isbn);
    printf("Precio: %.2f\n", coraline.precio);
    printf("Categoria: %c\n", coraline.categoria);

    return 0;
}

