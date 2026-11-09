/*
Las categorías de los libros del ejercicio 1 según su letra son: ‘C’ clásico, ‘D’ divulgación,
‘E’ ensayo, ‘N’ novela). Crea una función que imprima por pantalla la información de un
libro, mostrando el nombre completo de la categoría. Escribe una función main para
comprobar su funcionamiento con varios tipos de libro
*/

#include <stdio.h>

struct libro {
    int isbn;
    float precio;
    char categoria;
};

void imprimir(struct libro lib) {
    printf("ISBN: %d\n", lib.isbn);
    printf("Precio: %.2f\n", lib.precio);
    switch (lib.categoria) {
        case 'C':
            printf("Categoria: Clásico\n");
            break;
        case 'D':
            printf("Categoria: Divulgación\n");
            break;
        case 'E':
            printf("Categoria: Ensayo\n");
            break;
        case 'N':
            printf("Categoria: Novela\n");
            break;
        default:
            printf("Categoria: Desconocida\n");
    }
}

int main() {
    struct libro coraline = {123456, 29.99, 'N'};

    printf("ISBN: %d\n", coraline.isbn);
    printf("Precio: %.2f\n", coraline.precio);
    printf("Categoria: %c\n", coraline.categoria);

    return 0;
}