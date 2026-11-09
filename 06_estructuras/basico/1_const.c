/*
Define una estructura libro con los campos isbn 
(un entero que sirve como identificador), precio y un carácter para la categoria 
(‘C’ clásico, ‘D’ divulgación, ‘E’ ensayo, ‘N’ novela). 
Declara una variable de tipo Libro en main e inicialízala usando constantes 
(sin scanf). Muestra los valores por pantalla.
*/

#include <stdio.h>

struct libro {
    int isbn;
    float precio;
    char categoria;
};

int main() {
    struct libro coraline = {123456, 29.99, 'N'};

    printf("ISBN: %d\n", coraline.isbn);
    printf("Precio: %.2f\n", coraline.precio);
    printf("Categoria: %c\n", coraline.categoria);

    return 0;
}

