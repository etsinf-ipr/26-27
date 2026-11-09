/*
Completa la estructura del enunciado 1 a través de datos que recibe 
por línea de comandos. Muestra la información final por pantalla. 
Ejemplo:
./libro 2313 12.5 N
Ten en cuenta que “N” es una cadena de caracteres. 
Piensa cómo extraer solo la primera letra (que es la única que hay).
  0123456
0 ./libro
1 2313
2 12.5
3 N
*/

#include <stdio.h>

struct libro {
    int isbn;
    float precio;
    char categoria;
};

int main(int argc, char *argv[]) {
    struct libro coraline;
    // Comprueba que se han pasado los argumentos correctos
    if (argc != 4) {
        printf("Uso: %s <isbn> <precio> <categoria>\n", argv[0]);
        return 1;
    }
    // atoi convierte una cadena a un entero
    coraline.isbn = atoi(argv[1]);
    // atof convierte una cadena a un float
    coraline.precio = atof(argv[2]);
    // argv[3] = "N\0" (cadena de caracteres), queremos solo el primer carácter
    // argv[3][0]='N', argv[3][1] = '\0' 
    // argv[3][0] es el primer carácter de la cadena, que es lo que necesitamos
    coraline.categoria = argv[3][0];

    printf("ISBN: %d\n", coraline.isbn);
    printf("Precio: %.2f\n", coraline.precio);
    printf("Categoria: %c\n", coraline.categoria);

    return 0;
}

